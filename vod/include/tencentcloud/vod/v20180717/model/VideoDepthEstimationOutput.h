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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONOUTPUT_H_

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
                * 视频深度估计任务的输出信息。
                */
                class VideoDepthEstimationOutput : public AbstractModel
                {
                public:
                    VideoDepthEstimationOutput();
                    ~VideoDepthEstimationOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输出文件的存储模式，取值：</p><li>Temporary：临时存储，文件默认 7 天后删除；</li><li>Permanent：永久存储，保存到点播媒资库。</li>
                     * @return StorageMode <p>输出文件的存储模式，取值：</p><li>Temporary：临时存储，文件默认 7 天后删除；</li><li>Permanent：永久存储，保存到点播媒资库。</li>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>输出文件的存储模式，取值：</p><li>Temporary：临时存储，文件默认 7 天后删除；</li><li>Permanent：永久存储，保存到点播媒资库。</li>
                     * @param _storageMode <p>输出文件的存储模式，取值：</p><li>Temporary：临时存储，文件默认 7 天后删除；</li><li>Permanent：永久存储，保存到点播媒资库。</li>
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取<p>输出文件的媒体名称，仅 StorageMode 为 Permanent 时有值。</p>
                     * @return MediaName <p>输出文件的媒体名称，仅 StorageMode 为 Permanent 时有值。</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>输出文件的媒体名称，仅 StorageMode 为 Permanent 时有值。</p>
                     * @param _mediaName <p>输出文件的媒体名称，仅 StorageMode 为 Permanent 时有值。</p>
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
                     * 获取<p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。<br><font color="red">注意：</font>StorageMode 为 Temporary 时，该字段为文件生成时间加 7 天。</p>
                     * @return ExpireTime <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。<br><font color="red">注意：</font>StorageMode 为 Temporary 时，该字段为文件生成时间加 7 天。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。<br><font color="red">注意：</font>StorageMode 为 Temporary 时，该字段为文件生成时间加 7 天。</p>
                     * @param _expireTime <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。<br><font color="red">注意：</font>StorageMode 为 Temporary 时，该字段为文件生成时间加 7 天。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>输出文件的类型，取值 mp4。</p>
                     * @return FileType <p>输出文件的类型，取值 mp4。</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>输出文件的类型，取值 mp4。</p>
                     * @param _fileType <p>输出文件的类型，取值 mp4。</p>
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
                     * 获取<p>输出文件的媒体文件 ID，仅 StorageMode 为 Permanent 时有值。</p>
                     * @return FileId <p>输出文件的媒体文件 ID，仅 StorageMode 为 Permanent 时有值。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>输出文件的媒体文件 ID，仅 StorageMode 为 Permanent 时有值。</p>
                     * @param _fileId <p>输出文件的媒体文件 ID，仅 StorageMode 为 Permanent 时有值。</p>
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
                     * 获取<p>输出文件的播放地址。</p>
                     * @return FileUrl <p>输出文件的播放地址。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>输出文件的播放地址。</p>
                     * @param _fileUrl <p>输出文件的播放地址。</p>
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
                     * 获取<p>输出视频的元信息。</p>
                     * @return MetaData <p>输出视频的元信息。</p>
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>输出视频的元信息。</p>
                     * @param _metaData <p>输出视频的元信息。</p>
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
                     * <p>输出文件的存储模式，取值：</p><li>Temporary：临时存储，文件默认 7 天后删除；</li><li>Permanent：永久存储，保存到点播媒资库。</li>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>输出文件的媒体名称，仅 StorageMode 为 Permanent 时有值。</p>
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。<br><font color="red">注意：</font>StorageMode 为 Temporary 时，该字段为文件生成时间加 7 天。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>输出文件的类型，取值 mp4。</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>输出文件的媒体文件 ID，仅 StorageMode 为 Permanent 时有值。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>输出文件的播放地址。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>输出视频的元信息。</p>
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONOUTPUT_H_
