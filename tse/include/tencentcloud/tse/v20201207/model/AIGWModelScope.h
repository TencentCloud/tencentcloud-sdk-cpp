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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWMODELSCOPE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWMODELSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AI网关模型可用范围
                */
                class AIGWModelScope : public AbstractModel
                {
                public:
                    AIGWModelScope();
                    ~AIGWModelScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>范围类型</p><p>枚举值：</p><ul><li>ALL： 允许全部访问</li><li>ALLOWLIST： 允许访问的模型列表</li><li>MAG： 模型访问组</li></ul>
                     * @return ScopeType <p>范围类型</p><p>枚举值：</p><ul><li>ALL： 允许全部访问</li><li>ALLOWLIST： 允许访问的模型列表</li><li>MAG： 模型访问组</li></ul>
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置<p>范围类型</p><p>枚举值：</p><ul><li>ALL： 允许全部访问</li><li>ALLOWLIST： 允许访问的模型列表</li><li>MAG： 模型访问组</li></ul>
                     * @param _scopeType <p>范围类型</p><p>枚举值：</p><ul><li>ALL： 允许全部访问</li><li>ALLOWLIST： 允许访问的模型列表</li><li>MAG： 模型访问组</li></ul>
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
                     * 获取<p>允许访问的模型列表，ScopeType=ALLOWLIST时设置</p>
                     * @return AllowList <p>允许访问的模型列表，ScopeType=ALLOWLIST时设置</p>
                     * 
                     */
                    std::vector<std::string> GetAllowList() const;

                    /**
                     * 设置<p>允许访问的模型列表，ScopeType=ALLOWLIST时设置</p>
                     * @param _allowList <p>允许访问的模型列表，ScopeType=ALLOWLIST时设置</p>
                     * 
                     */
                    void SetAllowList(const std::vector<std::string>& _allowList);

                    /**
                     * 判断参数 AllowList 是否已赋值
                     * @return AllowList 是否已赋值
                     * 
                     */
                    bool AllowListHasBeenSet() const;

                    /**
                     * 获取<p>模型访问组，ScopeType=MAG时设置</p>
                     * @return MagRefs <p>模型访问组，ScopeType=MAG时设置</p>
                     * 
                     */
                    std::vector<std::string> GetMagRefs() const;

                    /**
                     * 设置<p>模型访问组，ScopeType=MAG时设置</p>
                     * @param _magRefs <p>模型访问组，ScopeType=MAG时设置</p>
                     * 
                     */
                    void SetMagRefs(const std::vector<std::string>& _magRefs);

                    /**
                     * 判断参数 MagRefs 是否已赋值
                     * @return MagRefs 是否已赋值
                     * 
                     */
                    bool MagRefsHasBeenSet() const;

                private:

                    /**
                     * <p>范围类型</p><p>枚举值：</p><ul><li>ALL： 允许全部访问</li><li>ALLOWLIST： 允许访问的模型列表</li><li>MAG： 模型访问组</li></ul>
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * <p>允许访问的模型列表，ScopeType=ALLOWLIST时设置</p>
                     */
                    std::vector<std::string> m_allowList;
                    bool m_allowListHasBeenSet;

                    /**
                     * <p>模型访问组，ScopeType=MAG时设置</p>
                     */
                    std::vector<std::string> m_magRefs;
                    bool m_magRefsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWMODELSCOPE_H_
