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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取审计日志文件名称
                     * @return FileName 审计日志文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置审计日志文件名称
                     * @param _fileName 审计日志文件名称
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
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位为 KB。
                     * @param _fileSize 文件大小，单位为 KB。
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
                     * 获取日志下载进度。
                     * @return ProgressRate 日志下载进度。
                     * 
                     */
                    int64_t GetProgressRate() const;

                    /**
                     * 设置日志下载进度。
                     * @param _progressRate 日志下载进度。
                     * 
                     */
                    void SetProgressRate(const int64_t& _progressRate);

                    /**
                     * 判断参数 ProgressRate 是否已赋值
                     * @return ProgressRate 是否已赋值
                     * 
                     */
                    bool ProgressRateHasBeenSet() const;

                private:

                    /**
                     * 审计日志文件名称
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
                    int64_t m_fileSize;
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
                     * 日志下载进度。
                     */
                    int64_t m_progressRate;
                    bool m_progressRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILE_H_
