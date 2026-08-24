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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWAUTHMODELSCOPEITEM_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWAUTHMODELSCOPEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AIGWModelScope.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AI网关授权模型访问范围
                */
                class AIGWAuthModelScopeItem : public AbstractModel
                {
                public:
                    AIGWAuthModelScopeItem();
                    ~AIGWAuthModelScopeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>授权主体 ID，如消费者组、消费者</p>
                     * @return PrincipalId <p>授权主体 ID，如消费者组、消费者</p>
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置<p>授权主体 ID，如消费者组、消费者</p>
                     * @param _principalId <p>授权主体 ID，如消费者组、消费者</p>
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取<p>授权主体名称，如消费者组、消费者</p>
                     * @return PrincipalName <p>授权主体名称，如消费者组、消费者</p>
                     * 
                     */
                    std::string GetPrincipalName() const;

                    /**
                     * 设置<p>授权主体名称，如消费者组、消费者</p>
                     * @param _principalName <p>授权主体名称，如消费者组、消费者</p>
                     * 
                     */
                    void SetPrincipalName(const std::string& _principalName);

                    /**
                     * 判断参数 PrincipalName 是否已赋值
                     * @return PrincipalName 是否已赋值
                     * 
                     */
                    bool PrincipalNameHasBeenSet() const;

                    /**
                     * 获取<p>模型范围原始配置</p>
                     * @return ModelScope <p>模型范围原始配置</p>
                     * 
                     */
                    AIGWModelScope GetModelScope() const;

                    /**
                     * 设置<p>模型范围原始配置</p>
                     * @param _modelScope <p>模型范围原始配置</p>
                     * 
                     */
                    void SetModelScope(const AIGWModelScope& _modelScope);

                    /**
                     * 判断参数 ModelScope 是否已赋值
                     * @return ModelScope 是否已赋值
                     * 
                     */
                    bool ModelScopeHasBeenSet() const;

                    /**
                     * 获取<p>MAG 已展开、保序去重后的可用模型名称列表</p>
                     * @return EffectiveModelNames <p>MAG 已展开、保序去重后的可用模型名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetEffectiveModelNames() const;

                    /**
                     * 设置<p>MAG 已展开、保序去重后的可用模型名称列表</p>
                     * @param _effectiveModelNames <p>MAG 已展开、保序去重后的可用模型名称列表</p>
                     * 
                     */
                    void SetEffectiveModelNames(const std::vector<std::string>& _effectiveModelNames);

                    /**
                     * 判断参数 EffectiveModelNames 是否已赋值
                     * @return EffectiveModelNames 是否已赋值
                     * 
                     */
                    bool EffectiveModelNamesHasBeenSet() const;

                private:

                    /**
                     * <p>授权主体 ID，如消费者组、消费者</p>
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * <p>授权主体名称，如消费者组、消费者</p>
                     */
                    std::string m_principalName;
                    bool m_principalNameHasBeenSet;

                    /**
                     * <p>模型范围原始配置</p>
                     */
                    AIGWModelScope m_modelScope;
                    bool m_modelScopeHasBeenSet;

                    /**
                     * <p>MAG 已展开、保序去重后的可用模型名称列表</p>
                     */
                    std::vector<std::string> m_effectiveModelNames;
                    bool m_effectiveModelNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWAUTHMODELSCOPEITEM_H_
