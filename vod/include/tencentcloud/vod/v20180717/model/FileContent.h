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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILECONTENT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 云点播中存储的文件。
                */
                class FileContent : public AbstractModel
                {
                public:
                    FileContent();
                    ~FileContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象键。
                     * @return Key 对象键。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置对象键。
                     * @param _key 对象键。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取对象最后修改时间，为 ISO8601格式，例如2019-05-24T10:56:40Z。
                     * @return LastModified 对象最后修改时间，为 ISO8601格式，例如2019-05-24T10:56:40Z。
                     * 
                     */
                    std::string GetLastModified() const;

                    /**
                     * 设置对象最后修改时间，为 ISO8601格式，例如2019-05-24T10:56:40Z。
                     * @param _lastModified 对象最后修改时间，为 ISO8601格式，例如2019-05-24T10:56:40Z。
                     * 
                     */
                    void SetLastModified(const std::string& _lastModified);

                    /**
                     * 判断参数 LastModified 是否已赋值
                     * @return LastModified 是否已赋值
                     * 
                     */
                    bool LastModifiedHasBeenSet() const;

                    /**
                     * 获取对象的实体标签（Entity Tag），是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化。
                     * @return ETag 对象的实体标签（Entity Tag），是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化。
                     * 
                     */
                    std::string GetETag() const;

                    /**
                     * 设置对象的实体标签（Entity Tag），是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化。
                     * @param _eTag 对象的实体标签（Entity Tag），是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化。
                     * 
                     */
                    void SetETag(const std::string& _eTag);

                    /**
                     * 判断参数 ETag 是否已赋值
                     * @return ETag 是否已赋值
                     * 
                     */
                    bool ETagHasBeenSet() const;

                    /**
                     * 获取对象大小，单位为Byte。
                     * @return Size 对象大小，单位为Byte。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置对象大小，单位为Byte。
                     * @param _size 对象大小，单位为Byte。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取枚举值请参见[存储类型](https://cloud.tencent.com/document/product/436/33417)文档，例如 STANDARD_IA，ARCHIVE。
                     * @return StorageClass 枚举值请参见[存储类型](https://cloud.tencent.com/document/product/436/33417)文档，例如 STANDARD_IA，ARCHIVE。
                     * 
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置枚举值请参见[存储类型](https://cloud.tencent.com/document/product/436/33417)文档，例如 STANDARD_IA，ARCHIVE。
                     * @param _storageClass 枚举值请参见[存储类型](https://cloud.tencent.com/document/product/436/33417)文档，例如 STANDARD_IA，ARCHIVE。
                     * 
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     * 
                     */
                    bool StorageClassHasBeenSet() const;

                    /**
                     * 获取此文件对应的媒体文件的唯一标识。
                     * @return FileId 此文件对应的媒体文件的唯一标识。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置此文件对应的媒体文件的唯一标识。
                     * @param _fileId 此文件对应的媒体文件的唯一标识。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件分类： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li> <li>Other: 其他文件</li>
                     * @return Category 文件分类： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li> <li>Other: 其他文件</li>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置文件分类： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li> <li>Other: 其他文件</li>
                     * @param _category 文件分类： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li> <li>Other: 其他文件</li>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取可选值有：
 - OriginalFiles：原文件
- TranscodeFiles：转码文件
- AdaptiveDynamicStreamingFiles：转自适应码流文件
- SubtitleFiles：字幕文件
- SampleSnapshotFiles：采样截图文件
- ImageSpriteFiles：雪碧图截图文件
- SnapshotByTimeOffsetFiles：时间点截图文件

                     * @return FileType 可选值有：
 - OriginalFiles：原文件
- TranscodeFiles：转码文件
- AdaptiveDynamicStreamingFiles：转自适应码流文件
- SubtitleFiles：字幕文件
- SampleSnapshotFiles：采样截图文件
- ImageSpriteFiles：雪碧图截图文件
- SnapshotByTimeOffsetFiles：时间点截图文件

                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置可选值有：
 - OriginalFiles：原文件
- TranscodeFiles：转码文件
- AdaptiveDynamicStreamingFiles：转自适应码流文件
- SubtitleFiles：字幕文件
- SampleSnapshotFiles：采样截图文件
- ImageSpriteFiles：雪碧图截图文件
- SnapshotByTimeOffsetFiles：时间点截图文件

                     * @param _fileType 可选值有：
 - OriginalFiles：原文件
- TranscodeFiles：转码文件
- AdaptiveDynamicStreamingFiles：转自适应码流文件
- SubtitleFiles：字幕文件
- SampleSnapshotFiles：采样截图文件
- ImageSpriteFiles：雪碧图截图文件
- SnapshotByTimeOffsetFiles：时间点截图文件

                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取视频模板号，模板定义参见转码模板。
                     * @return Definition 视频模板号，模板定义参见转码模板。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置视频模板号，模板定义参见转码模板。
                     * @param _definition 视频模板号，模板定义参见转码模板。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取字幕ID。
仅当FileType=SubtitleFiles时有值。
                     * @return SubtitleID 字幕ID。
仅当FileType=SubtitleFiles时有值。
                     * 
                     */
                    std::string GetSubtitleID() const;

                    /**
                     * 设置字幕ID。
仅当FileType=SubtitleFiles时有值。
                     * @param _subtitleID 字幕ID。
仅当FileType=SubtitleFiles时有值。
                     * 
                     */
                    void SetSubtitleID(const std::string& _subtitleID);

                    /**
                     * 判断参数 SubtitleID 是否已赋值
                     * @return SubtitleID 是否已赋值
                     * 
                     */
                    bool SubtitleIDHasBeenSet() const;

                private:

                    /**
                     * 对象键。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 对象最后修改时间，为 ISO8601格式，例如2019-05-24T10:56:40Z。
                     */
                    std::string m_lastModified;
                    bool m_lastModifiedHasBeenSet;

                    /**
                     * 对象的实体标签（Entity Tag），是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化。
                     */
                    std::string m_eTag;
                    bool m_eTagHasBeenSet;

                    /**
                     * 对象大小，单位为Byte。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 枚举值请参见[存储类型](https://cloud.tencent.com/document/product/436/33417)文档，例如 STANDARD_IA，ARCHIVE。
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                    /**
                     * 此文件对应的媒体文件的唯一标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件分类： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li> <li>Other: 其他文件</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 可选值有：
 - OriginalFiles：原文件
- TranscodeFiles：转码文件
- AdaptiveDynamicStreamingFiles：转自适应码流文件
- SubtitleFiles：字幕文件
- SampleSnapshotFiles：采样截图文件
- ImageSpriteFiles：雪碧图截图文件
- SnapshotByTimeOffsetFiles：时间点截图文件

                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 视频模板号，模板定义参见转码模板。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 字幕ID。
仅当FileType=SubtitleFiles时有值。
                     */
                    std::string m_subtitleID;
                    bool m_subtitleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILECONTENT_H_
