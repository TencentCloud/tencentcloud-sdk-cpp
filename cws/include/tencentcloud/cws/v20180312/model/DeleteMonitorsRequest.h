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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DELETEMONITORSREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DELETEMONITORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DeleteMonitors请求参数结构体
                */
                class DeleteMonitorsRequest : public AbstractModel
                {
                public:
                    DeleteMonitorsRequest();
                    ~DeleteMonitorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监控任务ID列表
                     * @return MonitorIds 监控任务ID列表
                     * 
                     */
                    std::vector<uint64_t> GetMonitorIds() const;

                    /**
                     * 设置监控任务ID列表
                     * @param _monitorIds 监控任务ID列表
                     * 
                     */
                    void SetMonitorIds(const std::vector<uint64_t>& _monitorIds);

                    /**
                     * 判断参数 MonitorIds 是否已赋值
                     * @return MonitorIds 是否已赋值
                     * 
                     */
                    bool MonitorIdsHasBeenSet() const;

                private:

                    /**
                     * 监控任务ID列表
                     */
                    std::vector<uint64_t> m_monitorIds;
                    bool m_monitorIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DELETEMONITORSREQUEST_H_
