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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERACLRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERACLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWACLSubject.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关 MCP Server ACL 配置详情
                */
                class AIGWMCPServerACLResult : public AbstractModel
                {
                public:
                    AIGWMCPServerACLResult();
                    ~AIGWMCPServerACLResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * @return ACLType <p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * 
                     */
                    std::string GetACLType() const;

                    /**
                     * 设置<p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * @param _aCLType <p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * 
                     */
                    void SetACLType(const std::string& _aCLType);

                    /**
                     * 判断参数 ACLType 是否已赋值
                     * @return ACLType 是否已赋值
                     * 
                     */
                    bool ACLTypeHasBeenSet() const;

                    /**
                     * 获取<p>关联的消费者ID列表</p>
                     * @return ACLConsumers <p>关联的消费者ID列表</p>
                     * 
                     */
                    std::vector<AIGWACLSubject> GetACLConsumers() const;

                    /**
                     * 设置<p>关联的消费者ID列表</p>
                     * @param _aCLConsumers <p>关联的消费者ID列表</p>
                     * 
                     */
                    void SetACLConsumers(const std::vector<AIGWACLSubject>& _aCLConsumers);

                    /**
                     * 判断参数 ACLConsumers 是否已赋值
                     * @return ACLConsumers 是否已赋值
                     * 
                     */
                    bool ACLConsumersHasBeenSet() const;

                    /**
                     * 获取<p>关联的消费者组ID列表</p>
                     * @return ACLConsumerGroups <p>关联的消费者组ID列表</p>
                     * 
                     */
                    std::vector<AIGWACLSubject> GetACLConsumerGroups() const;

                    /**
                     * 设置<p>关联的消费者组ID列表</p>
                     * @param _aCLConsumerGroups <p>关联的消费者组ID列表</p>
                     * 
                     */
                    void SetACLConsumerGroups(const std::vector<AIGWACLSubject>& _aCLConsumerGroups);

                    /**
                     * 判断参数 ACLConsumerGroups 是否已赋值
                     * @return ACLConsumerGroups 是否已赋值
                     * 
                     */
                    bool ACLConsumerGroupsHasBeenSet() const;

                    /**
                     * 获取<p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * @return AuthType <p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * @param _authType <p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                private:

                    /**
                     * <p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     */
                    std::string m_aCLType;
                    bool m_aCLTypeHasBeenSet;

                    /**
                     * <p>关联的消费者ID列表</p>
                     */
                    std::vector<AIGWACLSubject> m_aCLConsumers;
                    bool m_aCLConsumersHasBeenSet;

                    /**
                     * <p>关联的消费者组ID列表</p>
                     */
                    std::vector<AIGWACLSubject> m_aCLConsumerGroups;
                    bool m_aCLConsumerGroupsHasBeenSet;

                    /**
                     * <p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERACLRESULT_H_
