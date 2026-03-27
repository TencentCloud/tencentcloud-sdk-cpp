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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_EXPORTFILE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_EXPORTFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 导出文件
                */
                class ExportFile : public AbstractModel
                {
                public:
                    ExportFile();
                    ~ExportFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName <p>文件名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName <p>文件名。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>状态值。</p><p>枚举值：</p><ul><li>creating： 文件创建中。</li><li>success： 文件已生成。</li><li>failed： 文件生成失败。</li><li>deleted： 文件已删除。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态值。</p><p>枚举值：</p><ul><li>creating： 文件创建中。</li><li>success： 文件已生成。</li><li>failed： 文件生成失败。</li><li>deleted： 文件已删除。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态值。</p><p>枚举值：</p><ul><li>creating： 文件创建中。</li><li>success： 文件已生成。</li><li>failed： 文件生成失败。</li><li>deleted： 文件已删除。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态值。</p><p>枚举值：</p><ul><li>creating： 文件创建中。</li><li>success： 文件已生成。</li><li>failed： 文件生成失败。</li><li>deleted： 文件已删除。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>文件大小，单位：byte。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize <p>文件大小，单位：byte。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小，单位：byte。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize <p>文件大小，单位：byte。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>文件创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>文件创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>文件创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>文件创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件下载地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadUrl <p>文件下载地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置<p>文件下载地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadUrl <p>文件下载地址。</p>
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
                     * 获取<p>导出文件的错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg <p>导出文件的错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>导出文件的错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg <p>导出文件的错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>导出文件的进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress <p>导出文件的进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>导出文件的进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progress <p>导出文件的进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>导出文件的完成时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime <p>导出文件的完成时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>导出文件的完成时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishTime <p>导出文件的完成时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>异步请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncRequestId <p>异步请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置<p>异步请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asyncRequestId <p>异步请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * <p>文件名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>状态值。</p><p>枚举值：</p><ul><li>creating： 文件创建中。</li><li>success： 文件已生成。</li><li>failed： 文件生成失败。</li><li>deleted： 文件已删除。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>文件大小，单位：byte。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>文件创建时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>文件下载地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>导出文件的错误信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>导出文件的进度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>导出文件的完成时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>异步请求 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_EXPORTFILE_H_
