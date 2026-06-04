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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Filter
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索名称
                     * @return Name 检索名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检索名称
                     * @param _name 检索名称
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
                     * 获取检索值
                     * @return ValueList 检索值
                     * 
                     */
                    std::vector<std::string> GetValueList() const;

                    /**
                     * 设置检索值
                     * @param _valueList 检索值
                     * 
                     */
                    void SetValueList(const std::vector<std::string>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                private:

                    /**
                     * 检索名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检索值
                     */
                    std::vector<std::string> m_valueList;
                    bool m_valueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_
