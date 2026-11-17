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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDFILESOURCEINPUT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDFILESOURCEINPUT_H_

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
                * 通用文件来源。FILE 用于 Plugin 原始文件上传，SizeBytes 必填，SHA256 可选；VERSION 仅用于 UpdateRegistryRecord 复用同一 Record 的 READY 文件版本，仅填写 SourceVersionId。与其他来源互斥，不校验插件格式或语义。
                */
                class CloudFileSourceInput : public AbstractModel
                {
                public:
                    CloudFileSourceInput();
                    ~CloudFileSourceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>通用文件来源类型，区分大小写。</p><p>枚举值：</p><ul><li>FILE： 创建 Plugin 文件版本，必须填写 SizeBytes，SHA256 可选；随后通过预签名 PUT 链接上传原始文件。</li><li>VERSION： 仅 UpdateRegistryRecord 支持，复用同一 Skill 或 Plugin Record 的 READY 文件版本，仅填写 SourceVersionId。</li></ul><p>Registry 不做 Plugin 文件内容格式或语义校验，由运行端解析加载。VERSION 不继承来源版本的 Metadata 和 SupportedHarnessVersions。</p>
                     * @return Type <p>通用文件来源类型，区分大小写。</p><p>枚举值：</p><ul><li>FILE： 创建 Plugin 文件版本，必须填写 SizeBytes，SHA256 可选；随后通过预签名 PUT 链接上传原始文件。</li><li>VERSION： 仅 UpdateRegistryRecord 支持，复用同一 Skill 或 Plugin Record 的 READY 文件版本，仅填写 SourceVersionId。</li></ul><p>Registry 不做 Plugin 文件内容格式或语义校验，由运行端解析加载。VERSION 不继承来源版本的 Metadata 和 SupportedHarnessVersions。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>通用文件来源类型，区分大小写。</p><p>枚举值：</p><ul><li>FILE： 创建 Plugin 文件版本，必须填写 SizeBytes，SHA256 可选；随后通过预签名 PUT 链接上传原始文件。</li><li>VERSION： 仅 UpdateRegistryRecord 支持，复用同一 Skill 或 Plugin Record 的 READY 文件版本，仅填写 SourceVersionId。</li></ul><p>Registry 不做 Plugin 文件内容格式或语义校验，由运行端解析加载。VERSION 不继承来源版本的 Metadata 和 SupportedHarnessVersions。</p>
                     * @param _type <p>通用文件来源类型，区分大小写。</p><p>枚举值：</p><ul><li>FILE： 创建 Plugin 文件版本，必须填写 SizeBytes，SHA256 可选；随后通过预签名 PUT 链接上传原始文件。</li><li>VERSION： 仅 UpdateRegistryRecord 支持，复用同一 Skill 或 Plugin Record 的 READY 文件版本，仅填写 SourceVersionId。</li></ul><p>Registry 不做 Plugin 文件内容格式或语义校验，由运行端解析加载。VERSION 不继承来源版本的 Metadata 和 SupportedHarnessVersions。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>待上传 Plugin 文件的原始字节数。FILE 时必填，VERSION 时禁止填写。</p><p>取值范围：[1, 54525952]</p><p>单位：字节</p><p>上限 52 MiB，服务端校验实际上传文件的字节数；不推断文件格式。</p>
                     * @return SizeBytes <p>待上传 Plugin 文件的原始字节数。FILE 时必填，VERSION 时禁止填写。</p><p>取值范围：[1, 54525952]</p><p>单位：字节</p><p>上限 52 MiB，服务端校验实际上传文件的字节数；不推断文件格式。</p>
                     * 
                     */
                    int64_t GetSizeBytes() const;

                    /**
                     * 设置<p>待上传 Plugin 文件的原始字节数。FILE 时必填，VERSION 时禁止填写。</p><p>取值范围：[1, 54525952]</p><p>单位：字节</p><p>上限 52 MiB，服务端校验实际上传文件的字节数；不推断文件格式。</p>
                     * @param _sizeBytes <p>待上传 Plugin 文件的原始字节数。FILE 时必填，VERSION 时禁止填写。</p><p>取值范围：[1, 54525952]</p><p>单位：字节</p><p>上限 52 MiB，服务端校验实际上传文件的字节数；不推断文件格式。</p>
                     * 
                     */
                    void SetSizeBytes(const int64_t& _sizeBytes);

                    /**
                     * 判断参数 SizeBytes 是否已赋值
                     * @return SizeBytes 是否已赋值
                     * 
                     */
                    bool SizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>期望的文件 SHA-256 摘要。FILE 时可选，VERSION 时禁止填写。</p><p>参数格式：64 位小写十六进制字符串。</p><p>提供时服务端计算实际文件摘要并比对；省略时仍计算摘要并在 READY 版本的 ContentSHA256 中返回。</p>
                     * @return SHA256 <p>期望的文件 SHA-256 摘要。FILE 时可选，VERSION 时禁止填写。</p><p>参数格式：64 位小写十六进制字符串。</p><p>提供时服务端计算实际文件摘要并比对；省略时仍计算摘要并在 READY 版本的 ContentSHA256 中返回。</p>
                     * 
                     */
                    std::string GetSHA256() const;

                    /**
                     * 设置<p>期望的文件 SHA-256 摘要。FILE 时可选，VERSION 时禁止填写。</p><p>参数格式：64 位小写十六进制字符串。</p><p>提供时服务端计算实际文件摘要并比对；省略时仍计算摘要并在 READY 版本的 ContentSHA256 中返回。</p>
                     * @param _sHA256 <p>期望的文件 SHA-256 摘要。FILE 时可选，VERSION 时禁止填写。</p><p>参数格式：64 位小写十六进制字符串。</p><p>提供时服务端计算实际文件摘要并比对；省略时仍计算摘要并在 READY 版本的 ContentSHA256 中返回。</p>
                     * 
                     */
                    void SetSHA256(const std::string& _sHA256);

                    /**
                     * 判断参数 SHA256 是否已赋值
                     * @return SHA256 是否已赋值
                     * 
                     */
                    bool SHA256HasBeenSet() const;

                    /**
                     * 获取<p>用于复用文件内容的来源 Version ID。</p><p>参数格式：rv- 前缀的 Version ID。</p><p>入参限制：VERSION 时必填，FILE 时禁止填写。只能在 UpdateRegistryRecord 中引用同一 Record 下未删除、内容 READY 且存在可用制品的 Skill 或 Plugin 文件版本。</p><p>只复用文件，不继承来源版本的 Metadata 和 SupportedHarnessVersions；不能跨 Record 或跨 Registry 复用。</p>
                     * @return SourceVersionId <p>用于复用文件内容的来源 Version ID。</p><p>参数格式：rv- 前缀的 Version ID。</p><p>入参限制：VERSION 时必填，FILE 时禁止填写。只能在 UpdateRegistryRecord 中引用同一 Record 下未删除、内容 READY 且存在可用制品的 Skill 或 Plugin 文件版本。</p><p>只复用文件，不继承来源版本的 Metadata 和 SupportedHarnessVersions；不能跨 Record 或跨 Registry 复用。</p>
                     * 
                     */
                    std::string GetSourceVersionId() const;

                    /**
                     * 设置<p>用于复用文件内容的来源 Version ID。</p><p>参数格式：rv- 前缀的 Version ID。</p><p>入参限制：VERSION 时必填，FILE 时禁止填写。只能在 UpdateRegistryRecord 中引用同一 Record 下未删除、内容 READY 且存在可用制品的 Skill 或 Plugin 文件版本。</p><p>只复用文件，不继承来源版本的 Metadata 和 SupportedHarnessVersions；不能跨 Record 或跨 Registry 复用。</p>
                     * @param _sourceVersionId <p>用于复用文件内容的来源 Version ID。</p><p>参数格式：rv- 前缀的 Version ID。</p><p>入参限制：VERSION 时必填，FILE 时禁止填写。只能在 UpdateRegistryRecord 中引用同一 Record 下未删除、内容 READY 且存在可用制品的 Skill 或 Plugin 文件版本。</p><p>只复用文件，不继承来源版本的 Metadata 和 SupportedHarnessVersions；不能跨 Record 或跨 Registry 复用。</p>
                     * 
                     */
                    void SetSourceVersionId(const std::string& _sourceVersionId);

                    /**
                     * 判断参数 SourceVersionId 是否已赋值
                     * @return SourceVersionId 是否已赋值
                     * 
                     */
                    bool SourceVersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>通用文件来源类型，区分大小写。</p><p>枚举值：</p><ul><li>FILE： 创建 Plugin 文件版本，必须填写 SizeBytes，SHA256 可选；随后通过预签名 PUT 链接上传原始文件。</li><li>VERSION： 仅 UpdateRegistryRecord 支持，复用同一 Skill 或 Plugin Record 的 READY 文件版本，仅填写 SourceVersionId。</li></ul><p>Registry 不做 Plugin 文件内容格式或语义校验，由运行端解析加载。VERSION 不继承来源版本的 Metadata 和 SupportedHarnessVersions。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>待上传 Plugin 文件的原始字节数。FILE 时必填，VERSION 时禁止填写。</p><p>取值范围：[1, 54525952]</p><p>单位：字节</p><p>上限 52 MiB，服务端校验实际上传文件的字节数；不推断文件格式。</p>
                     */
                    int64_t m_sizeBytes;
                    bool m_sizeBytesHasBeenSet;

                    /**
                     * <p>期望的文件 SHA-256 摘要。FILE 时可选，VERSION 时禁止填写。</p><p>参数格式：64 位小写十六进制字符串。</p><p>提供时服务端计算实际文件摘要并比对；省略时仍计算摘要并在 READY 版本的 ContentSHA256 中返回。</p>
                     */
                    std::string m_sHA256;
                    bool m_sHA256HasBeenSet;

                    /**
                     * <p>用于复用文件内容的来源 Version ID。</p><p>参数格式：rv- 前缀的 Version ID。</p><p>入参限制：VERSION 时必填，FILE 时禁止填写。只能在 UpdateRegistryRecord 中引用同一 Record 下未删除、内容 READY 且存在可用制品的 Skill 或 Plugin 文件版本。</p><p>只复用文件，不继承来源版本的 Metadata 和 SupportedHarnessVersions；不能跨 Record 或跨 Registry 复用。</p>
                     */
                    std::string m_sourceVersionId;
                    bool m_sourceVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDFILESOURCEINPUT_H_
