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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSOUTPUTFILE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSOUTPUTFILE_H_

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
                * 用于描述 MPS 视频处理任务中的返回文件结果。
                */
                class MPSOutputFile : public AbstractModel
                {
                public:
                    MPSOutputFile();
                    ~MPSOutputFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件类型。用于标识 MPS 视频处理任务执行结果中的特定返回文件。
取值：<li>AiAnalysis.DeLogo.Video: 智能擦除任务中产生的擦除后视频文件；</li><li>AiAnalysis.DeLogo.OriginSubtitle: 智能擦除任务中基于画面提取的字幕文件；</li><li>AiAnalysis.DeLogo.TranslateSubtitle: 智能擦除任务中基于画面提取的字幕翻译文件。</li>
                     * @return FileType 文件类型。用于标识 MPS 视频处理任务执行结果中的特定返回文件。
取值：<li>AiAnalysis.DeLogo.Video: 智能擦除任务中产生的擦除后视频文件；</li><li>AiAnalysis.DeLogo.OriginSubtitle: 智能擦除任务中基于画面提取的字幕文件；</li><li>AiAnalysis.DeLogo.TranslateSubtitle: 智能擦除任务中基于画面提取的字幕翻译文件。</li>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型。用于标识 MPS 视频处理任务执行结果中的特定返回文件。
取值：<li>AiAnalysis.DeLogo.Video: 智能擦除任务中产生的擦除后视频文件；</li><li>AiAnalysis.DeLogo.OriginSubtitle: 智能擦除任务中基于画面提取的字幕文件；</li><li>AiAnalysis.DeLogo.TranslateSubtitle: 智能擦除任务中基于画面提取的字幕翻译文件。</li>
                     * @param _fileType 文件类型。用于标识 MPS 视频处理任务执行结果中的特定返回文件。
取值：<li>AiAnalysis.DeLogo.Video: 智能擦除任务中产生的擦除后视频文件；</li><li>AiAnalysis.DeLogo.OriginSubtitle: 智能擦除任务中基于画面提取的字幕文件；</li><li>AiAnalysis.DeLogo.TranslateSubtitle: 智能擦除任务中基于画面提取的字幕翻译文件。</li>
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
                     * 获取存储形式。用于表示该结果文件的存储形式，取值有：<li> Permanent：永久存储；</li><li> Temporary：临时存储。</li>
                     * @return StorageMode 存储形式。用于表示该结果文件的存储形式，取值有：<li> Permanent：永久存储；</li><li> Temporary：临时存储。</li>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置存储形式。用于表示该结果文件的存储形式，取值有：<li> Permanent：永久存储；</li><li> Temporary：临时存储。</li>
                     * @param _storageMode 存储形式。用于表示该结果文件的存储形式，取值有：<li> Permanent：永久存储；</li><li> Temporary：临时存储。</li>
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
                     * 获取媒体文件 ID。当 Type 为 Permanent 时有效，表示该结果文件以视频媒资形式存储在点播平台中，字段值为视频媒资的 FileId。
                     * @return FileId 媒体文件 ID。当 Type 为 Permanent 时有效，表示该结果文件以视频媒资形式存储在点播平台中，字段值为视频媒资的 FileId。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。当 Type 为 Permanent 时有效，表示该结果文件以视频媒资形式存储在点播平台中，字段值为视频媒资的 FileId。
                     * @param _fileId 媒体文件 ID。当 Type 为 Permanent 时有效，表示该结果文件以视频媒资形式存储在点播平台中，字段值为视频媒资的 FileId。
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
                     * 获取结果文件的可下载 Url。
                     * @return Url 结果文件的可下载 Url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置结果文件的可下载 Url。
                     * @param _url 结果文件的可下载 Url。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取过期时间。当 StorageMode 为 Temporary 时有效，表示 Url 的过期时间，单位为秒。
                     * @return ExpiredTime 过期时间。当 StorageMode 为 Temporary 时有效，表示 Url 的过期时间，单位为秒。
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 设置过期时间。当 StorageMode 为 Temporary 时有效，表示 Url 的过期时间，单位为秒。
                     * @param _expiredTime 过期时间。当 StorageMode 为 Temporary 时有效，表示 Url 的过期时间，单位为秒。
                     * 
                     */
                    void SetExpiredTime(const uint64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 文件类型。用于标识 MPS 视频处理任务执行结果中的特定返回文件。
取值：<li>AiAnalysis.DeLogo.Video: 智能擦除任务中产生的擦除后视频文件；</li><li>AiAnalysis.DeLogo.OriginSubtitle: 智能擦除任务中基于画面提取的字幕文件；</li><li>AiAnalysis.DeLogo.TranslateSubtitle: 智能擦除任务中基于画面提取的字幕翻译文件。</li>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 存储形式。用于表示该结果文件的存储形式，取值有：<li> Permanent：永久存储；</li><li> Temporary：临时存储。</li>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 媒体文件 ID。当 Type 为 Permanent 时有效，表示该结果文件以视频媒资形式存储在点播平台中，字段值为视频媒资的 FileId。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 结果文件的可下载 Url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 过期时间。当 StorageMode 为 Temporary 时有效，表示 Url 的过期时间，单位为秒。
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSOUTPUTFILE_H_
