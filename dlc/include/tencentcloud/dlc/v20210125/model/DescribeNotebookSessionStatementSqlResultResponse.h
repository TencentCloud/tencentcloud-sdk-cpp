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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTRESPONSE_H_

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
                * DescribeNotebookSessionStatementSqlResult返回参数结构体
                */
                class DescribeNotebookSessionStatementSqlResultResponse : public AbstractModel
                {
                public:
                    DescribeNotebookSessionStatementSqlResultResponse();
                    ~DescribeNotebookSessionStatementSqlResultResponse() = default;
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

                    /**
                     * 获取存储结果地址
                     * @return OutputPath 存储结果地址
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取引擎计算耗时
                     * @return UseTime 引擎计算耗时
                     * 
                     */
                    int64_t GetUseTime() const;

                    /**
                     * 判断参数 UseTime 是否已赋值
                     * @return UseTime 是否已赋值
                     * 
                     */
                    bool UseTimeHasBeenSet() const;

                    /**
                     * 获取结果条数
                     * @return AffectRows 结果条数
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取数据扫描量
                     * @return DataAmount 数据扫描量
                     * 
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 判断参数 DataAmount 是否已赋值
                     * @return DataAmount 是否已赋值
                     * 
                     */
                    bool DataAmountHasBeenSet() const;

                    /**
                     * 获取spark ui地址
                     * @return UiUrl spark ui地址
                     * 
                     */
                    std::string GetUiUrl() const;

                    /**
                     * 判断参数 UiUrl 是否已赋值
                     * @return UiUrl 是否已赋值
                     * 
                     */
                    bool UiUrlHasBeenSet() const;

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

                    /**
                     * 存储结果地址
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * 引擎计算耗时
                     */
                    int64_t m_useTime;
                    bool m_useTimeHasBeenSet;

                    /**
                     * 结果条数
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * 数据扫描量
                     */
                    int64_t m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * spark ui地址
                     */
                    std::string m_uiUrl;
                    bool m_uiUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTRESPONSE_H_
