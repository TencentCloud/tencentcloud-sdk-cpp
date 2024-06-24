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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORDRECOGNIZEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORDRECOGNIZEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 解析为 word 文档的结果
                */
                class WordRecognizeInfo : public AbstractModel
                {
                public:
                    WordRecognizeInfo();
                    ~WordRecognizeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入文件的页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 输入文件的页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置输入文件的页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 输入文件的页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取word的base64
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordBase64 word的base64
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWordBase64() const;

                    /**
                     * 设置word的base64
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordBase64 word的base64
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWordBase64(const std::string& _wordBase64);

                    /**
                     * 判断参数 WordBase64 是否已赋值
                     * @return WordBase64 是否已赋值
                     * 
                     */
                    bool WordBase64HasBeenSet() const;

                private:

                    /**
                     * 输入文件的页码数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * word的base64
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wordBase64;
                    bool m_wordBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORDRECOGNIZEINFO_H_
