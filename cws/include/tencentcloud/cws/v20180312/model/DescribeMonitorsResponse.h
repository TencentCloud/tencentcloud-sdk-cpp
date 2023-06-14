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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEMONITORSRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEMONITORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cws/v20180312/model/MonitorsDetail.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DescribeMonitors返回参数结构体
                */
                class DescribeMonitorsResponse : public AbstractModel
                {
                public:
                    DescribeMonitorsResponse();
                    ~DescribeMonitorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监控任务列表。
                     * @return Monitors 监控任务列表。
                     * 
                     */
                    std::vector<MonitorsDetail> GetMonitors() const;

                    /**
                     * 判断参数 Monitors 是否已赋值
                     * @return Monitors 是否已赋值
                     * 
                     */
                    bool MonitorsHasBeenSet() const;

                    /**
                     * 获取监控任务数量。
                     * @return TotalCount 监控任务数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 监控任务列表。
                     */
                    std::vector<MonitorsDetail> m_monitors;
                    bool m_monitorsHasBeenSet;

                    /**
                     * 监控任务数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEMONITORSRESPONSE_H_
