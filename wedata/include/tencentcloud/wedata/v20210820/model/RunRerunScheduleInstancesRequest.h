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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNRERUNSCHEDULEINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNRERUNSCHEDULEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceApiOpsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ProjectBaseInfoOpsRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RunRerunScheduleInstances请求参数结构体
                */
                class RunRerunScheduleInstancesRequest : public AbstractModel
                {
                public:
                    RunRerunScheduleInstancesRequest();
                    ~RunRerunScheduleInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例列表
                     * @return Instances 实例列表
                     * 
                     */
                    std::vector<InstanceOpsDto> GetInstances() const;

                    /**
                     * 设置实例列表
                     * @param _instances 实例列表
                     * 
                     */
                    void SetInstances(const std::vector<InstanceOpsDto>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取检查父任务类型, true: 检查父任务; false: 不检查父任务 
                     * @return CheckFather 检查父任务类型, true: 检查父任务; false: 不检查父任务 
                     * 
                     */
                    bool GetCheckFather() const;

                    /**
                     * 设置检查父任务类型, true: 检查父任务; false: 不检查父任务 
                     * @param _checkFather 检查父任务类型, true: 检查父任务; false: 不检查父任务 
                     * 
                     */
                    void SetCheckFather(const bool& _checkFather);

                    /**
                     * 判断参数 CheckFather 是否已赋值
                     * @return CheckFather 是否已赋值
                     * 
                     */
                    bool CheckFatherHasBeenSet() const;

                    /**
                     * 获取重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子 
                     * @return RerunType 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子 
                     * 
                     */
                    std::string GetRerunType() const;

                    /**
                     * 设置重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子 
                     * @param _rerunType 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子 
                     * 
                     */
                    void SetRerunType(const std::string& _rerunType);

                    /**
                     * 判断参数 RerunType 是否已赋值
                     * @return RerunType 是否已赋值
                     * 
                     */
                    bool RerunTypeHasBeenSet() const;

                    /**
                     * 获取实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖 
                     * @return DependentWay 实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖 
                     * 
                     */
                    std::string GetDependentWay() const;

                    /**
                     * 设置实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖 
                     * @param _dependentWay 实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖 
                     * 
                     */
                    void SetDependentWay(const std::string& _dependentWay);

                    /**
                     * 判断参数 DependentWay 是否已赋值
                     * @return DependentWay 是否已赋值
                     * 
                     */
                    bool DependentWayHasBeenSet() const;

                    /**
                     * 获取重跑忽略事件监听与否 
                     * @return SkipEventListening 重跑忽略事件监听与否 
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置重跑忽略事件监听与否 
                     * @param _skipEventListening 重跑忽略事件监听与否 
                     * 
                     */
                    void SetSkipEventListening(const bool& _skipEventListening);

                    /**
                     * 判断参数 SkipEventListening 是否已赋值
                     * @return SkipEventListening 是否已赋值
                     * 
                     */
                    bool SkipEventListeningHasBeenSet() const;

                    /**
                     * 获取下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * @return SonInstanceType 下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * 
                     */
                    std::string GetSonInstanceType() const;

                    /**
                     * 设置下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * @param _sonInstanceType 下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * 
                     */
                    void SetSonInstanceType(const std::string& _sonInstanceType);

                    /**
                     * 判断参数 SonInstanceType 是否已赋值
                     * @return SonInstanceType 是否已赋值
                     * 
                     */
                    bool SonInstanceTypeHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return SearchCondition 查询条件
                     * 
                     */
                    InstanceApiOpsRequest GetSearchCondition() const;

                    /**
                     * 设置查询条件
                     * @param _searchCondition 查询条件
                     * 
                     */
                    void SetSearchCondition(const InstanceApiOpsRequest& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取访问类型
                     * @return OptType 访问类型
                     * 
                     */
                    std::string GetOptType() const;

                    /**
                     * 设置访问类型
                     * @param _optType 访问类型
                     * 
                     */
                    void SetOptType(const std::string& _optType);

                    /**
                     * 判断参数 OptType 是否已赋值
                     * @return OptType 是否已赋值
                     * 
                     */
                    bool OptTypeHasBeenSet() const;

                    /**
                     * 获取操作者名称
                     * @return OperatorName 操作者名称
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作者名称
                     * @param _operatorName 操作者名称
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取操作者id
                     * @return OperatorId 操作者id
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置操作者id
                     * @param _operatorId 操作者id
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目标志
                     * @return ProjectIdent 项目标志
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置项目标志
                     * @param _projectIdent 项目标志
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取索引页码
                     * @return PageIndex 索引页码
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置索引页码
                     * @param _pageIndex 索引页码
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取页面大小
                     * @return PageSize 页面大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页面大小
                     * @param _pageSize 页面大小
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
                     * 获取数据总数
                     * @return Count 数据总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置数据总数
                     * @param _count 数据总数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取基础请求信息
                     * @return RequestBaseInfo 基础请求信息
                     * 
                     */
                    ProjectBaseInfoOpsRequest GetRequestBaseInfo() const;

                    /**
                     * 设置基础请求信息
                     * @param _requestBaseInfo 基础请求信息
                     * 
                     */
                    void SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo);

                    /**
                     * 判断参数 RequestBaseInfo 是否已赋值
                     * @return RequestBaseInfo 是否已赋值
                     * 
                     */
                    bool RequestBaseInfoHasBeenSet() const;

                    /**
                     * 获取是否计算总数
                     * @return IsCount 是否计算总数
                     * 
                     */
                    bool GetIsCount() const;

                    /**
                     * 设置是否计算总数
                     * @param _isCount 是否计算总数
                     * 
                     */
                    void SetIsCount(const bool& _isCount);

                    /**
                     * 判断参数 IsCount 是否已赋值
                     * @return IsCount 是否已赋值
                     * 
                     */
                    bool IsCountHasBeenSet() const;

                    /**
                     * 获取是否异步模式
                     * @return AsyncMode 是否异步模式
                     * 
                     */
                    bool GetAsyncMode() const;

                    /**
                     * 设置是否异步模式
                     * @param _asyncMode 是否异步模式
                     * 
                     */
                    void SetAsyncMode(const bool& _asyncMode);

                    /**
                     * 判断参数 AsyncMode 是否已赋值
                     * @return AsyncMode 是否已赋值
                     * 
                     */
                    bool AsyncModeHasBeenSet() const;

                    /**
                     * 获取是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查）
                     * @return CheckParentType 是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查）
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查）
                     * @param _checkParentType 是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查）
                     * 
                     */
                    void SetCheckParentType(const std::string& _checkParentType);

                    /**
                     * 判断参数 CheckParentType 是否已赋值
                     * @return CheckParentType 是否已赋值
                     * 
                     */
                    bool CheckParentTypeHasBeenSet() const;

                    /**
                     * 获取任务原有自依赖配置 true（是）、false（否）
                     * @return SameSelfDependType 任务原有自依赖配置 true（是）、false（否）
                     * 
                     */
                    bool GetSameSelfDependType() const;

                    /**
                     * 设置任务原有自依赖配置 true（是）、false（否）
                     * @param _sameSelfDependType 任务原有自依赖配置 true（是）、false（否）
                     * 
                     */
                    void SetSameSelfDependType(const bool& _sameSelfDependType);

                    /**
                     * 判断参数 SameSelfDependType 是否已赋值
                     * @return SameSelfDependType 是否已赋值
                     * 
                     */
                    bool SameSelfDependTypeHasBeenSet() const;

                    /**
                     * 获取实例运行并发度
                     * @return ParallelNum 实例运行并发度
                     * 
                     */
                    int64_t GetParallelNum() const;

                    /**
                     * 设置实例运行并发度
                     * @param _parallelNum 实例运行并发度
                     * 
                     */
                    void SetParallelNum(const int64_t& _parallelNum);

                    /**
                     * 判断参数 ParallelNum 是否已赋值
                     * @return ParallelNum 是否已赋值
                     * 
                     */
                    bool ParallelNumHasBeenSet() const;

                    /**
                     * 获取任务原有自依赖配置 true（是）、false（否）
                     * @return SameSelfWorkflowDependType 任务原有自依赖配置 true（是）、false（否）
                     * 
                     */
                    bool GetSameSelfWorkflowDependType() const;

                    /**
                     * 设置任务原有自依赖配置 true（是）、false（否）
                     * @param _sameSelfWorkflowDependType 任务原有自依赖配置 true（是）、false（否）
                     * 
                     */
                    void SetSameSelfWorkflowDependType(const bool& _sameSelfWorkflowDependType);

                    /**
                     * 判断参数 SameSelfWorkflowDependType 是否已赋值
                     * @return SameSelfWorkflowDependType 是否已赋值
                     * 
                     */
                    bool SameSelfWorkflowDependTypeHasBeenSet() const;

                    /**
                     * 获取代表重新指定 的  是 或者 否  yes、 no
                     * @return SelfWorkflowDependency 代表重新指定 的  是 或者 否  yes、 no
                     * 
                     */
                    std::string GetSelfWorkflowDependency() const;

                    /**
                     * 设置代表重新指定 的  是 或者 否  yes、 no
                     * @param _selfWorkflowDependency 代表重新指定 的  是 或者 否  yes、 no
                     * 
                     */
                    void SetSelfWorkflowDependency(const std::string& _selfWorkflowDependency);

                    /**
                     * 判断参数 SelfWorkflowDependency 是否已赋值
                     * @return SelfWorkflowDependency 是否已赋值
                     * 
                     */
                    bool SelfWorkflowDependencyHasBeenSet() const;

                    /**
                     * 获取运行实例数据时间排序 0---正常  1--正序  2 – 逆序
                     * @return DataTimeOrder 运行实例数据时间排序 0---正常  1--正序  2 – 逆序
                     * 
                     */
                    int64_t GetDataTimeOrder() const;

                    /**
                     * 设置运行实例数据时间排序 0---正常  1--正序  2 – 逆序
                     * @param _dataTimeOrder 运行实例数据时间排序 0---正常  1--正序  2 – 逆序
                     * 
                     */
                    void SetDataTimeOrder(const int64_t& _dataTimeOrder);

                    /**
                     * 判断参数 DataTimeOrder 是否已赋值
                     * @return DataTimeOrder 是否已赋值
                     * 
                     */
                    bool DataTimeOrderHasBeenSet() const;

                    /**
                     * 获取重跑参数
                     * @return ReDoParams 重跑参数
                     * 
                     */
                    std::string GetReDoParams() const;

                    /**
                     * 设置重跑参数
                     * @param _reDoParams 重跑参数
                     * 
                     */
                    void SetReDoParams(const std::string& _reDoParams);

                    /**
                     * 判断参数 ReDoParams 是否已赋值
                     * @return ReDoParams 是否已赋值
                     * 
                     */
                    bool ReDoParamsHasBeenSet() const;

                private:

                    /**
                     * 实例列表
                     */
                    std::vector<InstanceOpsDto> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 检查父任务类型, true: 检查父任务; false: 不检查父任务 
                     */
                    bool m_checkFather;
                    bool m_checkFatherHasBeenSet;

                    /**
                     * 重跑类型, 1: 自身; 3: 孩子; 2: 自身以及孩子 
                     */
                    std::string m_rerunType;
                    bool m_rerunTypeHasBeenSet;

                    /**
                     * 实例依赖方式, 1: 自依赖; 2: 任务依赖; 3: 自依赖及父子依赖 
                     */
                    std::string m_dependentWay;
                    bool m_dependentWayHasBeenSet;

                    /**
                     * 重跑忽略事件监听与否 
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * 下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     */
                    std::string m_sonInstanceType;
                    bool m_sonInstanceTypeHasBeenSet;

                    /**
                     * 查询条件
                     */
                    InstanceApiOpsRequest m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * 访问类型
                     */
                    std::string m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * 操作者名称
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 操作者id
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目标志
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 索引页码
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 页面大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 数据总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 基础请求信息
                     */
                    ProjectBaseInfoOpsRequest m_requestBaseInfo;
                    bool m_requestBaseInfoHasBeenSet;

                    /**
                     * 是否计算总数
                     */
                    bool m_isCount;
                    bool m_isCountHasBeenSet;

                    /**
                     * 是否异步模式
                     */
                    bool m_asyncMode;
                    bool m_asyncModeHasBeenSet;

                    /**
                     * 是否检查上游任务： ALL（全部）、 MAKE_SCOPE（选中）、NONE （全部不检查）
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * 任务原有自依赖配置 true（是）、false（否）
                     */
                    bool m_sameSelfDependType;
                    bool m_sameSelfDependTypeHasBeenSet;

                    /**
                     * 实例运行并发度
                     */
                    int64_t m_parallelNum;
                    bool m_parallelNumHasBeenSet;

                    /**
                     * 任务原有自依赖配置 true（是）、false（否）
                     */
                    bool m_sameSelfWorkflowDependType;
                    bool m_sameSelfWorkflowDependTypeHasBeenSet;

                    /**
                     * 代表重新指定 的  是 或者 否  yes、 no
                     */
                    std::string m_selfWorkflowDependency;
                    bool m_selfWorkflowDependencyHasBeenSet;

                    /**
                     * 运行实例数据时间排序 0---正常  1--正序  2 – 逆序
                     */
                    int64_t m_dataTimeOrder;
                    bool m_dataTimeOrderHasBeenSet;

                    /**
                     * 重跑参数
                     */
                    std::string m_reDoParams;
                    bool m_reDoParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNRERUNSCHEDULEINSTANCESREQUEST_H_
