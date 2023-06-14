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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDIP6RULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDIP6RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ip6RuleInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AddIp6Rules请求参数结构体
                */
                class AddIp6RulesRequest : public AbstractModel
                {
                public:
                    AddIp6RulesRequest();
                    ~AddIp6RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * @return Ip6TranslatorId IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * 
                     */
                    std::string GetIp6TranslatorId() const;

                    /**
                     * 设置IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * @param _ip6TranslatorId IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     * 
                     */
                    void SetIp6TranslatorId(const std::string& _ip6TranslatorId);

                    /**
                     * 判断参数 Ip6TranslatorId 是否已赋值
                     * @return Ip6TranslatorId 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorIdHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则信息
                     * @return Ip6RuleInfos IPV6转换规则信息
                     * 
                     */
                    std::vector<Ip6RuleInfo> GetIp6RuleInfos() const;

                    /**
                     * 设置IPV6转换规则信息
                     * @param _ip6RuleInfos IPV6转换规则信息
                     * 
                     */
                    void SetIp6RuleInfos(const std::vector<Ip6RuleInfo>& _ip6RuleInfos);

                    /**
                     * 判断参数 Ip6RuleInfos 是否已赋值
                     * @return Ip6RuleInfos 是否已赋值
                     * 
                     */
                    bool Ip6RuleInfosHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则名称
                     * @return Ip6RuleName IPV6转换规则名称
                     * 
                     */
                    std::string GetIp6RuleName() const;

                    /**
                     * 设置IPV6转换规则名称
                     * @param _ip6RuleName IPV6转换规则名称
                     * 
                     */
                    void SetIp6RuleName(const std::string& _ip6RuleName);

                    /**
                     * 判断参数 Ip6RuleName 是否已赋值
                     * @return Ip6RuleName 是否已赋值
                     * 
                     */
                    bool Ip6RuleNameHasBeenSet() const;

                private:

                    /**
                     * IPV6转换实例唯一ID，形如ip6-xxxxxxxx
                     */
                    std::string m_ip6TranslatorId;
                    bool m_ip6TranslatorIdHasBeenSet;

                    /**
                     * IPV6转换规则信息
                     */
                    std::vector<Ip6RuleInfo> m_ip6RuleInfos;
                    bool m_ip6RuleInfosHasBeenSet;

                    /**
                     * IPV6转换规则名称
                     */
                    std::string m_ip6RuleName;
                    bool m_ip6RuleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDIP6RULESREQUEST_H_
