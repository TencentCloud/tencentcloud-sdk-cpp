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
                     * 获取日志名称。
                     * @return LogName 日志名称。
                     * 
                     */
                    std::string GetLogName() const;

                    /**
                     * 设置日志名称。
                     * @param _logName 日志名称。
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
                     * 获取日志 URL。
                     * @return LogUrl 日志 URL。
                     * 
                     */
                    std::string GetLogUrl() const;

                    /**
                     * 设置日志 URL。
                     * @param _logUrl 日志 URL。
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
                     * 获取日志生成时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return LogTime 日志生成时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetLogTime() const;

                    /**
                     * 设置日志生成时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _logTime 日志生成时间。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取文件大小。
                     * @return FileSize 文件大小。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小。
                     * @param _fileSize 文件大小。
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
                     * 日志名称。
                     */
                    std::string m_logName;
                    bool m_logNameHasBeenSet;

                    /**
                     * 日志 URL。
                     */
                    std::string m_logUrl;
                    bool m_logUrlHasBeenSet;

                    /**
                     * 日志生成时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 文件大小。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LOGINFO_H_
