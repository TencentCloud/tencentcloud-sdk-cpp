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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_REDLETTERINVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_REDLETTERINVOICEITEM_H_

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
                * 红字发票信息
                */
                class RedLetterInvoiceItem : public AbstractModel
                {
                public:
                    RedLetterInvoiceItem();
                    ~RedLetterInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>红字发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code <p>红字发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>红字发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code <p>红字发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>红字发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Number <p>红字发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>红字发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _number <p>红字发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>红字开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date <p>红字开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>红字开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date <p>红字开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>红字发票状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State <p>红字发票状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>红字发票状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state <p>红字发票状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * <p>红字发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>红字发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>红字开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>红字发票状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_REDLETTERINVOICEITEM_H_
