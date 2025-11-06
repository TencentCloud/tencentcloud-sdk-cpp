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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_QUERYIPTRACELOGRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_QUERYIPTRACELOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/IpTraceLogEntry.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * QueryIpTraceLog返回参数结构体
                */
                class QueryIpTraceLogResponse : public AbstractModel
                {
                public:
                    QueryIpTraceLogResponse();
                    ~QueryIpTraceLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取IP溯源日志列表
                     * @return IpTraceLogList IP溯源日志列表
                     * 
                     */
                    std::vector<IpTraceLogEntry> GetIpTraceLogList() const;

                    /**
                     * 判断参数 IpTraceLogList 是否已赋值
                     * @return IpTraceLogList 是否已赋值
                     * 
                     */
                    bool IpTraceLogListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * IP溯源日志列表
                     */
                    std::vector<IpTraceLogEntry> m_ipTraceLogList;
                    bool m_ipTraceLogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_QUERYIPTRACELOGRESPONSE_H_
