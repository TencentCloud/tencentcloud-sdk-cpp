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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SERIES_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SERIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 耗时消耗时间
                */
                class Series : public AbstractModel
                {
                public:
                    Series();
                    ~Series() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取耗时列表信息
                     * @return Data 耗时列表信息
                     * 
                     */
                    std::vector<int64_t> GetData() const;

                    /**
                     * 设置耗时列表信息
                     * @param _data 耗时列表信息
                     * 
                     */
                    void SetData(const std::vector<int64_t>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Stack 描述
                     * 
                     */
                    std::string GetStack() const;

                    /**
                     * 设置描述
                     * @param _stack 描述
                     * 
                     */
                    void SetStack(const std::string& _stack);

                    /**
                     * 判断参数 Stack 是否已赋值
                     * @return Stack 是否已赋值
                     * 
                     */
                    bool StackHasBeenSet() const;

                    /**
                     * 获取字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 耗时列表信息
                     */
                    std::vector<int64_t> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_stack;
                    bool m_stackHasBeenSet;

                    /**
                     * 字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SERIES_H_
