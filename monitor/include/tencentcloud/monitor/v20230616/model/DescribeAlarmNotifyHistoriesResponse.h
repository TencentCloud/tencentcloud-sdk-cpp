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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/AlarmNotifyHistory.h>
#include <tencentcloud/monitor/v20230616/model/PageByNoResult.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotifyHistories返回参数结构体
                */
                class DescribeAlarmNotifyHistoriesResponse : public AbstractModel
                {
                public:
                    DescribeAlarmNotifyHistoriesResponse();
                    ~DescribeAlarmNotifyHistoriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警历史
                     * @return AlarmNotifyHistoryList 告警历史
                     * 
                     */
                    std::vector<AlarmNotifyHistory> GetAlarmNotifyHistoryList() const;

                    /**
                     * 判断参数 AlarmNotifyHistoryList 是否已赋值
                     * @return AlarmNotifyHistoryList 是否已赋值
                     * 
                     */
                    bool AlarmNotifyHistoryListHasBeenSet() const;

                    /**
                     * 获取分页情况
                     * @return PageResult 分页情况
                     * 
                     */
                    PageByNoResult GetPageResult() const;

                    /**
                     * 判断参数 PageResult 是否已赋值
                     * @return PageResult 是否已赋值
                     * 
                     */
                    bool PageResultHasBeenSet() const;

                private:

                    /**
                     * 告警历史
                     */
                    std::vector<AlarmNotifyHistory> m_alarmNotifyHistoryList;
                    bool m_alarmNotifyHistoryListHasBeenSet;

                    /**
                     * 分页情况
                     */
                    PageByNoResult m_pageResult;
                    bool m_pageResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESRESPONSE_H_
