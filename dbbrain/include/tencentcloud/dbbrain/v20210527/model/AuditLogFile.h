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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGFILE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 审计日志文件
                */
                class AuditLogFile : public AbstractModel
                {
                public:
                    AuditLogFile();
                    ~AuditLogFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审计日志文件生成异步任务ID。
                     * @return AsyncRequestId 审计日志文件生成异步任务ID。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置审计日志文件生成异步任务ID。
                     * @param _asyncRequestId 审计日志文件生成异步任务ID。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取审计日志文件名称。
                     * @return FileName 审计日志文件名称。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置审计日志文件名称。
                     * @param _fileName 审计日志文件名称。
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
                     * 获取审计日志文件创建时间。格式为 : "2019-03-20 17:09:13"。
                     * @return CreateTime 审计日志文件创建时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置审计日志文件创建时间。格式为 : "2019-03-20 17:09:13"。
                     * @param _createTime 审计日志文件创建时间。格式为 : "2019-03-20 17:09:13"。
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
                     * 获取文件状态值。可能返回的值为：
"creating" - 生成中;
"failed" - 创建失败;
"success" - 已生成;
                     * @return Status 文件状态值。可能返回的值为：
"creating" - 生成中;
"failed" - 创建失败;
"success" - 已生成;
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置文件状态值。可能返回的值为：
"creating" - 生成中;
"failed" - 创建失败;
"success" - 已生成;
                     * @param _status 文件状态值。可能返回的值为：
"creating" - 生成中;
"failed" - 创建失败;
"success" - 已生成;
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
                     * 获取文件大小，单位为 KB。
                     * @return FileSize 文件大小，单位为 KB。
                     * 
                     */
                    double GetFileSize() const;

                    /**
                     * 设置文件大小，单位为 KB。
                     * @param _fileSize 文件大小，单位为 KB。
                     * 
                     */
                    void SetFileSize(const double& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取审计日志下载地址。
                     * @return DownloadUrl 审计日志下载地址。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置审计日志下载地址。
                     * @param _downloadUrl 审计日志下载地址。
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
                     * 获取错误信息。
                     * @return ErrMsg 错误信息。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息。
                     * @param _errMsg 错误信息。
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
                     * 获取文件生成进度。
                     * @return Progress 文件生成进度。
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置文件生成进度。
                     * @param _progress 文件生成进度。
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取文件生成成功时间。
                     * @return FinishTime 文件生成成功时间。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置文件生成成功时间。
                     * @param _finishTime 文件生成成功时间。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 审计日志文件生成异步任务ID。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 审计日志文件名称。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 审计日志文件创建时间。格式为 : "2019-03-20 17:09:13"。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件状态值。可能返回的值为：
"creating" - 生成中;
"failed" - 创建失败;
"success" - 已生成;
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件大小，单位为 KB。
                     */
                    double m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 审计日志下载地址。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 文件生成进度。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 文件生成成功时间。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGFILE_H_
