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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINWORKLOGDETAILREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINWORKLOGDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchSREDigitalTwinWorkLogDetail请求参数结构体
                */
                class DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest();
                    ~DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作日志ID
                     * @return WorkLogID 工作日志ID
                     * 
                     */
                    int64_t GetWorkLogID() const;

                    /**
                     * 设置工作日志ID
                     * @param _workLogID 工作日志ID
                     * 
                     */
                    void SetWorkLogID(const int64_t& _workLogID);

                    /**
                     * 判断参数 WorkLogID 是否已赋值
                     * @return WorkLogID 是否已赋值
                     * 
                     */
                    bool WorkLogIDHasBeenSet() const;

                private:

                    /**
                     * 工作日志ID
                     */
                    int64_t m_workLogID;
                    bool m_workLogIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINWORKLOGDETAILREQUEST_H_
