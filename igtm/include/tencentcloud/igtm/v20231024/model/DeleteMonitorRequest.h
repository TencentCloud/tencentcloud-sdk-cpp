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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DELETEMONITORREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DELETEMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DeleteMonitor请求参数结构体
                */
                class DeleteMonitorRequest : public AbstractModel
                {
                public:
                    DeleteMonitorRequest();
                    ~DeleteMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监控器id
                     * @return MonitorId 监控器id
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置监控器id
                     * @param _monitorId 监控器id
                     * 
                     */
                    void SetMonitorId(const uint64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                private:

                    /**
                     * 监控器id
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DELETEMONITORREQUEST_H_
