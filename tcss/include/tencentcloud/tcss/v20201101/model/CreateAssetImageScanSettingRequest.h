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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_

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
                * CreateAssetImageScanSetting请求参数结构体
                */
                class CreateAssetImageScanSettingRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanSettingRequest();
                    ~CreateAssetImageScanSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开关</p>
                     * @return Enable <p>开关</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>开关</p>
                     * @param _enable <p>开关</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>扫描开始时间<br>01:00 时分</p>
                     * @return ScanTime <p>扫描开始时间<br>01:00 时分</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置<p>扫描开始时间<br>01:00 时分</p>
                     * @param _scanTime <p>扫描开始时间<br>01:00 时分</p>
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描周期</p>
                     * @return ScanPeriod <p>扫描周期</p>
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 设置<p>扫描周期</p>
                     * @param _scanPeriod <p>扫描周期</p>
                     * 
                     */
                    void SetScanPeriod(const uint64_t& _scanPeriod);

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
                     * 设置<p>扫描木马</p>
                     * @param _scanVirus <p>扫描木马</p>
                     * 
                     */
                    void SetScanVirus(const bool& _scanVirus);

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
                     * 设置<p>扫描敏感信息</p>
                     * @param _scanRisk <p>扫描敏感信息</p>
                     * 
                     */
                    void SetScanRisk(const bool& _scanRisk);

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
                     * 设置<p>扫描漏洞</p>
                     * @param _scanVul <p>扫描漏洞</p>
                     * 
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取<p>全部镜像</p>
                     * @return All <p>全部镜像</p>
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>全部镜像</p>
                     * @param _all <p>全部镜像</p>
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取<p>自定义镜像</p>
                     * @return Images <p>自定义镜像</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>自定义镜像</p>
                     * @param _images <p>自定义镜像</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

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
                     * 设置<p>镜像是否存在运行中的容器</p>
                     * @param _containerRunning <p>镜像是否存在运行中的容器</p>
                     * 
                     */
                    void SetContainerRunning(const bool& _containerRunning);

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 , 3:集群筛选扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * @return ScanScope <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 , 3:集群筛选扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置<p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 , 3:集群筛选扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * @param _scanScope <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 , 3:集群筛选扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * 
                     */
                    void SetScanScope(const uint64_t& _scanScope);

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取<p>扫描结束时间<br>02:00 时分</p>
                     * @return ScanEndTime <p>扫描结束时间<br>02:00 时分</p>
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置<p>扫描结束时间<br>02:00 时分</p>
                     * @param _scanEndTime <p>扫描结束时间<br>02:00 时分</p>
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>排除扫描的镜像</p>
                     * @return ExcludeImages <p>排除扫描的镜像</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImages() const;

                    /**
                     * 设置<p>排除扫描的镜像</p>
                     * @param _excludeImages <p>排除扫描的镜像</p>
                     * 
                     */
                    void SetExcludeImages(const std::vector<std::string>& _excludeImages);

                    /**
                     * 判断参数 ExcludeImages 是否已赋值
                     * @return ExcludeImages 是否已赋值
                     * 
                     */
                    bool ExcludeImagesHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterIDs <p>集群id</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterIDs <p>集群id</p>
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

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
                     * <p>扫描开始时间<br>01:00 时分</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>扫描周期</p>
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
                     * <p>全部镜像</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>自定义镜像</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>镜像是否存在运行中的容器</p>
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 , 3:集群筛选扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * <p>扫描结束时间<br>02:00 时分</p>
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * <p>排除扫描的镜像</p>
                     */
                    std::vector<std::string> m_excludeImages;
                    bool m_excludeImagesHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
