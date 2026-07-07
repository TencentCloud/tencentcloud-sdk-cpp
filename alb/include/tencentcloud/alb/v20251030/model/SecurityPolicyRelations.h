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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYRELATIONS_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYRELATIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RelatedListener.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 安全策略与监听的关联关系列表。
                */
                class SecurityPolicyRelations : public AbstractModel
                {
                public:
                    SecurityPolicyRelations();
                    ~SecurityPolicyRelations() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全策略与监听的关联关系列表。
                     * @return RelatedListeners 安全策略与监听的关联关系列表。
                     * 
                     */
                    std::vector<RelatedListener> GetRelatedListeners() const;

                    /**
                     * 设置安全策略与监听的关联关系列表。
                     * @param _relatedListeners 安全策略与监听的关联关系列表。
                     * 
                     */
                    void SetRelatedListeners(const std::vector<RelatedListener>& _relatedListeners);

                    /**
                     * 判断参数 RelatedListeners 是否已赋值
                     * @return RelatedListeners 是否已赋值
                     * 
                     */
                    bool RelatedListenersHasBeenSet() const;

                    /**
                     * 获取安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @return SecurityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @param _securityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                private:

                    /**
                     * 安全策略与监听的关联关系列表。
                     */
                    std::vector<RelatedListener> m_relatedListeners;
                    bool m_relatedListenersHasBeenSet;

                    /**
                     * 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYRELATIONS_H_
