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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2REQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteIpAccessControlV2请求参数结构体
                */
                class DeleteIpAccessControlV2Request : public AbstractModel
                {
                public:
                    DeleteIpAccessControlV2Request();
                    ~DeleteIpAccessControlV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则ID列表，支持批量删除，在DeleteAll参数为true的时候可以不传
                     * @return RuleIds 规则ID列表，支持批量删除，在DeleteAll参数为true的时候可以不传
                     * 
                     */
                    std::vector<uint64_t> GetRuleIds() const;

                    /**
                     * 设置规则ID列表，支持批量删除，在DeleteAll参数为true的时候可以不传
                     * @param _ruleIds 规则ID列表，支持批量删除，在DeleteAll参数为true的时候可以不传
                     * 
                     */
                    void SetRuleIds(const std::vector<uint64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定IP名单，批量防护不支持
                     * @return DeleteAll 是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定IP名单，批量防护不支持
                     * 
                     */
                    bool GetDeleteAll() const;

                    /**
                     * 设置是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定IP名单，批量防护不支持
                     * @param _deleteAll 是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定IP名单，批量防护不支持
                     * 
                     */
                    void SetDeleteAll(const bool& _deleteAll);

                    /**
                     * 判断参数 DeleteAll 是否已赋值
                     * @return DeleteAll 是否已赋值
                     * 
                     */
                    bool DeleteAllHasBeenSet() const;

                    /**
                     * 获取batch表示为批量防护的IP黑白名单
                     * @return SourceType batch表示为批量防护的IP黑白名单
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置batch表示为批量防护的IP黑白名单
                     * @param _sourceType batch表示为批量防护的IP黑白名单
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取IP黑白名单类型，40为IP白名单，42为IP黑名单，在DeleteAll为true的时候必传此参数
                     * @return ActionType IP黑白名单类型，40为IP白名单，42为IP黑名单，在DeleteAll为true的时候必传此参数
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置IP黑白名单类型，40为IP白名单，42为IP黑名单，在DeleteAll为true的时候必传此参数
                     * @param _actionType IP黑白名单类型，40为IP白名单，42为IP黑名单，在DeleteAll为true的时候必传此参数
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则ID列表，支持批量删除，在DeleteAll参数为true的时候可以不传
                     */
                    std::vector<uint64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * 是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定IP名单，批量防护不支持
                     */
                    bool m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                    /**
                     * batch表示为批量防护的IP黑白名单
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * IP黑白名单类型，40为IP白名单，42为IP黑名单，在DeleteAll为true的时候必传此参数
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2REQUEST_H_
