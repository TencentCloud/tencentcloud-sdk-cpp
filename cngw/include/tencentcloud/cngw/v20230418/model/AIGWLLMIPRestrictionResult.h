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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMIPRESTRICTIONRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMIPRESTRICTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * IP 黑白名单配置。
                */
                class AIGWLLMIPRestrictionResult : public AbstractModel
                {
                public:
                    AIGWLLMIPRestrictionResult();
                    ~AIGWLLMIPRestrictionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启</p>
                     * @return Enable <p>是否开启</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启</p>
                     * @param _enable <p>是否开启</p>
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
                     * 获取<p>限制类型</p><p>枚举值：</p><ul><li>whiteList： 白名单</li><li>blackList： 黑名单</li></ul>
                     * @return RestrictionType <p>限制类型</p><p>枚举值：</p><ul><li>whiteList： 白名单</li><li>blackList： 黑名单</li></ul>
                     * 
                     */
                    std::string GetRestrictionType() const;

                    /**
                     * 设置<p>限制类型</p><p>枚举值：</p><ul><li>whiteList： 白名单</li><li>blackList： 黑名单</li></ul>
                     * @param _restrictionType <p>限制类型</p><p>枚举值：</p><ul><li>whiteList： 白名单</li><li>blackList： 黑名单</li></ul>
                     * 
                     */
                    void SetRestrictionType(const std::string& _restrictionType);

                    /**
                     * 判断参数 RestrictionType 是否已赋值
                     * @return RestrictionType 是否已赋值
                     * 
                     */
                    bool RestrictionTypeHasBeenSet() const;

                    /**
                     * 获取<p>IP 或 CIDR 列表，每项须为合法 IP/CIDR（支持 IPv4/IPv6）</p>
                     * @return AddressList <p>IP 或 CIDR 列表，每项须为合法 IP/CIDR（支持 IPv4/IPv6）</p>
                     * 
                     */
                    std::vector<std::string> GetAddressList() const;

                    /**
                     * 设置<p>IP 或 CIDR 列表，每项须为合法 IP/CIDR（支持 IPv4/IPv6）</p>
                     * @param _addressList <p>IP 或 CIDR 列表，每项须为合法 IP/CIDR（支持 IPv4/IPv6）</p>
                     * 
                     */
                    void SetAddressList(const std::vector<std::string>& _addressList);

                    /**
                     * 判断参数 AddressList 是否已赋值
                     * @return AddressList 是否已赋值
                     * 
                     */
                    bool AddressListHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>限制类型</p><p>枚举值：</p><ul><li>whiteList： 白名单</li><li>blackList： 黑名单</li></ul>
                     */
                    std::string m_restrictionType;
                    bool m_restrictionTypeHasBeenSet;

                    /**
                     * <p>IP 或 CIDR 列表，每项须为合法 IP/CIDR（支持 IPv4/IPv6）</p>
                     */
                    std::vector<std::string> m_addressList;
                    bool m_addressListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMIPRESTRICTIONRESULT_H_
