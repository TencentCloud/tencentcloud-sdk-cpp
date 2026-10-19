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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPRESOURCECONTENTS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPRESOURCECONTENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MCP ResourceContents，chat-manage 侧不解析内部字段，仅结构透传
                */
                class MCPResourceContents : public AbstractModel
                {
                public:
                    MCPResourceContents();
                    ~MCPResourceContents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>二进制内容，与 text 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Blob <p>二进制内容，与 text 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlob() const;

                    /**
                     * 设置<p>二进制内容，与 text 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blob <p>二进制内容，与 text 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlob(const std::string& _blob);

                    /**
                     * 判断参数 Blob 是否已赋值
                     * @return Blob 是否已赋值
                     * 
                     */
                    bool BlobHasBeenSet() const;

                    /**
                     * 获取<p>JSON：单个资源的 _meta 原文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Meta <p>JSON：单个资源的 _meta 原文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置<p>JSON：单个资源的 _meta 原文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _meta <p>JSON：单个资源的 _meta 原文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取<p>MIME 类型，MCP App 的 HTML 为 text/html;profile=mcp-app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MimeType <p>MIME 类型，MCP App 的 HTML 为 text/html;profile=mcp-app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置<p>MIME 类型，MCP App 的 HTML 为 text/html;profile=mcp-app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mimeType <p>MIME 类型，MCP App 的 HTML 为 text/html;profile=mcp-app</p>
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
                     * 获取<p>文本内容，与 blob 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text <p>文本内容，与 blob 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>文本内容，与 blob 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text <p>文本内容，与 blob 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>资源 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uri <p>资源 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>资源 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uri <p>资源 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * <p>二进制内容，与 text 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blob;
                    bool m_blobHasBeenSet;

                    /**
                     * <p>JSON：单个资源的 _meta 原文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * <p>MIME 类型，MCP App 的 HTML 为 text/html;profile=mcp-app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                    /**
                     * <p>文本内容，与 blob 二选一</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>资源 URI</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPRESOURCECONTENTS_H_
