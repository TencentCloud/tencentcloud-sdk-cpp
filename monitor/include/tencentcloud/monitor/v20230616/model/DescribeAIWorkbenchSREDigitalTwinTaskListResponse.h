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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINTASKLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINTASKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinTaskList.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchSREDigitalTwinTaskList返回参数结构体
                */
                class DescribeAIWorkbenchSREDigitalTwinTaskListResponse : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchSREDigitalTwinTaskListResponse();
                    ~DescribeAIWorkbenchSREDigitalTwinTaskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Json序列化路径
                     * @return JSONStrPaths Json序列化路径
                     * 
                     */
                    std::vector<std::string> GetJSONStrPaths() const;

                    /**
                     * 判断参数 JSONStrPaths 是否已赋值
                     * @return JSONStrPaths 是否已赋值
                     * 
                     */
                    bool JSONStrPathsHasBeenSet() const;

                    /**
                     * 获取数字分身任务列表
                     * @return Data 数字分身任务列表
                     * 
                     */
                    AIWorkbenchSREDigitalTwinTaskList GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Json序列化路径
                     */
                    std::vector<std::string> m_jSONStrPaths;
                    bool m_jSONStrPathsHasBeenSet;

                    /**
                     * 数字分身任务列表
                     */
                    AIWorkbenchSREDigitalTwinTaskList m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINTASKLISTRESPONSE_H_
