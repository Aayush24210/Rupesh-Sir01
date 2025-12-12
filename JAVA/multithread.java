// class Mythread extends Thread {
//     public void run() {
//             System.out.println(Thread.currentThread().getName() + " is running");
//             for (int i = 0; i < 5; i++) {
//                 System.out.println(i);
//         }
//     }
//     class main {
//         public main(String[] args) {
//             Mythread t1 = new Mythread();
//             Mythread t2 = new Mythread();
//             t1.start();
//             t2.start();
//         }
//     }
// }

//in multithread.java file
//downloading animation
class DownloadThread extends Thread {
    public void run() {
        String animation = "|/-\\";
        for (int i = 0; i < 20; i++) {
            System.out.print("\rDownloading " + animation.charAt(i % animation.length()));
            try {
                Thread.sleep(200);
            } catch (InterruptedException e) {
                System.out.println("Download interrupted");
            }
        }
        System.out.println("\nDownload complete!");
    }
}
// Main class to start the download thread
class main {
    public main(String[] args) {
        DownloadThread downloadThread = new DownloadThread();
        downloadThread.start();
    }
}