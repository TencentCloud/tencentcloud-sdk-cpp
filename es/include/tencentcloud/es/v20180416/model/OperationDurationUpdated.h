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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDURATIONUPDATED_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDURATIONUPDATED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 集群可运维时间
                */
                class OperationDurationUpdated : public AbstractModel
                {
                public:
                    OperationDurationUpdated();
                    ~OperationDurationUpdated() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维护周期，表示周一到周日，可取值[0, 6]
                     * @return Periods 维护周期，表示周一到周日，可取值[0, 6]
                     * 
                     */
                    std::vector<uint64_t> GetPeriods() const;

                    /**
                     * 设置维护周期，表示周一到周日，可取值[0, 6]
                     * @param _periods 维护周期，表示周一到周日，可取值[0, 6]
                     * 
                     */
                    void SetPeriods(const std::vector<uint64_t>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取维护开始时间
                     * @return TimeStart 维护开始时间
                     * 
                     */
                    std::string GetTimeStart() const;

                    /**
                     * 设置维护开始时间
                     * @param _timeStart 维护开始时间
                     * 
                     */
                    void SetTimeStart(const std::string& _timeStart);

                    /**
                     * 判断参数 TimeStart 是否已赋值
                     * @return TimeStart 是否已赋值
                     * 
                     */
                    bool TimeStartHasBeenSet() const;

                    /**
                     * 获取维护结束时间
                     * @return TimeEnd 维护结束时间
                     * 
                     */
                    std::string GetTimeEnd() const;

                    /**
                     * 设置维护结束时间
                     * @param _timeEnd 维护结束时间
                     * 
                     */
                    void SetTimeEnd(const std::string& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取时区，以UTC形式表示
                     * @return TimeZone 时区，以UTC形式表示
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区，以UTC形式表示
                     * @param _timeZone 时区，以UTC形式表示
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取ES集群ID数组
                     * @return MoreInstances ES集群ID数组
                     * 
                     */
                    std::vector<std::string> GetMoreInstances() const;

                    /**
                     * 设置ES集群ID数组
                     * @param _moreInstances ES集群ID数组
                     * 
                     */
                    void SetMoreInstances(const std::vector<std::string>& _moreInstances);

                    /**
                     * 判断参数 MoreInstances 是否已赋值
                     * @return MoreInstances 是否已赋值
                     * 
                     */
                    bool MoreInstancesHasBeenSet() const;

                private:

                    /**
                     * 维护周期，表示周一到周日，可取值[0, 6]
                     */
                    std::vector<uint64_t> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * 维护开始时间
                     */
                    std::string m_timeStart;
                    bool m_timeStartHasBeenSet;

                    /**
                     * 维护结束时间
                     */
                    std::string m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * 时区，以UTC形式表示
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * ES集群ID数组
                     */
                    std::vector<std::string> m_moreInstances;
                    bool m_moreInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDURATIONUPDATED_H_
