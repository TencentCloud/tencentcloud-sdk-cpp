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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 媒体类型
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回传入的媒体文件的编码格式，如wav、mp3、aac、flac、amr、3gp、 m4a、wma、ogg、ape等。
                     * @return Codecs 该字段用于返回传入的媒体文件的编码格式，如wav、mp3、aac、flac、amr、3gp、 m4a、wma、ogg、ape等。
                     * 
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置该字段用于返回传入的媒体文件的编码格式，如wav、mp3、aac、flac、amr、3gp、 m4a、wma、ogg、ape等。
                     * @param _codecs 该字段用于返回传入的媒体文件的编码格式，如wav、mp3、aac、flac、amr、3gp、 m4a、wma、ogg、ape等。
                     * 
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     * 
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回对传入的流媒体文件进行分片的片段时长，单位为毫秒。**默认值为15秒**，支持用户自定义配置。
                     * @return Duration 该字段用于返回对传入的流媒体文件进行分片的片段时长，单位为毫秒。**默认值为15秒**，支持用户自定义配置。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置该字段用于返回对传入的流媒体文件进行分片的片段时长，单位为毫秒。**默认值为15秒**，支持用户自定义配置。
                     * @param _duration 该字段用于返回对传入的流媒体文件进行分片的片段时长，单位为毫秒。**默认值为15秒**，支持用户自定义配置。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取*内测中，敬请期待*
                     * @return Width *内测中，敬请期待*
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置*内测中，敬请期待*
                     * @param _width *内测中，敬请期待*
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取*内测中，敬请期待*
                     * @return Height *内测中，敬请期待*
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置*内测中，敬请期待*
                     * @param _height *内测中，敬请期待*
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取*内测中，敬请期待*
                     * @return Thumbnail *内测中，敬请期待*
                     * 
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置*内测中，敬请期待*
                     * @param _thumbnail *内测中，敬请期待*
                     * 
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     * 
                     */
                    bool ThumbnailHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回传入的媒体文件的编码格式，如wav、mp3、aac、flac、amr、3gp、 m4a、wma、ogg、ape等。
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * 该字段用于返回对传入的流媒体文件进行分片的片段时长，单位为毫秒。**默认值为15秒**，支持用户自定义配置。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * *内测中，敬请期待*
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * *内测中，敬请期待*
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * *内测中，敬请期待*
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_MEDIAINFO_H_
