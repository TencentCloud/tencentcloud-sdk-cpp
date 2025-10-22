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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_FIELD_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_FIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 储存float类型字段
                */
                class Field : public AbstractModel
                {
                public:
                    Field();
                    ~Field() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义字段编号
                     * @return ID 自定义字段编号
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置自定义字段编号
                     * @param _iD 自定义字段编号
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取自定义字段名称/说明
                     * @return Name 自定义字段名称/说明
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义字段名称/说明
                     * @param _name 自定义字段名称/说明
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
                     * 获取字段值
                     * @return Value 字段值
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置字段值
                     * @param _value 字段值
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 自定义字段编号
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 自定义字段名称/说明
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段值
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_FIELD_H_
