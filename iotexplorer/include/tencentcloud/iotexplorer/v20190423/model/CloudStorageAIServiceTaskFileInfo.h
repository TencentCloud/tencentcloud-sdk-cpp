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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASKFILEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASKFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTaskVideoMetaInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTaskFileLabel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 云存 AI 任务输出文件信息
                */
                class CloudStorageAIServiceTaskFileInfo : public AbstractModel
                {
                public:
                    CloudStorageAIServiceTaskFileInfo();
                    ~CloudStorageAIServiceTaskFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称（含扩展名）
                     * @return FileName 文件名称（含扩展名）
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称（含扩展名）
                     * @param _fileName 文件名称（含扩展名）
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件大小（单位：bytes）
                     * @return FileSize 文件大小（单位：bytes）
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小（单位：bytes）
                     * @param _fileSize 文件大小（单位：bytes）
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件下载 URL
                     * @return DownloadURL 文件下载 URL
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 设置文件下载 URL
                     * @param _downloadURL 文件下载 URL
                     * 
                     */
                    void SetDownloadURL(const std::string& _downloadURL);

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取文件的 MIME Type
                     * @return MimeType 文件的 MIME Type
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置文件的 MIME Type
                     * @param _mimeType 文件的 MIME Type
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
                     * 获取视频文件元数据（仅当文件为视频类型时包含该字段）
                     * @return VideoMetaInfo 视频文件元数据（仅当文件为视频类型时包含该字段）
                     * 
                     */
                    CloudStorageAIServiceTaskVideoMetaInfo GetVideoMetaInfo() const;

                    /**
                     * 设置视频文件元数据（仅当文件为视频类型时包含该字段）
                     * @param _videoMetaInfo 视频文件元数据（仅当文件为视频类型时包含该字段）
                     * 
                     */
                    void SetVideoMetaInfo(const CloudStorageAIServiceTaskVideoMetaInfo& _videoMetaInfo);

                    /**
                     * 判断参数 VideoMetaInfo 是否已赋值
                     * @return VideoMetaInfo 是否已赋值
                     * 
                     */
                    bool VideoMetaInfoHasBeenSet() const;

                    /**
                     * 获取文件标签
                     * @return Labels 文件标签
                     * 
                     */
                    std::vector<CloudStorageAIServiceTaskFileLabel> GetLabels() const;

                    /**
                     * 设置文件标签
                     * @param _labels 文件标签
                     * 
                     */
                    void SetLabels(const std::vector<CloudStorageAIServiceTaskFileLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 文件名称（含扩展名）
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小（单位：bytes）
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件下载 URL
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * 文件的 MIME Type
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                    /**
                     * 视频文件元数据（仅当文件为视频类型时包含该字段）
                     */
                    CloudStorageAIServiceTaskVideoMetaInfo m_videoMetaInfo;
                    bool m_videoMetaInfoHasBeenSet;

                    /**
                     * 文件标签
                     */
                    std::vector<CloudStorageAIServiceTaskFileLabel> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASKFILEINFO_H_
