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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELIMAGESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELIMAGESUMMARYRESPONSE_H_

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
                * DescribeVulLevelImageSummary返回参数结构体
                */
                class DescribeVulLevelImageSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulLevelImageSummaryResponse();
                    ~DescribeVulLevelImageSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取高危漏洞最新本地镜像占比
                     * @return HighLevelVulLocalImagePercent 高危漏洞最新本地镜像占比
                     * 
                     */
                    double GetHighLevelVulLocalImagePercent() const;

                    /**
                     * 判断参数 HighLevelVulLocalImagePercent 是否已赋值
                     * @return HighLevelVulLocalImagePercent 是否已赋值
                     * 
                     */
                    bool HighLevelVulLocalImagePercentHasBeenSet() const;

                    /**
                     * 获取中危漏洞最新本地镜像占比
                     * @return MediumLevelVulLocalImagePercent 中危漏洞最新本地镜像占比
                     * 
                     */
                    double GetMediumLevelVulLocalImagePercent() const;

                    /**
                     * 判断参数 MediumLevelVulLocalImagePercent 是否已赋值
                     * @return MediumLevelVulLocalImagePercent 是否已赋值
                     * 
                     */
                    bool MediumLevelVulLocalImagePercentHasBeenSet() const;

                    /**
                     * 获取低危漏洞最新本地镜像占比
                     * @return LowLevelVulLocalImagePercent 低危漏洞最新本地镜像占比
                     * 
                     */
                    double GetLowLevelVulLocalImagePercent() const;

                    /**
                     * 判断参数 LowLevelVulLocalImagePercent 是否已赋值
                     * @return LowLevelVulLocalImagePercent 是否已赋值
                     * 
                     */
                    bool LowLevelVulLocalImagePercentHasBeenSet() const;

                    /**
                     * 获取严重漏洞最新本地镜像占比
                     * @return CriticalLevelVulLocalImagePercent 严重漏洞最新本地镜像占比
                     * 
                     */
                    double GetCriticalLevelVulLocalImagePercent() const;

                    /**
                     * 判断参数 CriticalLevelVulLocalImagePercent 是否已赋值
                     * @return CriticalLevelVulLocalImagePercent 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulLocalImagePercentHasBeenSet() const;

                    /**
                     * 获取影响的最新版本本地镜像数
                     * @return LocalNewestImageCount 影响的最新版本本地镜像数
                     * 
                     */
                    int64_t GetLocalNewestImageCount() const;

                    /**
                     * 判断参数 LocalNewestImageCount 是否已赋值
                     * @return LocalNewestImageCount 是否已赋值
                     * 
                     */
                    bool LocalNewestImageCountHasBeenSet() const;

                    /**
                     * 获取影响的最新版本仓库镜像数
                     * @return RegistryNewestImageCount 影响的最新版本仓库镜像数
                     * 
                     */
                    int64_t GetRegistryNewestImageCount() const;

                    /**
                     * 判断参数 RegistryNewestImageCount 是否已赋值
                     * @return RegistryNewestImageCount 是否已赋值
                     * 
                     */
                    bool RegistryNewestImageCountHasBeenSet() const;

                    /**
                     * 获取高危漏洞最新仓库镜像占比
                     * @return HighLevelVulRegistryImagePercent 高危漏洞最新仓库镜像占比
                     * 
                     */
                    double GetHighLevelVulRegistryImagePercent() const;

                    /**
                     * 判断参数 HighLevelVulRegistryImagePercent 是否已赋值
                     * @return HighLevelVulRegistryImagePercent 是否已赋值
                     * 
                     */
                    bool HighLevelVulRegistryImagePercentHasBeenSet() const;

                    /**
                     * 获取中危漏洞最新仓库镜像占比
                     * @return MediumLevelVulRegistryImagePercent 中危漏洞最新仓库镜像占比
                     * 
                     */
                    double GetMediumLevelVulRegistryImagePercent() const;

                    /**
                     * 判断参数 MediumLevelVulRegistryImagePercent 是否已赋值
                     * @return MediumLevelVulRegistryImagePercent 是否已赋值
                     * 
                     */
                    bool MediumLevelVulRegistryImagePercentHasBeenSet() const;

                    /**
                     * 获取低危漏洞最新仓库镜像占比
                     * @return LowLevelVulRegistryImagePercent 低危漏洞最新仓库镜像占比
                     * 
                     */
                    double GetLowLevelVulRegistryImagePercent() const;

                    /**
                     * 判断参数 LowLevelVulRegistryImagePercent 是否已赋值
                     * @return LowLevelVulRegistryImagePercent 是否已赋值
                     * 
                     */
                    bool LowLevelVulRegistryImagePercentHasBeenSet() const;

                    /**
                     * 获取严重漏洞最新仓库镜像占比
                     * @return CriticalLevelVulRegistryImagePercent 严重漏洞最新仓库镜像占比
                     * 
                     */
                    double GetCriticalLevelVulRegistryImagePercent() const;

                    /**
                     * 判断参数 CriticalLevelVulRegistryImagePercent 是否已赋值
                     * @return CriticalLevelVulRegistryImagePercent 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulRegistryImagePercentHasBeenSet() const;

                private:

                    /**
                     * 高危漏洞最新本地镜像占比
                     */
                    double m_highLevelVulLocalImagePercent;
                    bool m_highLevelVulLocalImagePercentHasBeenSet;

                    /**
                     * 中危漏洞最新本地镜像占比
                     */
                    double m_mediumLevelVulLocalImagePercent;
                    bool m_mediumLevelVulLocalImagePercentHasBeenSet;

                    /**
                     * 低危漏洞最新本地镜像占比
                     */
                    double m_lowLevelVulLocalImagePercent;
                    bool m_lowLevelVulLocalImagePercentHasBeenSet;

                    /**
                     * 严重漏洞最新本地镜像占比
                     */
                    double m_criticalLevelVulLocalImagePercent;
                    bool m_criticalLevelVulLocalImagePercentHasBeenSet;

                    /**
                     * 影响的最新版本本地镜像数
                     */
                    int64_t m_localNewestImageCount;
                    bool m_localNewestImageCountHasBeenSet;

                    /**
                     * 影响的最新版本仓库镜像数
                     */
                    int64_t m_registryNewestImageCount;
                    bool m_registryNewestImageCountHasBeenSet;

                    /**
                     * 高危漏洞最新仓库镜像占比
                     */
                    double m_highLevelVulRegistryImagePercent;
                    bool m_highLevelVulRegistryImagePercentHasBeenSet;

                    /**
                     * 中危漏洞最新仓库镜像占比
                     */
                    double m_mediumLevelVulRegistryImagePercent;
                    bool m_mediumLevelVulRegistryImagePercentHasBeenSet;

                    /**
                     * 低危漏洞最新仓库镜像占比
                     */
                    double m_lowLevelVulRegistryImagePercent;
                    bool m_lowLevelVulRegistryImagePercentHasBeenSet;

                    /**
                     * 严重漏洞最新仓库镜像占比
                     */
                    double m_criticalLevelVulRegistryImagePercent;
                    bool m_criticalLevelVulRegistryImagePercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELIMAGESUMMARYRESPONSE_H_
