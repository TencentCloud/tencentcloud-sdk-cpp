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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICESUMSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICESUMSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetDeviceSumStatistics返回参数结构体
                */
                class GetDeviceSumStatisticsResponse : public AbstractModel
                {
                public:
                    GetDeviceSumStatisticsResponse();
                    ~GetDeviceSumStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取激活设备总数
                     * @return ActivationCount 激活设备总数
                     * 
                     */
                    int64_t GetActivationCount() const;

                    /**
                     * 判断参数 ActivationCount 是否已赋值
                     * @return ActivationCount 是否已赋值
                     * 
                     */
                    bool ActivationCountHasBeenSet() const;

                    /**
                     * 获取在线设备总数
                     * @return OnlineCount 在线设备总数
                     * 
                     */
                    int64_t GetOnlineCount() const;

                    /**
                     * 判断参数 OnlineCount 是否已赋值
                     * @return OnlineCount 是否已赋值
                     * 
                     */
                    bool OnlineCountHasBeenSet() const;

                    /**
                     * 获取前一天激活设备数
                     * @return ActivationBeforeDay 前一天激活设备数
                     * 
                     */
                    int64_t GetActivationBeforeDay() const;

                    /**
                     * 判断参数 ActivationBeforeDay 是否已赋值
                     * @return ActivationBeforeDay 是否已赋值
                     * 
                     */
                    bool ActivationBeforeDayHasBeenSet() const;

                    /**
                     * 获取前一天活跃设备数
                     * @return ActiveBeforeDay 前一天活跃设备数
                     * 
                     */
                    int64_t GetActiveBeforeDay() const;

                    /**
                     * 判断参数 ActiveBeforeDay 是否已赋值
                     * @return ActiveBeforeDay 是否已赋值
                     * 
                     */
                    bool ActiveBeforeDayHasBeenSet() const;

                    /**
                     * 获取前一周激活设备数
                     * @return ActivationWeekDayCount 前一周激活设备数
                     * 
                     */
                    int64_t GetActivationWeekDayCount() const;

                    /**
                     * 判断参数 ActivationWeekDayCount 是否已赋值
                     * @return ActivationWeekDayCount 是否已赋值
                     * 
                     */
                    bool ActivationWeekDayCountHasBeenSet() const;

                    /**
                     * 获取前一周活跃设备数
                     * @return ActiveWeekDayCount 前一周活跃设备数
                     * 
                     */
                    int64_t GetActiveWeekDayCount() const;

                    /**
                     * 判断参数 ActiveWeekDayCount 是否已赋值
                     * @return ActiveWeekDayCount 是否已赋值
                     * 
                     */
                    bool ActiveWeekDayCountHasBeenSet() const;

                    /**
                     * 获取上一周激活设备数
                     * @return ActivationBeforeWeekDayCount 上一周激活设备数
                     * 
                     */
                    int64_t GetActivationBeforeWeekDayCount() const;

                    /**
                     * 判断参数 ActivationBeforeWeekDayCount 是否已赋值
                     * @return ActivationBeforeWeekDayCount 是否已赋值
                     * 
                     */
                    bool ActivationBeforeWeekDayCountHasBeenSet() const;

                    /**
                     * 获取上一周活跃设备数
                     * @return ActiveBeforeWeekDayCount 上一周活跃设备数
                     * 
                     */
                    int64_t GetActiveBeforeWeekDayCount() const;

                    /**
                     * 判断参数 ActiveBeforeWeekDayCount 是否已赋值
                     * @return ActiveBeforeWeekDayCount 是否已赋值
                     * 
                     */
                    bool ActiveBeforeWeekDayCountHasBeenSet() const;

                private:

                    /**
                     * 激活设备总数
                     */
                    int64_t m_activationCount;
                    bool m_activationCountHasBeenSet;

                    /**
                     * 在线设备总数
                     */
                    int64_t m_onlineCount;
                    bool m_onlineCountHasBeenSet;

                    /**
                     * 前一天激活设备数
                     */
                    int64_t m_activationBeforeDay;
                    bool m_activationBeforeDayHasBeenSet;

                    /**
                     * 前一天活跃设备数
                     */
                    int64_t m_activeBeforeDay;
                    bool m_activeBeforeDayHasBeenSet;

                    /**
                     * 前一周激活设备数
                     */
                    int64_t m_activationWeekDayCount;
                    bool m_activationWeekDayCountHasBeenSet;

                    /**
                     * 前一周活跃设备数
                     */
                    int64_t m_activeWeekDayCount;
                    bool m_activeWeekDayCountHasBeenSet;

                    /**
                     * 上一周激活设备数
                     */
                    int64_t m_activationBeforeWeekDayCount;
                    bool m_activationBeforeWeekDayCountHasBeenSet;

                    /**
                     * 上一周活跃设备数
                     */
                    int64_t m_activeBeforeWeekDayCount;
                    bool m_activeBeforeWeekDayCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICESUMSTATISTICSRESPONSE_H_
