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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Es导入时间字段信息
                */
                class EsTimeInfo : public AbstractModel
                {
                public:
                    EsTimeInfo();
                    ~EsTimeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间类型 1: 日志采集时间 2: 指定日志字段
                     * @return Type 时间类型 1: 日志采集时间 2: 指定日志字段
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置时间类型 1: 日志采集时间 2: 指定日志字段
                     * @param _type 时间类型 1: 日志采集时间 2: 指定日志字段
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取日志时间字段。

时间类型为 2: 指定日志字段时必填
                     * @return TimeKey 日志时间字段。

时间类型为 2: 指定日志字段时必填
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置日志时间字段。

时间类型为 2: 指定日志字段时必填
                     * @param _timeKey 日志时间字段。

时间类型为 2: 指定日志字段时必填
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取日志时间格式。

时间类型为 2: 指定日志字段时必填
                     * @return TimeFormat 日志时间格式。

时间类型为 2: 指定日志字段时必填
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置日志时间格式。

时间类型为 2: 指定日志字段时必填
                     * @param _timeFormat 日志时间格式。

时间类型为 2: 指定日志字段时必填
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取时间字段时区。

时间类型为 2: 指定日志字段时必填
                     * @return TimeZone 时间字段时区。

时间类型为 2: 指定日志字段时必填
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时间字段时区。

时间类型为 2: 指定日志字段时必填
                     * @param _timeZone 时间字段时区。

时间类型为 2: 指定日志字段时必填
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 时间类型 1: 日志采集时间 2: 指定日志字段
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 日志时间字段。

时间类型为 2: 指定日志字段时必填
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 日志时间格式。

时间类型为 2: 指定日志字段时必填
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * 时间字段时区。

时间类型为 2: 指定日志字段时必填
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMEINFO_H_
