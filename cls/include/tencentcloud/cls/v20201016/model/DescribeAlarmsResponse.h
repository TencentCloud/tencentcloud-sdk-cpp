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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAlarms返回参数结构体
                */
                class DescribeAlarmsResponse : public AbstractModel
                {
                public:
                    DescribeAlarmsResponse();
                    ~DescribeAlarmsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警策略列表。
                     * @return Alarms 告警策略列表。
                     * 
                     */
                    std::vector<AlarmInfo> GetAlarms() const;

                    /**
                     * 判断参数 Alarms 是否已赋值
                     * @return Alarms 是否已赋值
                     * 
                     */
                    bool AlarmsHasBeenSet() const;

                    /**
                     * 获取符合查询条件的告警策略数目。
                     * @return TotalCount 符合查询条件的告警策略数目。
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
                     * 告警策略列表。
                     */
                    std::vector<AlarmInfo> m_alarms;
                    bool m_alarmsHasBeenSet;

                    /**
                     * 符合查询条件的告警策略数目。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSRESPONSE_H_
