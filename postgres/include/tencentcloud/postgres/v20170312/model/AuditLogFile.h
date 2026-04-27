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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 数据库审计日志文件
                */
                class AuditLogFile : public AbstractModel
                {
                public:
                    AuditLogFile();
                    ~AuditLogFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件名</p>
                     * @return FileName <p>文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名</p>
                     * @param _fileName <p>文件名</p>
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
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>running： 创建中</li><li>failed： 失败</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>running： 创建中</li><li>failed： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>running： 创建中</li><li>failed： 失败</li></ul>
                     * @param _status <p>任务状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>running： 创建中</li><li>failed： 失败</li></ul>
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
                     * 获取<p>文件大小</p><p>单位：MB</p>
                     * @return FileSize <p>文件大小</p><p>单位：MB</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小</p><p>单位：MB</p>
                     * @param _fileSize <p>文件大小</p><p>单位：MB</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>下载链接</p>
                     * @return DownloadUrl <p>下载链接</p>
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置<p>下载链接</p>
                     * @param _downloadUrl <p>下载链接</p>
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
                     * 获取<p>错误信息</p>
                     * @return ErrMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errMsg <p>错误信息</p>
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
                     * 获取<p>下载进度</p>
                     * @return Progress <p>下载进度</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>下载进度</p>
                     * @param _progress <p>下载进度</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>完成时间</p>
                     * @return FinishTime <p>完成时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>完成时间</p>
                     * @param _finishTime <p>完成时间</p>
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
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>running： 创建中</li><li>failed： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>文件大小</p><p>单位：MB</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>下载链接</p>
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>下载进度</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILE_H_
