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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REMOVEIP6RULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REMOVEIP6RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RemoveIp6Rules请求参数结构体
                */
                class RemoveIp6RulesRequest : public AbstractModel
                {
                public:
                    RemoveIp6RulesRequest();
                    ~RemoveIp6RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPV6转换规则所属的转换实例唯一ID，形如ip6-xxxxxxxx
                     * @return Ip6TranslatorId IPV6转换规则所属的转换实例唯一ID，形如ip6-xxxxxxxx
                     * 
                     */
                    std::string GetIp6TranslatorId() const;

                    /**
                     * 设置IPV6转换规则所属的转换实例唯一ID，形如ip6-xxxxxxxx
                     * @param _ip6TranslatorId IPV6转换规则所属的转换实例唯一ID，形如ip6-xxxxxxxx
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
                     * 获取待删除IPV6转换规则，形如rule6-xxxxxxxx
                     * @return Ip6RuleIds 待删除IPV6转换规则，形如rule6-xxxxxxxx
                     * 
                     */
                    std::vector<std::string> GetIp6RuleIds() const;

                    /**
                     * 设置待删除IPV6转换规则，形如rule6-xxxxxxxx
                     * @param _ip6RuleIds 待删除IPV6转换规则，形如rule6-xxxxxxxx
                     * 
                     */
                    void SetIp6RuleIds(const std::vector<std::string>& _ip6RuleIds);

                    /**
                     * 判断参数 Ip6RuleIds 是否已赋值
                     * @return Ip6RuleIds 是否已赋值
                     * 
                     */
                    bool Ip6RuleIdsHasBeenSet() const;

                private:

                    /**
                     * IPV6转换规则所属的转换实例唯一ID，形如ip6-xxxxxxxx
                     */
                    std::string m_ip6TranslatorId;
                    bool m_ip6TranslatorIdHasBeenSet;

                    /**
                     * 待删除IPV6转换规则，形如rule6-xxxxxxxx
                     */
                    std::vector<std::string> m_ip6RuleIds;
                    bool m_ip6RuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REMOVEIP6RULESREQUEST_H_
