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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_

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
                * 轮播播放节目信息
                */
                class RoundPlayListItemInfo : public AbstractModel
                {
                public:
                    RoundPlayListItemInfo();
                    ~RoundPlayListItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件标识。
                     * @return FileId 媒体文件标识。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件标识。
                     * @param _fileId 媒体文件标识。
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
                     * 获取播放的音视频类型，可选值：
<li>Transcode：转码输出；转码输出会有多个模版，必须指定 Definition 字段</li>
<li>Original：原始音视频。</li>
Type 对应的格式必须为 HLS 格式。
                     * @return AudioVideoType 播放的音视频类型，可选值：
<li>Transcode：转码输出；转码输出会有多个模版，必须指定 Definition 字段</li>
<li>Original：原始音视频。</li>
Type 对应的格式必须为 HLS 格式。
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置播放的音视频类型，可选值：
<li>Transcode：转码输出；转码输出会有多个模版，必须指定 Definition 字段</li>
<li>Original：原始音视频。</li>
Type 对应的格式必须为 HLS 格式。
                     * @param _audioVideoType 播放的音视频类型，可选值：
<li>Transcode：转码输出；转码输出会有多个模版，必须指定 Definition 字段</li>
<li>Original：原始音视频。</li>
Type 对应的格式必须为 HLS 格式。
                     * 
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     * 
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取播放节目的 ID，由系统分配。
                     * @return ItemId 播放节目的 ID，由系统分配。
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置播放节目的 ID，由系统分配。
                     * @param _itemId 播放节目的 ID，由系统分配。
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取指定播放的转码模板，当 AudioVideoType 为 Transcode 时必须指定。
                     * @return Definition 指定播放的转码模板，当 AudioVideoType 为 Transcode 时必须指定。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置指定播放的转码模板，当 AudioVideoType 为 Transcode 时必须指定。
                     * @param _definition 指定播放的转码模板，当 AudioVideoType 为 Transcode 时必须指定。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 媒体文件标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 播放的音视频类型，可选值：
<li>Transcode：转码输出；转码输出会有多个模版，必须指定 Definition 字段</li>
<li>Original：原始音视频。</li>
Type 对应的格式必须为 HLS 格式。
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * 播放节目的 ID，由系统分配。
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 指定播放的转码模板，当 AudioVideoType 为 Transcode 时必须指定。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_
