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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MCPTASKRESULTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MCPTASKRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * MCP 任务结果返回
                */
                class MCPTaskResultInfo : public AbstractModel
                {
                public:
                    MCPTaskResultInfo();
                    ~MCPTaskResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return State <p>状态</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _state <p>状态</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>结果集 Schema</p>
                     * @return ResultSchema <p>结果集 Schema</p>
                     * 
                     */
                    std::vector<Column> GetResultSchema() const;

                    /**
                     * 设置<p>结果集 Schema</p>
                     * @param _resultSchema <p>结果集 Schema</p>
                     * 
                     */
                    void SetResultSchema(const std::vector<Column>& _resultSchema);

                    /**
                     * 判断参数 ResultSchema 是否已赋值
                     * @return ResultSchema 是否已赋值
                     * 
                     */
                    bool ResultSchemaHasBeenSet() const;

                    /**
                     * 获取<p>结果集</p>
                     * @return ResultSet <p>结果集</p>
                     * 
                     */
                    std::string GetResultSet() const;

                    /**
                     * 设置<p>结果集</p>
                     * @param _resultSet <p>结果集</p>
                     * 
                     */
                    void SetResultSet(const std::string& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取<p>是否还有其他结果</p>
                     * @return NextToken <p>是否还有其他结果</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>是否还有其他结果</p>
                     * @param _nextToken <p>是否还有其他结果</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>影响行数</p>
                     * @return RowAffectInfo <p>影响行数</p>
                     * 
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置<p>影响行数</p>
                     * @param _rowAffectInfo <p>影响行数</p>
                     * 
                     */
                    void SetRowAffectInfo(const std::string& _rowAffectInfo);

                    /**
                     * 判断参数 RowAffectInfo 是否已赋值
                     * @return RowAffectInfo 是否已赋值
                     * 
                     */
                    bool RowAffectInfoHasBeenSet() const;

                    /**
                     * 获取<p>输出信息</p>
                     * @return OutputMessage <p>输出信息</p>
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置<p>输出信息</p>
                     * @param _outputMessage <p>输出信息</p>
                     * 
                     */
                    void SetOutputMessage(const std::string& _outputMessage);

                    /**
                     * 判断参数 OutputMessage 是否已赋值
                     * @return OutputMessage 是否已赋值
                     * 
                     */
                    bool OutputMessageHasBeenSet() const;

                    /**
                     * 获取<p>展示 format</p>
                     * @return DisplayFormat <p>展示 format</p>
                     * 
                     */
                    std::string GetDisplayFormat() const;

                    /**
                     * 设置<p>展示 format</p>
                     * @param _displayFormat <p>展示 format</p>
                     * 
                     */
                    void SetDisplayFormat(const std::string& _displayFormat);

                    /**
                     * 判断参数 DisplayFormat 是否已赋值
                     * @return DisplayFormat 是否已赋值
                     * 
                     */
                    bool DisplayFormatHasBeenSet() const;

                    /**
                     * 获取<p>能否下载</p>
                     * @return CanDownload <p>能否下载</p>
                     * 
                     */
                    bool GetCanDownload() const;

                    /**
                     * 设置<p>能否下载</p>
                     * @param _canDownload <p>能否下载</p>
                     * 
                     */
                    void SetCanDownload(const bool& _canDownload);

                    /**
                     * 判断参数 CanDownload 是否已赋值
                     * @return CanDownload 是否已赋值
                     * 
                     */
                    bool CanDownloadHasBeenSet() const;

                    /**
                     * 获取<p>结果花费时间</p><p>单位：毫秒</p>
                     * @return QueryResultTime <p>结果花费时间</p><p>单位：毫秒</p>
                     * 
                     */
                    double GetQueryResultTime() const;

                    /**
                     * 设置<p>结果花费时间</p><p>单位：毫秒</p>
                     * @param _queryResultTime <p>结果花费时间</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetQueryResultTime(const double& _queryResultTime);

                    /**
                     * 判断参数 QueryResultTime 是否已赋值
                     * @return QueryResultTime 是否已赋值
                     * 
                     */
                    bool QueryResultTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否超大</p>
                     * @return IsResultOversize <p>是否超大</p>
                     * 
                     */
                    bool GetIsResultOversize() const;

                    /**
                     * 设置<p>是否超大</p>
                     * @param _isResultOversize <p>是否超大</p>
                     * 
                     */
                    void SetIsResultOversize(const bool& _isResultOversize);

                    /**
                     * 判断参数 IsResultOversize 是否已赋值
                     * @return IsResultOversize 是否已赋值
                     * 
                     */
                    bool IsResultOversizeHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>结果集 Schema</p>
                     */
                    std::vector<Column> m_resultSchema;
                    bool m_resultSchemaHasBeenSet;

                    /**
                     * <p>结果集</p>
                     */
                    std::string m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * <p>是否还有其他结果</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>影响行数</p>
                     */
                    std::string m_rowAffectInfo;
                    bool m_rowAffectInfoHasBeenSet;

                    /**
                     * <p>输出信息</p>
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * <p>展示 format</p>
                     */
                    std::string m_displayFormat;
                    bool m_displayFormatHasBeenSet;

                    /**
                     * <p>能否下载</p>
                     */
                    bool m_canDownload;
                    bool m_canDownloadHasBeenSet;

                    /**
                     * <p>结果花费时间</p><p>单位：毫秒</p>
                     */
                    double m_queryResultTime;
                    bool m_queryResultTimeHasBeenSet;

                    /**
                     * <p>是否超大</p>
                     */
                    bool m_isResultOversize;
                    bool m_isResultOversizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MCPTASKRESULTINFO_H_
