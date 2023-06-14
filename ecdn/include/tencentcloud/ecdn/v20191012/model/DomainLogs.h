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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINLOGS_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINLOGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 域名日志信息
                */
                class DomainLogs : public AbstractModel
                {
                public:
                    DomainLogs();
                    ~DomainLogs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志起始时间。
                     * @return StartTime 日志起始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志起始时间。
                     * @param _startTime 日志起始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志结束时间。
                     * @return EndTime 日志结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志结束时间。
                     * @param _endTime 日志结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取日志下载路径。
                     * @return LogPath 日志下载路径。
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置日志下载路径。
                     * @param _logPath 日志下载路径。
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                private:

                    /**
                     * 日志起始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志下载路径。
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINLOGS_H_
