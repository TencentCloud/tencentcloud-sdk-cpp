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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_OCRDETECT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_OCRDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/OCRItem.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * OCR识别结果详情
                */
                class OCRDetect : public AbstractModel
                {
                public:
                    OCRDetect();
                    ~OCRDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别到的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Item 识别到的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OCRItem> GetItem() const;

                    /**
                     * 设置识别到的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _item 识别到的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItem(const std::vector<OCRItem>& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取识别到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextInfo 识别到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTextInfo() const;

                    /**
                     * 设置识别到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textInfo 识别到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextInfo(const std::string& _textInfo);

                    /**
                     * 判断参数 TextInfo 是否已赋值
                     * @return TextInfo 是否已赋值
                     * 
                     */
                    bool TextInfoHasBeenSet() const;

                private:

                    /**
                     * 识别到的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OCRItem> m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 识别到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_textInfo;
                    bool m_textInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_OCRDETECT_H_
