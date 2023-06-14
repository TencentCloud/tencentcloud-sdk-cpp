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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SUBTASKRESULTITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SUBTASKRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/FileInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 画质重生子任务结果
                */
                class SubTaskResultItem : public AbstractModel
                {
                public:
                    SubTaskResultItem();
                    ~SubTaskResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子任务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 子任务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置子任务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 子任务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取子任务状态。
0：成功；
1：执行中；
其他值：失败。
                     * @return StatusCode 子任务状态。
0：成功；
1：执行中；
其他值：失败。
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置子任务状态。
0：成功；
1：执行中；
其他值：失败。
                     * @param _statusCode 子任务状态。
0：成功；
1：执行中；
其他值：失败。
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取子任务状态描述。
                     * @return StatusMsg 子任务状态描述。
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置子任务状态描述。
                     * @param _statusMsg 子任务状态描述。
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取子任务进度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgressRate 子任务进度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProgressRate() const;

                    /**
                     * 设置子任务进度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progressRate 子任务进度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgressRate(const int64_t& _progressRate);

                    /**
                     * 判断参数 ProgressRate 是否已赋值
                     * @return ProgressRate 是否已赋值
                     * 
                     */
                    bool ProgressRateHasBeenSet() const;

                    /**
                     * 获取画质重生处理后文件的下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadUrl 画质重生处理后文件的下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置画质重生处理后文件的下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadUrl 画质重生处理后文件的下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取画质重生处理后文件的MD5。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 画质重生处理后文件的MD5。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置画质重生处理后文件的MD5。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 画质重生处理后文件的MD5。
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

                    /**
                     * 获取画质重生处理后文件的详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileInfo 画质重生处理后文件的详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileInfo GetFileInfo() const;

                    /**
                     * 设置画质重生处理后文件的详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileInfo 画质重生处理后文件的详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileInfo(const FileInfo& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                private:

                    /**
                     * 子任务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 子任务状态。
0：成功；
1：执行中；
其他值：失败。
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 子任务状态描述。
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * 子任务进度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_progressRate;
                    bool m_progressRateHasBeenSet;

                    /**
                     * 画质重生处理后文件的下载地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 画质重生处理后文件的MD5。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 画质重生处理后文件的详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SUBTASKRESULTITEM_H_
