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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OCRINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OCRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/OcrItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 图片完整的OCR信息
                */
                class OcrInfo : public AbstractModel
                {
                public:
                    OcrInfo();
                    ~OcrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片进行OCR之后得到的所有包含字块的OCR信息
                     * @return Items 图片进行OCR之后得到的所有包含字块的OCR信息
                     * 
                     */
                    std::vector<OcrItem> GetItems() const;

                    /**
                     * 设置图片进行OCR之后得到的所有包含字块的OCR信息
                     * @param _items 图片进行OCR之后得到的所有包含字块的OCR信息
                     * 
                     */
                    void SetItems(const std::vector<OcrItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取图片进行OCR之后得到的所有字符
                     * @return Text 图片进行OCR之后得到的所有字符
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置图片进行OCR之后得到的所有字符
                     * @param _text 图片进行OCR之后得到的所有字符
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 图片进行OCR之后得到的所有包含字块的OCR信息
                     */
                    std::vector<OcrItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 图片进行OCR之后得到的所有字符
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OCRINFO_H_
