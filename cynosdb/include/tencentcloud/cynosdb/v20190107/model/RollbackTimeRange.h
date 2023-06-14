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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTIMERANGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTIMERANGE_H_

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
                * 可回档的时间范围
                */
                class RollbackTimeRange : public AbstractModel
                {
                public:
                    RollbackTimeRange();
                    ~RollbackTimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间
                     * @return TimeRangeStart 开始时间
                     * 
                     */
                    std::string GetTimeRangeStart() const;

                    /**
                     * 设置开始时间
                     * @param _timeRangeStart 开始时间
                     * 
                     */
                    void SetTimeRangeStart(const std::string& _timeRangeStart);

                    /**
                     * 判断参数 TimeRangeStart 是否已赋值
                     * @return TimeRangeStart 是否已赋值
                     * 
                     */
                    bool TimeRangeStartHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return TimeRangeEnd 结束时间
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置结束时间
                     * @param _timeRangeEnd 结束时间
                     * 
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     * 
                     */
                    bool TimeRangeEndHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_timeRangeStart;
                    bool m_timeRangeStartHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTIMERANGE_H_
