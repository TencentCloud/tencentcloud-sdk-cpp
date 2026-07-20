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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 过滤条件。同一 Name 下多个 Values 为或关系；不同 Name 之间为且关系。支持的 Name：TaskID（任务ID精确）、TaskStatus（任务状态）、TaskType（任务类型）
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤条件名称。取值：TaskID（任务ID，精确匹配）、TaskStatus（任务状态，Values: INIT/SCANNING/SUCCESS/FAILED）、TaskType（任务类型，Values: PERIODIC/MANUAL）
                     * @return Name 过滤条件名称。取值：TaskID（任务ID，精确匹配）、TaskStatus（任务状态，Values: INIT/SCANNING/SUCCESS/FAILED）、TaskType（任务类型，Values: PERIODIC/MANUAL）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤条件名称。取值：TaskID（任务ID，精确匹配）、TaskStatus（任务状态，Values: INIT/SCANNING/SUCCESS/FAILED）、TaskType（任务类型，Values: PERIODIC/MANUAL）
                     * @param _name 过滤条件名称。取值：TaskID（任务ID，精确匹配）、TaskStatus（任务状态，Values: INIT/SCANNING/SUCCESS/FAILED）、TaskType（任务类型，Values: PERIODIC/MANUAL）
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
                     * 获取过滤条件值列表
                     * @return Values 过滤条件值列表
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤条件值列表
                     * @param _values 过滤条件值列表
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
                     * 获取是否精确匹配：1 精确匹配；默认模糊匹配
                     * @return ExactMatch 是否精确匹配：1 精确匹配；默认模糊匹配
                     * 
                     */
                    std::string GetExactMatch() const;

                    /**
                     * 设置是否精确匹配：1 精确匹配；默认模糊匹配
                     * @param _exactMatch 是否精确匹配：1 精确匹配；默认模糊匹配
                     * 
                     */
                    void SetExactMatch(const std::string& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * 过滤条件名称。取值：TaskID（任务ID，精确匹配）、TaskStatus（任务状态，Values: INIT/SCANNING/SUCCESS/FAILED）、TaskType（任务类型，Values: PERIODIC/MANUAL）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤条件值列表
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否精确匹配：1 精确匹配；默认模糊匹配
                     */
                    std::string m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
