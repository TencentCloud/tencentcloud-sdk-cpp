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
                     * 获取<p>创建规则数据</p>
                     * @return Data <p>创建规则数据</p>
                     * 
                     */
                    std::vector<SecurityGroupRule> GetData() const;

                    /**
                     * 设置<p>创建规则数据</p>
                     * @param _data <p>创建规则数据</p>
                     * 
                     */
                    void SetData(const std::vector<SecurityGroupRule>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后</p>
                     * @return Type <p>添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后</p>
                     * @param _type <p>添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * @return ClientToken <p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * @param _clientToken <p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>（IsDelay为老版参数，新版无需输入）是否延迟下发，1则延迟下发，否则立即下发</p>
                     * @return IsDelay <p>（IsDelay为老版参数，新版无需输入）是否延迟下发，1则延迟下发，否则立即下发</p>
                     * 
                     */
                    uint64_t GetIsDelay() const;

                    /**
                     * 设置<p>（IsDelay为老版参数，新版无需输入）是否延迟下发，1则延迟下发，否则立即下发</p>
                     * @param _isDelay <p>（IsDelay为老版参数，新版无需输入）是否延迟下发，1则延迟下发，否则立即下发</p>
                     * 
                     */
                    void SetIsDelay(const uint64_t& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     * 
                     */
                    bool IsDelayHasBeenSet() const;

                    /**
                     * 获取<p>来源 默认空 覆盖导入是 batch_import_cover</p>
                     * @return From <p>来源 默认空 覆盖导入是 batch_import_cover</p>
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置<p>来源 默认空 覆盖导入是 batch_import_cover</p>
                     * @param _from <p>来源 默认空 覆盖导入是 batch_import_cover</p>
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>是否复用rule id，1为是，默认不需要</p>
                     * @return IsUseId <p>是否复用rule id，1为是，默认不需要</p>
                     * 
                     */
                    int64_t GetIsUseId() const;

                    /**
                     * 设置<p>是否复用rule id，1为是，默认不需要</p>
                     * @param _isUseId <p>是否复用rule id，1为是，默认不需要</p>
                     * 
                     */
                    void SetIsUseId(const int64_t& _isUseId);

                    /**
                     * 判断参数 IsUseId 是否已赋值
                     * @return IsUseId 是否已赋值
                     * 
                     */
                    bool IsUseIdHasBeenSet() const;

                private:

                    /**
                     * <p>创建规则数据</p>
                     */
                    std::vector<SecurityGroupRule> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>添加类型，0：添加到最后，1：添加到最前；2：中间插入；默认0添加到最后</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>（IsDelay为老版参数，新版无需输入）是否延迟下发，1则延迟下发，否则立即下发</p>
                     */
                    uint64_t m_isDelay;
                    bool m_isDelayHasBeenSet;

                    /**
                     * <p>来源 默认空 覆盖导入是 batch_import_cover</p>
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>是否复用rule id，1为是，默认不需要</p>
                     */
                    int64_t m_isUseId;
                    bool m_isUseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_
