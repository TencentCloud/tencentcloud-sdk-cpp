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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CELLCONTENT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CELLCONTENT_H_

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
                * 单元格识别结果
                */
                class CellContent : public AbstractModel
                {
                public:
                    CellContent();
                    ~CellContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取段落编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParagNo 段落编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParagNo() const;

                    /**
                     * 设置段落编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paragNo 段落编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParagNo(const int64_t& _paragNo);

                    /**
                     * 判断参数 ParagNo 是否已赋值
                     * @return ParagNo 是否已赋值
                     * 
                     */
                    bool ParagNoHasBeenSet() const;

                    /**
                     * 获取字体大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordSize 字体大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWordSize() const;

                    /**
                     * 设置字体大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordSize 字体大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWordSize(const int64_t& _wordSize);

                    /**
                     * 判断参数 WordSize 是否已赋值
                     * @return WordSize 是否已赋值
                     * 
                     */
                    bool WordSizeHasBeenSet() const;

                private:

                    /**
                     * 段落编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_paragNo;
                    bool m_paragNoHasBeenSet;

                    /**
                     * 字体大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wordSize;
                    bool m_wordSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CELLCONTENT_H_
