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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 日志分析的日志信息
                */
                class LogItem : public AbstractModel
                {
                public:
                    LogItem();
                    ~LogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志产生的时间点，采用 unix 毫秒级时间戳。
                     * @return Timestamp 日志产生的时间点，采用 unix 毫秒级时间戳。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置日志产生的时间点，采用 unix 毫秒级时间戳。
                     * @param _timestamp 日志产生的时间点，采用 unix 毫秒级时间戳。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取日志的具体内容，采用JSON字符串格式。
                     * @return LogJson 日志的具体内容，采用JSON字符串格式。
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置日志的具体内容，采用JSON字符串格式。
                     * @param _logJson 日志的具体内容，采用JSON字符串格式。
                     * 
                     */
                    void SetLogJson(const std::string& _logJson);

                    /**
                     * 判断参数 LogJson 是否已赋值
                     * @return LogJson 是否已赋值
                     * 
                     */
                    bool LogJsonHasBeenSet() const;

                private:

                    /**
                     * 日志产生的时间点，采用 unix 毫秒级时间戳。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 日志的具体内容，采用JSON字符串格式。
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGITEM_H_
