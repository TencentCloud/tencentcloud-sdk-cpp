/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_NUMORPERCENT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_NUMORPERCENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 用于表示百分比或数量
                */
                class NumOrPercent : public AbstractModel
                {
                public:
                    NumOrPercent();
                    ~NumOrPercent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Num,Percent ,分别表示数量和百分比，默认为 Num
                     * @return Type Num,Percent ,分别表示数量和百分比，默认为 Num
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Num,Percent ,分别表示数量和百分比，默认为 Num
                     * @param _type Num,Percent ,分别表示数量和百分比，默认为 Num
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数值
                     * @return Value 数值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置数值
                     * @param _value 数值
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Num,Percent ,分别表示数量和百分比，默认为 Num
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NUMORPERCENT_H_
