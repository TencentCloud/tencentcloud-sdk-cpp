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

#ifndef TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_WEBSEARCHFILTER_H_
#define TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_WEBSEARCHFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Securitylake
    {
        namespace V20240117
        {
            namespace Model
            {
                /**
                * web搜索过滤
                */
                class WebSearchFilter : public AbstractModel
                {
                public:
                    WebSearchFilter();
                    ~WebSearchFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段
                     * @return Name 过滤字段
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤字段
                     * @param _name 过滤字段
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取值
                     * @return Values 值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置值
                     * @param _values 值
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取是否全匹配
                     * @return ExactMatch 是否全匹配
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置是否全匹配
                     * @param _exactMatch 是否全匹配
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * 过滤字段
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否全匹配
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_WEBSEARCHFILTER_H_
