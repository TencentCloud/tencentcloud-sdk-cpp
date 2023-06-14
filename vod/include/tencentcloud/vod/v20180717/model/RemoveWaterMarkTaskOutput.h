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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能去除水印任务的输出。
                */
                class RemoveWaterMarkTaskOutput : public AbstractModel
                {
                public:
                    RemoveWaterMarkTaskOutput();
                    ~RemoveWaterMarkTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件 ID。
                     * @return FileId 媒体文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。
                     * @param _fileId 媒体文件 ID。
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
                     * 获取文件类型，例如 mp4、mp3 等。
                     * @return FileType 文件类型，例如 mp4、mp3 等。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，例如 mp4、mp3 等。
                     * @param _fileType 文件类型，例如 mp4、mp3 等。
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
                     * 获取媒体文件播放地址。
                     * @return FileUrl 媒体文件播放地址。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置媒体文件播放地址。
                     * @param _fileUrl 媒体文件播放地址。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取文件名称，最长 64 个字符。
                     * @return MediaName 文件名称，最长 64 个字符。
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置文件名称，最长 64 个字符。
                     * @param _mediaName 文件名称，最长 64 个字符。
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取元信息。包括大小、时长、视频流信息、音频流信息等。
                     * @return MetaData 元信息。包括大小、时长、视频流信息、音频流信息等。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置元信息。包括大小、时长、视频流信息、音频流信息等。
                     * @param _metaData 元信息。包括大小、时长、视频流信息、音频流信息等。
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件类型，例如 mp4、mp3 等。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 媒体文件播放地址。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件名称，最长 64 个字符。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 元信息。包括大小、时长、视频流信息、音频流信息等。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_
