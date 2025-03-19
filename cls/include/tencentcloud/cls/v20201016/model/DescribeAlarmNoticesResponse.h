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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmNotice.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotices返回参数结构体
                */
                class DescribeAlarmNoticesResponse : public AbstractModel
                {
                public:
                    DescribeAlarmNoticesResponse();
                    ~DescribeAlarmNoticesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警通知模板列表。
                     * @return AlarmNotices 告警通知模板列表。
                     * 
                     */
                    std::vector<AlarmNotice> GetAlarmNotices() const;

                    /**
                     * 判断参数 AlarmNotices 是否已赋值
                     * @return AlarmNotices 是否已赋值
                     * 
                     */
                    bool AlarmNoticesHasBeenSet() const;

                    /**
                     * 获取符合条件的告警通知模板总数。
                     * @return TotalCount 符合条件的告警通知模板总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板列表。
                     */
                    std::vector<AlarmNotice> m_alarmNotices;
                    bool m_alarmNoticesHasBeenSet;

                    /**
                     * 符合条件的告警通知模板总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESRESPONSE_H_
