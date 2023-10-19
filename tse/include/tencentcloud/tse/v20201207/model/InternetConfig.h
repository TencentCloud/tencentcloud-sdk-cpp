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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_INTERNETCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_INTERNETCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 公网负载均衡配置
                */
                class InternetConfig : public AbstractModel
                {
                public:
                    InternetConfig();
                    ~InternetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网地址版本，可选："IPV4" | "IPV6" 。不填默认 IPV4 。
                     * @return InternetAddressVersion 公网地址版本，可选："IPV4" | "IPV6" 。不填默认 IPV4 。
                     * 
                     */
                    std::string GetInternetAddressVersion() const;

                    /**
                     * 设置公网地址版本，可选："IPV4" | "IPV6" 。不填默认 IPV4 。
                     * @param _internetAddressVersion 公网地址版本，可选："IPV4" | "IPV6" 。不填默认 IPV4 。
                     * 
                     */
                    void SetInternetAddressVersion(const std::string& _internetAddressVersion);

                    /**
                     * 判断参数 InternetAddressVersion 是否已赋值
                     * @return InternetAddressVersion 是否已赋值
                     * 
                     */
                    bool InternetAddressVersionHasBeenSet() const;

                    /**
                     * 获取公网付费类型，当前仅可选："BANDWIDTH"。不填默认为 "BANDWIDTH"
                     * @return InternetPayMode 公网付费类型，当前仅可选："BANDWIDTH"。不填默认为 "BANDWIDTH"
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置公网付费类型，当前仅可选："BANDWIDTH"。不填默认为 "BANDWIDTH"
                     * @param _internetPayMode 公网付费类型，当前仅可选："BANDWIDTH"。不填默认为 "BANDWIDTH"
                     * 
                     */
                    void SetInternetPayMode(const std::string& _internetPayMode);

                    /**
                     * 判断参数 InternetPayMode 是否已赋值
                     * @return InternetPayMode 是否已赋值
                     * 
                     */
                    bool InternetPayModeHasBeenSet() const;

                    /**
                     * 获取公网带宽。
                     * @return InternetMaxBandwidthOut 公网带宽。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网带宽。
                     * @param _internetMaxBandwidthOut 公网带宽。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取负载均衡描述
                     * @return Description 负载均衡描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置负载均衡描述
                     * @param _description 负载均衡描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取负载均衡的规格类型，支持clb.c2.medium、clb.c3.small、clb.c3.medium、clb.c4.small、clb.c4.medium、clb.c4.large、clb.c4.xlarge，不传为共享型。
                     * @return SlaType 负载均衡的规格类型，支持clb.c2.medium、clb.c3.small、clb.c3.medium、clb.c4.small、clb.c4.medium、clb.c4.large、clb.c4.xlarge，不传为共享型。
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置负载均衡的规格类型，支持clb.c2.medium、clb.c3.small、clb.c3.medium、clb.c4.small、clb.c4.medium、clb.c4.large、clb.c4.xlarge，不传为共享型。
                     * @param _slaType 负载均衡的规格类型，支持clb.c2.medium、clb.c3.small、clb.c3.medium、clb.c4.small、clb.c4.medium、clb.c4.large、clb.c4.xlarge，不传为共享型。
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡是否多可用区
                     * @return MultiZoneFlag 负载均衡是否多可用区
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置负载均衡是否多可用区
                     * @param _multiZoneFlag 负载均衡是否多可用区
                     * 
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     * 
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取主可用区
                     * @return MasterZoneId 主可用区
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置主可用区
                     * @param _masterZoneId 主可用区
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取备可用区
                     * @return SlaveZoneId 备可用区
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置备可用区
                     * @param _slaveZoneId 备可用区
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                private:

                    /**
                     * 公网地址版本，可选："IPV4" | "IPV6" 。不填默认 IPV4 。
                     */
                    std::string m_internetAddressVersion;
                    bool m_internetAddressVersionHasBeenSet;

                    /**
                     * 公网付费类型，当前仅可选："BANDWIDTH"。不填默认为 "BANDWIDTH"
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * 公网带宽。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 负载均衡描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 负载均衡的规格类型，支持clb.c2.medium、clb.c3.small、clb.c3.medium、clb.c4.small、clb.c4.medium、clb.c4.large、clb.c4.xlarge，不传为共享型。
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * 负载均衡是否多可用区
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * 主可用区
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * 备可用区
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_INTERNETCONFIG_H_
