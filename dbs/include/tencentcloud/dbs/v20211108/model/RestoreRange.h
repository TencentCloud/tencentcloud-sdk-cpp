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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_RESTORERANGE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_RESTORERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 可恢复时间范围
                */
                class RestoreRange : public AbstractModel
                {
                public:
                    RestoreRange();
                    ~RestoreRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可恢复起始时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * @return StartTime 可恢复起始时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置可恢复起始时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * @param _startTime 可恢复起始时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
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
                     * 获取可恢复结束时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * @return EndTime 可恢复结束时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置可恢复结束时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * @param _endTime 可恢复结束时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 可恢复起始时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 可恢复结束时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，无可恢复时间范围时为空字符串。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_RESTORERANGE_H_
