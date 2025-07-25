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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKEMBEDINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKEMBEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 嵌入盲水印配置
                */
                class BlindWatermarkEmbedInfo : public AbstractModel
                {
                public:
                    BlindWatermarkEmbedInfo();
                    ~BlindWatermarkEmbedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取盲水印文字，经过URL安全的Base64编码的4Byte数据。Base64解码之后，少于4Byte将会填充0x00到4Byte，超过4Byte将会截断为4Byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmbedText 盲水印文字，经过URL安全的Base64编码的4Byte数据。Base64解码之后，少于4Byte将会填充0x00到4Byte，超过4Byte将会截断为4Byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmbedText() const;

                    /**
                     * 设置盲水印文字，经过URL安全的Base64编码的4Byte数据。Base64解码之后，少于4Byte将会填充0x00到4Byte，超过4Byte将会截断为4Byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embedText 盲水印文字，经过URL安全的Base64编码的4Byte数据。Base64解码之后，少于4Byte将会填充0x00到4Byte，超过4Byte将会截断为4Byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmbedText(const std::string& _embedText);

                    /**
                     * 判断参数 EmbedText 是否已赋值
                     * @return EmbedText 是否已赋值
                     * 
                     */
                    bool EmbedTextHasBeenSet() const;

                private:

                    /**
                     * 盲水印文字，经过URL安全的Base64编码的4Byte数据。Base64解码之后，少于4Byte将会填充0x00到4Byte，超过4Byte将会截断为4Byte。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_embedText;
                    bool m_embedTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKEMBEDINFO_H_
