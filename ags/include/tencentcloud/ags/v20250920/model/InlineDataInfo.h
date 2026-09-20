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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_INLINEDATAINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_INLINEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 文件内容数据信息
                */
                class InlineDataInfo : public AbstractModel
                {
                public:
                    InlineDataInfo();
                    ~InlineDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体类型，最大长度 128 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MimeType 媒体类型，最大长度 128 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置媒体类型，最大长度 128 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mimeType 媒体类型，最大长度 128 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMimeType(const std::string& _mimeType);

                    /**
                     * 判断参数 MimeType 是否已赋值
                     * @return MimeType 是否已赋值
                     * 
                     */
                    bool MimeTypeHasBeenSet() const;

                    /**
                     * 获取Base64 编码数据，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data Base64 编码数据，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置Base64 编码数据，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data Base64 编码数据，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 媒体类型，最大长度 128 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                    /**
                     * Base64 编码数据，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_INLINEDATAINFO_H_
