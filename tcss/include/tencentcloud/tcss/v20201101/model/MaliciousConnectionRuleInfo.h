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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MALICIOUSCONNECTIONRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MALICIOUSCONNECTIONRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 恶意外连黑白名单信息
                */
                class MaliciousConnectionRuleInfo : public AbstractModel
                {
                public:
                    MaliciousConnectionRuleInfo();
                    ~MaliciousConnectionRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取枚举：
IP: 表示ipv4或者ipv6
DOMAIN: 表示域名
                     * @return RuleType 枚举：
IP: 表示ipv4或者ipv6
DOMAIN: 表示域名
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置枚举：
IP: 表示ipv4或者ipv6
DOMAIN: 表示域名
                     * @param _ruleType 枚举：
IP: 表示ipv4或者ipv6
DOMAIN: 表示域名
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取自定义黑白名单的域名/IP
                     * @return Address 自定义黑白名单的域名/IP
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置自定义黑白名单的域名/IP
                     * @param _address 自定义黑白名单的域名/IP
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * 枚举：
IP: 表示ipv4或者ipv6
DOMAIN: 表示域名
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 自定义黑白名单的域名/IP
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 规则ID
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MALICIOUSCONNECTIONRULEINFO_H_
