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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOGLIST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOGLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinWorkLog.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * AI工作台SRE数字分身工作日志列表
                */
                class AIWorkbenchSREDigitalTwinWorkLogList : public AbstractModel
                {
                public:
                    AIWorkbenchSREDigitalTwinWorkLogList();
                    ~AIWorkbenchSREDigitalTwinWorkLogList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作日志列表
                     * @return WorkLogs 工作日志列表
                     * 
                     */
                    std::vector<AIWorkbenchSREDigitalTwinWorkLog> GetWorkLogs() const;

                    /**
                     * 设置工作日志列表
                     * @param _workLogs 工作日志列表
                     * 
                     */
                    void SetWorkLogs(const std::vector<AIWorkbenchSREDigitalTwinWorkLog>& _workLogs);

                    /**
                     * 判断参数 WorkLogs 是否已赋值
                     * @return WorkLogs 是否已赋值
                     * 
                     */
                    bool WorkLogsHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数
                     * @param _total 总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 工作日志列表
                     */
                    std::vector<AIWorkbenchSREDigitalTwinWorkLog> m_workLogs;
                    bool m_workLogsHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOGLIST_H_
