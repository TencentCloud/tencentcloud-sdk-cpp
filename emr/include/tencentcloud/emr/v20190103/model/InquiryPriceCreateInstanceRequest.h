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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateInstance请求参数结构体
                */
                class InquiryPriceCreateInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateInstanceRequest();
                    ~InquiryPriceCreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param TimeUnit 时间单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间长度
                     * @return TimeSpan 时间长度
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间长度
                     * @param TimeSpan 时间长度
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取询价资源描述
                     * @return ResourceSpec 询价资源描述
                     */
                    ResourceSpec GetResourceSpec() const;

                    /**
                     * 设置询价资源描述
                     * @param ResourceSpec 询价资源描述
                     */
                    void SetResourceSpec(const ResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取货币种类
                     * @return Currency 货币种类
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币种类
                     * @param Currency 货币种类
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取计费类型
                     * @return PayMode 计费类型
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置计费类型
                     * @param PayMode 计费类型
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取是否支持HA， 1 支持，0 不支持
                     * @return SupportHA 是否支持HA， 1 支持，0 不支持
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置是否支持HA， 1 支持，0 不支持
                     * @param SupportHA 是否支持HA， 1 支持，0 不支持
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取软件列表
                     * @return Software 软件列表
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置软件列表
                     * @param Software 软件列表
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Placement 位置信息
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置位置信息
                     * @param Placement 位置信息
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取VPC信息
                     * @return VPCSettings VPC信息
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置VPC信息
                     * @param VPCSettings VPC信息
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     */
                    bool VPCSettingsHasBeenSet() const;

                private:

                    /**
                     * 时间单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间长度
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 询价资源描述
                     */
                    ResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * 货币种类
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 计费类型
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否支持HA， 1 支持，0 不支持
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * 软件列表
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * VPC信息
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
