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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LOGINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 日志url信息。
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志名称。</p>
                     * @return LogName <p>日志名称。</p>
                     * 
                     */
                    std::string GetLogName() const;

                    /**
                     * 设置<p>日志名称。</p>
                     * @param _logName <p>日志名称。</p>
                     * 
                     */
                    void SetLogName(const std::string& _logName);

                    /**
                     * 判断参数 LogName 是否已赋值
                     * @return LogName 是否已赋值
                     * 
                     */
                    bool LogNameHasBeenSet() const;

                    /**
                     * 获取<p>日志 URL。</p>
                     * @return LogUrl <p>日志 URL。</p>
                     * 
                     */
                    std::string GetLogUrl() const;

                    /**
                     * 设置<p>日志 URL。</p>
                     * @param _logUrl <p>日志 URL。</p>
                     * 
                     */
                    void SetLogUrl(const std::string& _logUrl);

                    /**
                     * 判断参数 LogUrl 是否已赋值
                     * @return LogUrl 是否已赋值
                     * 
                     */
                    bool LogUrlHasBeenSet() const;

                    /**
                     * 获取<p>日志生成时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @return LogTime <p>日志生成时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    std::string GetLogTime() const;

                    /**
                     * 设置<p>日志生成时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @param _logTime <p>日志生成时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    void SetLogTime(const std::string& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     * 
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件大小，单位字节。</p>
                     * @return FileSize <p>文件大小，单位字节。</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小，单位字节。</p>
                     * @param _fileSize <p>文件大小，单位字节。</p>
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * <p>日志名称。</p>
                     */
                    std::string m_logName;
                    bool m_logNameHasBeenSet;

                    /**
                     * <p>日志 URL。</p>
                     */
                    std::string m_logUrl;
                    bool m_logUrlHasBeenSet;

                    /**
                     * <p>日志生成时间。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     */
                    std::string m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * <p>文件大小，单位字节。</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LOGINFO_H_
