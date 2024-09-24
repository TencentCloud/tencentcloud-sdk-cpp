/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetSummary返回参数结构体
                */
                class DescribeAssetSummaryResponse : public AbstractModel
                {
                public:
                    DescribeAssetSummaryResponse();
                    ~DescribeAssetSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用个数
                     * @return AppCnt 应用个数
                     * 
                     */
                    uint64_t GetAppCnt() const;

                    /**
                     * 判断参数 AppCnt 是否已赋值
                     * @return AppCnt 是否已赋值
                     * 
                     */
                    bool AppCntHasBeenSet() const;

                    /**
                     * 获取容器个数
                     * @return ContainerCnt 容器个数
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取暂停的容器个数
                     * @return ContainerPause 暂停的容器个数
                     * 
                     */
                    uint64_t GetContainerPause() const;

                    /**
                     * 判断参数 ContainerPause 是否已赋值
                     * @return ContainerPause 是否已赋值
                     * 
                     */
                    bool ContainerPauseHasBeenSet() const;

                    /**
                     * 获取运行的容器个数
                     * @return ContainerRunning 运行的容器个数
                     * 
                     */
                    uint64_t GetContainerRunning() const;

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取停止运行的容器个数
                     * @return ContainerStop 停止运行的容器个数
                     * 
                     */
                    uint64_t GetContainerStop() const;

                    /**
                     * 判断参数 ContainerStop 是否已赋值
                     * @return ContainerStop 是否已赋值
                     * 
                     */
                    bool ContainerStopHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据库个数
                     * @return DbCnt 数据库个数
                     * 
                     */
                    uint64_t GetDbCnt() const;

                    /**
                     * 判断参数 DbCnt 是否已赋值
                     * @return DbCnt 是否已赋值
                     * 
                     */
                    bool DbCntHasBeenSet() const;

                    /**
                     * 获取镜像个数
                     * @return ImageCnt 镜像个数
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取主机在线个数
                     * @return HostOnline 主机在线个数
                     * 
                     */
                    uint64_t GetHostOnline() const;

                    /**
                     * 判断参数 HostOnline 是否已赋值
                     * @return HostOnline 是否已赋值
                     * 
                     */
                    bool HostOnlineHasBeenSet() const;

                    /**
                     * 获取主机个数
                     * @return HostCnt 主机个数
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取有风险的镜像个数
                     * @return ImageHasRiskInfoCnt 有风险的镜像个数
                     * 
                     */
                    uint64_t GetImageHasRiskInfoCnt() const;

                    /**
                     * 判断参数 ImageHasRiskInfoCnt 是否已赋值
                     * @return ImageHasRiskInfoCnt 是否已赋值
                     * 
                     */
                    bool ImageHasRiskInfoCntHasBeenSet() const;

                    /**
                     * 获取有病毒的镜像个数
                     * @return ImageHasVirusCnt 有病毒的镜像个数
                     * 
                     */
                    uint64_t GetImageHasVirusCnt() const;

                    /**
                     * 判断参数 ImageHasVirusCnt 是否已赋值
                     * @return ImageHasVirusCnt 是否已赋值
                     * 
                     */
                    bool ImageHasVirusCntHasBeenSet() const;

                    /**
                     * 获取有漏洞的镜像个数
                     * @return ImageHasVulsCnt 有漏洞的镜像个数
                     * 
                     */
                    uint64_t GetImageHasVulsCnt() const;

                    /**
                     * 判断参数 ImageHasVulsCnt 是否已赋值
                     * @return ImageHasVulsCnt 是否已赋值
                     * 
                     */
                    bool ImageHasVulsCntHasBeenSet() const;

                    /**
                     * 获取不受信任的镜像个数
                     * @return ImageUntrustCnt 不受信任的镜像个数
                     * 
                     */
                    uint64_t GetImageUntrustCnt() const;

                    /**
                     * 判断参数 ImageUntrustCnt 是否已赋值
                     * @return ImageUntrustCnt 是否已赋值
                     * 
                     */
                    bool ImageUntrustCntHasBeenSet() const;

                    /**
                     * 获取监听的端口个数
                     * @return ListenPortCnt 监听的端口个数
                     * 
                     */
                    uint64_t GetListenPortCnt() const;

                    /**
                     * 判断参数 ListenPortCnt 是否已赋值
                     * @return ListenPortCnt 是否已赋值
                     * 
                     */
                    bool ListenPortCntHasBeenSet() const;

                    /**
                     * 获取进程个数
                     * @return ProcessCnt 进程个数
                     * 
                     */
                    uint64_t GetProcessCnt() const;

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     * 
                     */
                    bool ProcessCntHasBeenSet() const;

                    /**
                     * 获取web服务个数
                     * @return WebServiceCnt web服务个数
                     * 
                     */
                    uint64_t GetWebServiceCnt() const;

                    /**
                     * 判断参数 WebServiceCnt 是否已赋值
                     * @return WebServiceCnt 是否已赋值
                     * 
                     */
                    bool WebServiceCntHasBeenSet() const;

                    /**
                     * 获取最近镜像扫描时间
                     * @return LatestImageScanTime 最近镜像扫描时间
                     * 
                     */
                    std::string GetLatestImageScanTime() const;

                    /**
                     * 判断参数 LatestImageScanTime 是否已赋值
                     * @return LatestImageScanTime 是否已赋值
                     * 
                     */
                    bool LatestImageScanTimeHasBeenSet() const;

                    /**
                     * 获取风险镜像个数
                     * @return ImageUnsafeCnt 风险镜像个数
                     * 
                     */
                    uint64_t GetImageUnsafeCnt() const;

                    /**
                     * 判断参数 ImageUnsafeCnt 是否已赋值
                     * @return ImageUnsafeCnt 是否已赋值
                     * 
                     */
                    bool ImageUnsafeCntHasBeenSet() const;

                    /**
                     * 获取主机未安装agent数量
                     * @return HostUnInstallCnt 主机未安装agent数量
                     * 
                     */
                    uint64_t GetHostUnInstallCnt() const;

                    /**
                     * 判断参数 HostUnInstallCnt 是否已赋值
                     * @return HostUnInstallCnt 是否已赋值
                     * 
                     */
                    bool HostUnInstallCntHasBeenSet() const;

                    /**
                     * 获取超级节点个数
                     * @return SuperNodeCnt 超级节点个数
                     * 
                     */
                    uint64_t GetSuperNodeCnt() const;

                    /**
                     * 判断参数 SuperNodeCnt 是否已赋值
                     * @return SuperNodeCnt 是否已赋值
                     * 
                     */
                    bool SuperNodeCntHasBeenSet() const;

                    /**
                     * 获取超级节点运行个数
                     * @return SuperNodeRunningCnt 超级节点运行个数
                     * 
                     */
                    uint64_t GetSuperNodeRunningCnt() const;

                    /**
                     * 判断参数 SuperNodeRunningCnt 是否已赋值
                     * @return SuperNodeRunningCnt 是否已赋值
                     * 
                     */
                    bool SuperNodeRunningCntHasBeenSet() const;

                    /**
                     * 获取今日新增镜像个数
                     * @return TodayNewImageCnt 今日新增镜像个数
                     * 
                     */
                    uint64_t GetTodayNewImageCnt() const;

                    /**
                     * 判断参数 TodayNewImageCnt 是否已赋值
                     * @return TodayNewImageCnt 是否已赋值
                     * 
                     */
                    bool TodayNewImageCntHasBeenSet() const;

                    /**
                     * 获取今日新增风险镜像个数
                     * @return TodayUnsafeImageCnt 今日新增风险镜像个数
                     * 
                     */
                    uint64_t GetTodayUnsafeImageCnt() const;

                    /**
                     * 判断参数 TodayUnsafeImageCnt 是否已赋值
                     * @return TodayUnsafeImageCnt 是否已赋值
                     * 
                     */
                    bool TodayUnsafeImageCntHasBeenSet() const;

                    /**
                     * 获取推荐处置镜像个数
                     * @return RecommendedFixImageCnt 推荐处置镜像个数
                     * 
                     */
                    uint64_t GetRecommendedFixImageCnt() const;

                    /**
                     * 判断参数 RecommendedFixImageCnt 是否已赋值
                     * @return RecommendedFixImageCnt 是否已赋值
                     * 
                     */
                    bool RecommendedFixImageCntHasBeenSet() const;

                    /**
                     * 获取已扫描镜像个数
                     * @return ScannedImageCnt 已扫描镜像个数
                     * 
                     */
                    uint64_t GetScannedImageCnt() const;

                    /**
                     * 判断参数 ScannedImageCnt 是否已赋值
                     * @return ScannedImageCnt 是否已赋值
                     * 
                     */
                    bool ScannedImageCntHasBeenSet() const;

                    /**
                     * 获取待扫描镜像个数
                     * @return UnScannedImageCnt 待扫描镜像个数
                     * 
                     */
                    uint64_t GetUnScannedImageCnt() const;

                    /**
                     * 判断参数 UnScannedImageCnt 是否已赋值
                     * @return UnScannedImageCnt 是否已赋值
                     * 
                     */
                    bool UnScannedImageCntHasBeenSet() const;

                private:

                    /**
                     * 应用个数
                     */
                    uint64_t m_appCnt;
                    bool m_appCntHasBeenSet;

                    /**
                     * 容器个数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 暂停的容器个数
                     */
                    uint64_t m_containerPause;
                    bool m_containerPauseHasBeenSet;

                    /**
                     * 运行的容器个数
                     */
                    uint64_t m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * 停止运行的容器个数
                     */
                    uint64_t m_containerStop;
                    bool m_containerStopHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据库个数
                     */
                    uint64_t m_dbCnt;
                    bool m_dbCntHasBeenSet;

                    /**
                     * 镜像个数
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 主机在线个数
                     */
                    uint64_t m_hostOnline;
                    bool m_hostOnlineHasBeenSet;

                    /**
                     * 主机个数
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * 有风险的镜像个数
                     */
                    uint64_t m_imageHasRiskInfoCnt;
                    bool m_imageHasRiskInfoCntHasBeenSet;

                    /**
                     * 有病毒的镜像个数
                     */
                    uint64_t m_imageHasVirusCnt;
                    bool m_imageHasVirusCntHasBeenSet;

                    /**
                     * 有漏洞的镜像个数
                     */
                    uint64_t m_imageHasVulsCnt;
                    bool m_imageHasVulsCntHasBeenSet;

                    /**
                     * 不受信任的镜像个数
                     */
                    uint64_t m_imageUntrustCnt;
                    bool m_imageUntrustCntHasBeenSet;

                    /**
                     * 监听的端口个数
                     */
                    uint64_t m_listenPortCnt;
                    bool m_listenPortCntHasBeenSet;

                    /**
                     * 进程个数
                     */
                    uint64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                    /**
                     * web服务个数
                     */
                    uint64_t m_webServiceCnt;
                    bool m_webServiceCntHasBeenSet;

                    /**
                     * 最近镜像扫描时间
                     */
                    std::string m_latestImageScanTime;
                    bool m_latestImageScanTimeHasBeenSet;

                    /**
                     * 风险镜像个数
                     */
                    uint64_t m_imageUnsafeCnt;
                    bool m_imageUnsafeCntHasBeenSet;

                    /**
                     * 主机未安装agent数量
                     */
                    uint64_t m_hostUnInstallCnt;
                    bool m_hostUnInstallCntHasBeenSet;

                    /**
                     * 超级节点个数
                     */
                    uint64_t m_superNodeCnt;
                    bool m_superNodeCntHasBeenSet;

                    /**
                     * 超级节点运行个数
                     */
                    uint64_t m_superNodeRunningCnt;
                    bool m_superNodeRunningCntHasBeenSet;

                    /**
                     * 今日新增镜像个数
                     */
                    uint64_t m_todayNewImageCnt;
                    bool m_todayNewImageCntHasBeenSet;

                    /**
                     * 今日新增风险镜像个数
                     */
                    uint64_t m_todayUnsafeImageCnt;
                    bool m_todayUnsafeImageCntHasBeenSet;

                    /**
                     * 推荐处置镜像个数
                     */
                    uint64_t m_recommendedFixImageCnt;
                    bool m_recommendedFixImageCntHasBeenSet;

                    /**
                     * 已扫描镜像个数
                     */
                    uint64_t m_scannedImageCnt;
                    bool m_scannedImageCntHasBeenSet;

                    /**
                     * 待扫描镜像个数
                     */
                    uint64_t m_unScannedImageCnt;
                    bool m_unScannedImageCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSUMMARYRESPONSE_H_
