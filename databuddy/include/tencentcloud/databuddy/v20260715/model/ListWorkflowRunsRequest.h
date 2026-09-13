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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListWorkflowRuns请求参数结构体
                */
                class ListWorkflowRunsRequest : public AbstractModel
                {
                public:
                    ListWorkflowRunsRequest();
                    ~ListWorkflowRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @return WorkspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @param _workspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>分页页码，从 1 开始。非必填，默认 1</p>
                     * @return PageNumber <p>分页页码，从 1 开始。非必填，默认 1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>分页页码，从 1 开始。非必填，默认 1</p>
                     * @param _pageNumber <p>分页页码，从 1 开始。非必填，默认 1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * @return PageSize <p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * @param _pageSize <p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>工作流ID，精确匹配。非必填，单值</p>
                     * @return WorkflowId <p>工作流ID，精确匹配。非必填，单值</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID，精确匹配。非必填，单值</p>
                     * @param _workflowId <p>工作流ID，精确匹配。非必填，单值</p>
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * @return WorkflowNameKeyword <p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * 
                     */
                    std::string GetWorkflowNameKeyword() const;

                    /**
                     * 设置<p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * @param _workflowNameKeyword <p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     * 
                     */
                    void SetWorkflowNameKeyword(const std::string& _workflowNameKeyword);

                    /**
                     * 判断参数 WorkflowNameKeyword 是否已赋值
                     * @return WorkflowNameKeyword 是否已赋值
                     * 
                     */
                    bool WorkflowNameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>运行创建时间下界，范围匹配（CreateTime &gt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * @return CreateStartTime <p>运行创建时间下界，范围匹配（CreateTime &gt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * 
                     */
                    std::string GetCreateStartTime() const;

                    /**
                     * 设置<p>运行创建时间下界，范围匹配（CreateTime &gt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * @param _createStartTime <p>运行创建时间下界，范围匹配（CreateTime &gt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * 
                     */
                    void SetCreateStartTime(const std::string& _createStartTime);

                    /**
                     * 判断参数 CreateStartTime 是否已赋值
                     * @return CreateStartTime 是否已赋值
                     * 
                     */
                    bool CreateStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行创建时间上界，范围匹配（CreateTime &lt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * @return CreateEndTime <p>运行创建时间上界，范围匹配（CreateTime &lt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * 
                     */
                    std::string GetCreateEndTime() const;

                    /**
                     * 设置<p>运行创建时间上界，范围匹配（CreateTime &lt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * @param _createEndTime <p>运行创建时间上界，范围匹配（CreateTime &lt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     * 
                     */
                    void SetCreateEndTime(const std::string& _createEndTime);

                    /**
                     * 判断参数 CreateEndTime 是否已赋值
                     * @return CreateEndTime 是否已赋值
                     * 
                     */
                    bool CreateEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行状态，精确匹配。非必填，多选（多个值之间为 OR 关系）。</p><p>可填 SUCCESS / FAILED 等，具体参考本接口出参 WorkflowRun.RunState 字段返回值。</p>
                     * @return RunStates <p>运行状态，精确匹配。非必填，多选（多个值之间为 OR 关系）。</p><p>可填 SUCCESS / FAILED 等，具体参考本接口出参 WorkflowRun.RunState 字段返回值。</p>
                     * 
                     */
                    std::vector<std::string> GetRunStates() const;

                    /**
                     * 设置<p>运行状态，精确匹配。非必填，多选（多个值之间为 OR 关系）。</p><p>可填 SUCCESS / FAILED 等，具体参考本接口出参 WorkflowRun.RunState 字段返回值。</p>
                     * @param _runStates <p>运行状态，精确匹配。非必填，多选（多个值之间为 OR 关系）。</p><p>可填 SUCCESS / FAILED 等，具体参考本接口出参 WorkflowRun.RunState 字段返回值。</p>
                     * 
                     */
                    void SetRunStates(const std::vector<std::string>& _runStates);

                    /**
                     * 判断参数 RunStates 是否已赋值
                     * @return RunStates 是否已赋值
                     * 
                     */
                    bool RunStatesHasBeenSet() const;

                    /**
                     * 获取<p>错误码，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return ErrorCodeStrings <p>错误码，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetErrorCodeStrings() const;

                    /**
                     * 设置<p>错误码，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _errorCodeStrings <p>错误码，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetErrorCodeStrings(const std::vector<std::string>& _errorCodeStrings);

                    /**
                     * 判断参数 ErrorCodeStrings 是否已赋值
                     * @return ErrorCodeStrings 是否已赋值
                     * 
                     */
                    bool ErrorCodeStringsHasBeenSet() const;

                    /**
                     * 获取<p>运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return RunUserUins <p>运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetRunUserUins() const;

                    /**
                     * 设置<p>运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _runUserUins <p>运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetRunUserUins(const std::vector<std::string>& _runUserUins);

                    /**
                     * 判断参数 RunUserUins 是否已赋值
                     * @return RunUserUins 是否已赋值
                     * 
                     */
                    bool RunUserUinsHasBeenSet() const;

                    /**
                     * 获取<p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return LabelKeyIds <p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetLabelKeyIds() const;

                    /**
                     * 设置<p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _labelKeyIds <p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetLabelKeyIds(const std::vector<std::string>& _labelKeyIds);

                    /**
                     * 判断参数 LabelKeyIds 是否已赋值
                     * @return LabelKeyIds 是否已赋值
                     * 
                     */
                    bool LabelKeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @return LabelValueIds <p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    std::vector<std::string> GetLabelValueIds() const;

                    /**
                     * 设置<p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * @param _labelValueIds <p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     * 
                     */
                    void SetLabelValueIds(const std::vector<std::string>& _labelValueIds);

                    /**
                     * 判断参数 LabelValueIds 是否已赋值
                     * @return LabelValueIds 是否已赋值
                     * 
                     */
                    bool LabelValueIdsHasBeenSet() const;

                    /**
                     * 获取<p>排序条件，多个之间按数组顺序表示优先级。非必填，默认按 CreateTime Desc。<br>可排序字段白名单：CreateTime、EndTime、RunCostTime</p>
                     * @return OrderBys <p>排序条件，多个之间按数组顺序表示优先级。非必填，默认按 CreateTime Desc。<br>可排序字段白名单：CreateTime、EndTime、RunCostTime</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>排序条件，多个之间按数组顺序表示优先级。非必填，默认按 CreateTime Desc。<br>可排序字段白名单：CreateTime、EndTime、RunCostTime</p>
                     * @param _orderBys <p>排序条件，多个之间按数组顺序表示优先级。非必填，默认按 CreateTime Desc。<br>可排序字段白名单：CreateTime、EndTime、RunCostTime</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>分页页码，从 1 开始。非必填，默认 1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小。非必填，默认 10，取值范围 [10, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>工作流ID，精确匹配。非必填，单值</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流名称关键字，对 WorkflowName 做模糊匹配。非必填，单值</p>
                     */
                    std::string m_workflowNameKeyword;
                    bool m_workflowNameKeywordHasBeenSet;

                    /**
                     * <p>运行创建时间下界，范围匹配（CreateTime &gt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     */
                    std::string m_createStartTime;
                    bool m_createStartTimeHasBeenSet;

                    /**
                     * <p>运行创建时间上界，范围匹配（CreateTime &lt;= 本值），单位：毫秒时间戳。<br>非必填，单值，对应出参 WorkflowRun.CreateTime</p>
                     */
                    std::string m_createEndTime;
                    bool m_createEndTimeHasBeenSet;

                    /**
                     * <p>运行状态，精确匹配。非必填，多选（多个值之间为 OR 关系）。</p><p>可填 SUCCESS / FAILED 等，具体参考本接口出参 WorkflowRun.RunState 字段返回值。</p>
                     */
                    std::vector<std::string> m_runStates;
                    bool m_runStatesHasBeenSet;

                    /**
                     * <p>错误码，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_errorCodeStrings;
                    bool m_errorCodeStringsHasBeenSet;

                    /**
                     * <p>运行人UIN，精确匹配。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_runUserUins;
                    bool m_runUserUinsHasBeenSet;

                    /**
                     * <p>标签名称ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_labelKeyIds;
                    bool m_labelKeyIdsHasBeenSet;

                    /**
                     * <p>标签值ID，精确匹配，可通过标签相关接口获取。非必填，多选（多个值之间为 OR 关系）</p>
                     */
                    std::vector<std::string> m_labelValueIds;
                    bool m_labelValueIdsHasBeenSet;

                    /**
                     * <p>排序条件，多个之间按数组顺序表示优先级。非必填，默认按 CreateTime Desc。<br>可排序字段白名单：CreateTime、EndTime、RunCostTime</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSREQUEST_H_
