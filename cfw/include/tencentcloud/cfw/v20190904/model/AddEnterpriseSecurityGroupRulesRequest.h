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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddEnterpriseSecurityGroupRules请求参数结构体
                */
                class AddEnterpriseSecurityGroupRulesRequest : public AbstractModel
                {
                public:
                    AddEnterpriseSecurityGroupRulesRequest();
                    ~AddEnterpriseSecurityGroupRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建规则数据
                     * @return Data 创建规则数据
                     */
                    std::vector<SecurityGroupRule> GetData() const;

                    /**
                     * 设置创建规则数据
                     * @param Data 创建规则数据
                     */
                    void SetData(const std::vector<SecurityGroupRule>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后
                     * @return Type 添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后
                     * @param Type 添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
                     * @return ClientToken 保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
                     * @param ClientToken 保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取是否延迟下发，1则延迟下发，否则立即下发
                     * @return IsDelay 是否延迟下发，1则延迟下发，否则立即下发
                     */
                    uint64_t GetIsDelay() const;

                    /**
                     * 设置是否延迟下发，1则延迟下发，否则立即下发
                     * @param IsDelay 是否延迟下发，1则延迟下发，否则立即下发
                     */
                    void SetIsDelay(const uint64_t& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     */
                    bool IsDelayHasBeenSet() const;

                private:

                    /**
                     * 创建规则数据
                     */
                    std::vector<SecurityGroupRule> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 是否延迟下发，1则延迟下发，否则立即下发
                     */
                    uint64_t m_isDelay;
                    bool m_isDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_
