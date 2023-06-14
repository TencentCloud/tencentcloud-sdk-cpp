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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_QUERYLOGSRESPONSE_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_QUERYLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tia/v20180226/model/Log.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * QueryLogs返回参数结构体
                */
                class QueryLogsResponse : public AbstractModel
                {
                public:
                    QueryLogsResponse();
                    ~QueryLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志查询上下文，用于加载更多日志
                     * @return Context 日志查询上下文，用于加载更多日志
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取日志内容列表
                     * @return Logs 日志内容列表
                     * 
                     */
                    std::vector<Log> GetLogs() const;

                    /**
                     * 判断参数 Logs 是否已赋值
                     * @return Logs 是否已赋值
                     * 
                     */
                    bool LogsHasBeenSet() const;

                    /**
                     * 获取是否已经返回所有符合条件的日志
                     * @return Listover 是否已经返回所有符合条件的日志
                     * 
                     */
                    bool GetListover() const;

                    /**
                     * 判断参数 Listover 是否已赋值
                     * @return Listover 是否已赋值
                     * 
                     */
                    bool ListoverHasBeenSet() const;

                private:

                    /**
                     * 日志查询上下文，用于加载更多日志
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志内容列表
                     */
                    std::vector<Log> m_logs;
                    bool m_logsHasBeenSet;

                    /**
                     * 是否已经返回所有符合条件的日志
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_QUERYLOGSRESPONSE_H_
