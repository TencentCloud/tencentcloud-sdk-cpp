/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_

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
                * DescribeAssetImageScanSetting返回参数结构体
                */
                class DescribeAssetImageScanSettingResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageScanSettingResponse();
                    ~DescribeAssetImageScanSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开关</p>
                     * @return Enable <p>开关</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>扫描时刻(完整时间;后端按0时区解析时分秒)</p>
                     * @return ScanTime <p>扫描时刻(完整时间;后端按0时区解析时分秒)</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描间隔</p>
                     * @return ScanPeriod <p>扫描间隔</p>
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取<p>扫描木马</p>
                     * @return ScanVirus <p>扫描木马</p>
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     * 
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取<p>扫描敏感信息</p>
                     * @return ScanRisk <p>扫描敏感信息</p>
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     * 
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取<p>扫描漏洞</p>
                     * @return ScanVul <p>扫描漏洞</p>
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取<p>扫描全部镜像</p>
                     * @return All <p>扫描全部镜像</p>
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取<p>自定义扫描镜像</p>
                     * @return Images <p>自定义扫描镜像</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>镜像是否存在运行中的容器</p>
                     * @return ContainerRunning <p>镜像是否存在运行中的容器</p>
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群筛选扫描</p>
                     * @return ScanScope <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群筛选扫描</p>
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取<p>扫描结束时间 02:00 时分</p>
                     * @return ScanEndTime <p>扫描结束时间 02:00 时分</p>
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>排除的扫描镜像</p>
                     * @return ExcludeImages <p>排除的扫描镜像</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImages() const;

                    /**
                     * 判断参数 ExcludeImages 是否已赋值
                     * @return ExcludeImages 是否已赋值
                     * 
                     */
                    bool ExcludeImagesHasBeenSet() const;

                    /**
                     * 获取<p>最后一次扫描时间</p>
                     * @return LastScanTime <p>最后一次扫描时间</p>
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描结果(Success|InsufficientLicense|ImageNeedIsEmpty|InternalError)</p>
                     * @return ScanResult <p>扫描结果(Success|InsufficientLicense|ImageNeedIsEmpty|InternalError)</p>
                     * 
                     */
                    std::string GetScanResult() const;

                    /**
                     * 判断参数 ScanResult 是否已赋值
                     * @return ScanResult 是否已赋值
                     * 
                     */
                    bool ScanResultHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterIDs <p>集群id</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                private:

                    /**
                     * <p>开关</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>扫描时刻(完整时间;后端按0时区解析时分秒)</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>扫描间隔</p>
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * <p>扫描木马</p>
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * <p>扫描敏感信息</p>
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * <p>扫描漏洞</p>
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * <p>扫描全部镜像</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>自定义扫描镜像</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>镜像是否存在运行中的容器</p>
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群筛选扫描</p>
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * <p>扫描结束时间 02:00 时分</p>
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * <p>排除的扫描镜像</p>
                     */
                    std::vector<std::string> m_excludeImages;
                    bool m_excludeImagesHasBeenSet;

                    /**
                     * <p>最后一次扫描时间</p>
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * <p>扫描结果(Success|InsufficientLicense|ImageNeedIsEmpty|InternalError)</p>
                     */
                    std::string m_scanResult;
                    bool m_scanResultHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_
