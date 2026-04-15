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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEWORKLOADGROUPRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEWORKLOADGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/WorkloadGroupConfig.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeWorkloadGroup返回参数结构体
                */
                class DescribeWorkloadGroupResponse : public AbstractModel
                {
                public:
                    DescribeWorkloadGroupResponse();
                    ~DescribeWorkloadGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源组信息</p>
                     * @return WorkloadGroups <p>资源组信息</p>
                     * 
                     */
                    std::vector<WorkloadGroupConfig> GetWorkloadGroups() const;

                    /**
                     * 判断参数 WorkloadGroups 是否已赋值
                     * @return WorkloadGroups 是否已赋值
                     * 
                     */
                    bool WorkloadGroupsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启资源组：开启-open、关闭-close</p>
                     * @return Status <p>是否开启资源组：开启-open、关闭-close</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>是否开启监控，0：未开启，1：开启</p>
                     * @return MonitorStatus <p>是否开启监控，0：未开启，1：开启</p>
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                private:

                    /**
                     * <p>资源组信息</p>
                     */
                    std::vector<WorkloadGroupConfig> m_workloadGroups;
                    bool m_workloadGroupsHasBeenSet;

                    /**
                     * <p>是否开启资源组：开启-open、关闭-close</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * <p>是否开启监控，0：未开启，1：开启</p>
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEWORKLOADGROUPRESPONSE_H_
