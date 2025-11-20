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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTOLLSUMMARYITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTOLLSUMMARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ElectronicTollSummaryItem
                */
                class ElectronicTollSummaryItem : public AbstractModel
                {
                public:
                    ElectronicTollSummaryItem();
                    ~ElectronicTollSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取票面key值
                     * @return Name 票面key值
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置票面key值
                     * @param _name 票面key值
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
                     * 获取票面value值
                     * @return Value 票面value值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置票面value值
                     * @param _value 票面value值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取字段所在行，下标从0开始，非行字段或未能识别行号的返回-1
                     * @return Row 字段所在行，下标从0开始，非行字段或未能识别行号的返回-1
                     * 
                     */
                    int64_t GetRow() const;

                    /**
                     * 设置字段所在行，下标从0开始，非行字段或未能识别行号的返回-1
                     * @param _row 字段所在行，下标从0开始，非行字段或未能识别行号的返回-1
                     * 
                     */
                    void SetRow(const int64_t& _row);

                    /**
                     * 判断参数 Row 是否已赋值
                     * @return Row 是否已赋值
                     * 
                     */
                    bool RowHasBeenSet() const;

                private:

                    /**
                     * 票面key值
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 票面value值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 字段所在行，下标从0开始，非行字段或未能识别行号的返回-1
                     */
                    int64_t m_row;
                    bool m_rowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTOLLSUMMARYITEM_H_
