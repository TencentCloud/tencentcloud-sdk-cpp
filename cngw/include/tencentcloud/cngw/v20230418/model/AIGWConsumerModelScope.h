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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCONSUMERMODELSCOPE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCONSUMERMODELSCOPE_H_

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
                * AI网关消费者模型范围
                */
                class AIGWConsumerModelScope : public AbstractModel
                {
                public:
                    AIGWConsumerModelScope();
                    ~AIGWConsumerModelScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费者模型生效范围类型</p><p>枚举值：</p><ul><li>INHERIT： 继承所在消费者组的生效模型范围</li><li>ALLOWLIST： 自定义白名单，必须 ⊆ 所在组针对该资源的生效模型集合</li></ul>
                     * @return ScopeType <p>消费者模型生效范围类型</p><p>枚举值：</p><ul><li>INHERIT： 继承所在消费者组的生效模型范围</li><li>ALLOWLIST： 自定义白名单，必须 ⊆ 所在组针对该资源的生效模型集合</li></ul>
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置<p>消费者模型生效范围类型</p><p>枚举值：</p><ul><li>INHERIT： 继承所在消费者组的生效模型范围</li><li>ALLOWLIST： 自定义白名单，必须 ⊆ 所在组针对该资源的生效模型集合</li></ul>
                     * @param _scopeType <p>消费者模型生效范围类型</p><p>枚举值：</p><ul><li>INHERIT： 继承所在消费者组的生效模型范围</li><li>ALLOWLIST： 自定义白名单，必须 ⊆ 所在组针对该资源的生效模型集合</li></ul>
                     * 
                     */
                    void SetScopeType(const std::string& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型授权白名单列表</p>
                     * @return AllowList <p>模型授权白名单列表</p>
                     * 
                     */
                    std::vector<std::string> GetAllowList() const;

                    /**
                     * 设置<p>模型授权白名单列表</p>
                     * @param _allowList <p>模型授权白名单列表</p>
                     * 
                     */
                    void SetAllowList(const std::vector<std::string>& _allowList);

                    /**
                     * 判断参数 AllowList 是否已赋值
                     * @return AllowList 是否已赋值
                     * 
                     */
                    bool AllowListHasBeenSet() const;

                private:

                    /**
                     * <p>消费者模型生效范围类型</p><p>枚举值：</p><ul><li>INHERIT： 继承所在消费者组的生效模型范围</li><li>ALLOWLIST： 自定义白名单，必须 ⊆ 所在组针对该资源的生效模型集合</li></ul>
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * <p>模型授权白名单列表</p>
                     */
                    std::vector<std::string> m_allowList;
                    bool m_allowListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCONSUMERMODELSCOPE_H_
