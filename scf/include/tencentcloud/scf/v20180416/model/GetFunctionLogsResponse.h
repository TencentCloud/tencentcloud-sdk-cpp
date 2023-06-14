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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/FunctionLog.h>
#include <tencentcloud/scf/v20180416/model/LogSearchContext.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetFunctionLogs返回参数结构体
                */
                class GetFunctionLogsResponse : public AbstractModel
                {
                public:
                    GetFunctionLogsResponse();
                    ~GetFunctionLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取函数日志的总数
                     * @return TotalCount 函数日志的总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取函数日志信息
                     * @return Data 函数日志信息
                     * 
                     */
                    std::vector<FunctionLog> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取该字段已下线
                     * @return SearchContext 该字段已下线
                     * 
                     */
                    LogSearchContext GetSearchContext() const;

                    /**
                     * 判断参数 SearchContext 是否已赋值
                     * @return SearchContext 是否已赋值
                     * 
                     */
                    bool SearchContextHasBeenSet() const;

                private:

                    /**
                     * 函数日志的总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 函数日志信息
                     */
                    std::vector<FunctionLog> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 该字段已下线
                     */
                    LogSearchContext m_searchContext;
                    bool m_searchContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSRESPONSE_H_
