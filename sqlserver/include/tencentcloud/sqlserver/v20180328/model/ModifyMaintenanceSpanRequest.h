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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMAINTENANCESPANREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMAINTENANCESPANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyMaintenanceSpan请求参数结构体
                */
                class ModifyMaintenanceSpanRequest : public AbstractModel
                {
                public:
                    ModifyMaintenanceSpanRequest();
                    ~ModifyMaintenanceSpanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-k8voqdlz
                     * @return InstanceId 实例ID，形如mssql-k8voqdlz
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-k8voqdlz
                     * @param _instanceId 实例ID，形如mssql-k8voqdlz
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取以周为单位，表示允许周几维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日，本参数不填，则不修改此值。
                     * @return Weekly 以周为单位，表示允许周几维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日，本参数不填，则不修改此值。
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 设置以周为单位，表示允许周几维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日，本参数不填，则不修改此值。
                     * @param _weekly 以周为单位，表示允许周几维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日，本参数不填，则不修改此值。
                     * 
                     */
                    void SetWeekly(const std::vector<int64_t>& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                    /**
                     * 获取每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始，本参数不填，则不修改此值。
                     * @return StartTime 每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始，本参数不填，则不修改此值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始，本参数不填，则不修改此值。
                     * @param _startTime 每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始，本参数不填，则不修改此值。
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
                     * 获取每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时，本参数不填，则不修改此值。
                     * @return Span 每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时，本参数不填，则不修改此值。
                     * 
                     */
                    uint64_t GetSpan() const;

                    /**
                     * 设置每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时，本参数不填，则不修改此值。
                     * @param _span 每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时，本参数不填，则不修改此值。
                     * 
                     */
                    void SetSpan(const uint64_t& _span);

                    /**
                     * 判断参数 Span 是否已赋值
                     * @return Span 是否已赋值
                     * 
                     */
                    bool SpanHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-k8voqdlz
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 以周为单位，表示允许周几维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日，本参数不填，则不修改此值。
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * 每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始，本参数不填，则不修改此值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时，本参数不填，则不修改此值。
                     */
                    uint64_t m_span;
                    bool m_spanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMAINTENANCESPANREQUEST_H_
