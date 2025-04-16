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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYRESULTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Column.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryResult返回参数结构体
                */
                class QueryResultResponse : public AbstractModel
                {
                public:
                    QueryResultResponse();
                    ~QueryResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取结果数据
                     * @return ResultSet 结果数据
                     * 
                     */
                    std::string GetResultSet() const;

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取schema
                     * @return ResultSchema schema
                     * 
                     */
                    std::vector<Column> GetResultSchema() const;

                    /**
                     * 判断参数 ResultSchema 是否已赋值
                     * @return ResultSchema 是否已赋值
                     * 
                     */
                    bool ResultSchemaHasBeenSet() const;

                    /**
                     * 获取分页信息
                     * @return NextToken 分页信息
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 结果数据
                     */
                    std::string m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * schema
                     */
                    std::vector<Column> m_resultSchema;
                    bool m_resultSchemaHasBeenSet;

                    /**
                     * 分页信息
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYRESULTRESPONSE_H_
