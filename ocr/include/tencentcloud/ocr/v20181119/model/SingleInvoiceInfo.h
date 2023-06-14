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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEINFO_H_

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
                * 混贴票据中单张发票的内容
                */
                class SingleInvoiceInfo : public AbstractModel
                {
                public:
                    SingleInvoiceInfo();
                    ~SingleInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称
                     * @return Name 识别出的字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的字段名称
                     * @param _name 识别出的字段名称
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
                     * 获取识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     * @return Value 识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     * @param _value 识别出的字段名称对应的值，也就是字段name对应的字符串结果。
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
                     * 获取字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * @return Row 字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * 
                     */
                    int64_t GetRow() const;

                    /**
                     * 设置字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * @param _row 字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
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
                     * 识别出的字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     */
                    int64_t m_row;
                    bool m_rowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEINFO_H_
