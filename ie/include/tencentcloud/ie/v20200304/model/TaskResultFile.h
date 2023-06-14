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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_TASKRESULTFILE_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_TASKRESULTFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaResultInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务结果文件信息
                */
                class TaskResultFile : public AbstractModel
                {
                public:
                    TaskResultFile();
                    ~TaskResultFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 文件链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文件链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 文件链接。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件大小，部分任务支持，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小，部分任务支持，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件大小，部分任务支持，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小，部分任务支持，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取媒体信息，对于媒体文件，部分任务支持返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaInfo 媒体信息，对于媒体文件，部分任务支持返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaResultInfo GetMediaInfo() const;

                    /**
                     * 设置媒体信息，对于媒体文件，部分任务支持返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaInfo 媒体信息，对于媒体文件，部分任务支持返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaInfo(const MediaResultInfo& _mediaInfo);

                    /**
                     * 判断参数 MediaInfo 是否已赋值
                     * @return MediaInfo 是否已赋值
                     * 
                     */
                    bool MediaInfoHasBeenSet() const;

                    /**
                     * 获取文件对应的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 文件对应的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置文件对应的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 文件对应的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * 文件链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 文件大小，部分任务支持，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 媒体信息，对于媒体文件，部分任务支持返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaResultInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * 文件对应的md5。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_TASKRESULTFILE_H_
