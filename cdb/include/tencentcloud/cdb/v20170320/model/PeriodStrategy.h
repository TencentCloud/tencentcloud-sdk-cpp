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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PERIODSTRATEGY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PERIODSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/TImeCycle.h>
#include <tencentcloud/cdb/v20170320/model/TimeInterval.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 按周期扩容策略中的所选择的周期
                */
                class PeriodStrategy : public AbstractModel
                {
                public:
                    PeriodStrategy();
                    ~PeriodStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩容周期
                     * @return TimeCycle 扩容周期
                     * 
                     */
                    TImeCycle GetTimeCycle() const;

                    /**
                     * 设置扩容周期
                     * @param _timeCycle 扩容周期
                     * 
                     */
                    void SetTimeCycle(const TImeCycle& _timeCycle);

                    /**
                     * 判断参数 TimeCycle 是否已赋值
                     * @return TimeCycle 是否已赋值
                     * 
                     */
                    bool TimeCycleHasBeenSet() const;

                    /**
                     * 获取时间间隔
                     * @return TimeInterval 时间间隔
                     * 
                     */
                    TimeInterval GetTimeInterval() const;

                    /**
                     * 设置时间间隔
                     * @param _timeInterval 时间间隔
                     * 
                     */
                    void SetTimeInterval(const TimeInterval& _timeInterval);

                    /**
                     * 判断参数 TimeInterval 是否已赋值
                     * @return TimeInterval 是否已赋值
                     * 
                     */
                    bool TimeIntervalHasBeenSet() const;

                private:

                    /**
                     * 扩容周期
                     */
                    TImeCycle m_timeCycle;
                    bool m_timeCycleHasBeenSet;

                    /**
                     * 时间间隔
                     */
                    TimeInterval m_timeInterval;
                    bool m_timeIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PERIODSTRATEGY_H_
