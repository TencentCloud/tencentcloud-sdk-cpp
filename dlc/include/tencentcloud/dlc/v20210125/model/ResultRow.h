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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESULTROW_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESULTROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 结果集单行数据（DescribeJobResult.Rows 的元素）.
                */
                class ResultRow : public AbstractModel
                {
                public:
                    ResultRow();
                    ~ResultRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本行的单元格值列表，与 SchemaJson 列定义顺序一一对应；NULL 值以 null 表示.</p>
                     * @return Values <p>本行的单元格值列表，与 SchemaJson 列定义顺序一一对应；NULL 值以 null 表示.</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>本行的单元格值列表，与 SchemaJson 列定义顺序一一对应；NULL 值以 null 表示.</p>
                     * @param _values <p>本行的单元格值列表，与 SchemaJson 列定义顺序一一对应；NULL 值以 null 表示.</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>本行的单元格值列表，与 SchemaJson 列定义顺序一一对应；NULL 值以 null 表示.</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESULTROW_H_
