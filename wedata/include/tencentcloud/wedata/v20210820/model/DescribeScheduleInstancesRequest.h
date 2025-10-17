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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULEINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULEINSTANCESREQUEST_H_

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
                * DescribeScheduleInstances请求参数结构体
                */
                class DescribeScheduleInstancesRequest : public AbstractModel
                {
                public:
                    DescribeScheduleInstancesRequest();
                    ~DescribeScheduleInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取【已废弃参数，新用户接入无需关注】
实例列表过滤条件
                     * @return Instances 【已废弃参数，新用户接入无需关注】
实例列表过滤条件
                     * 
                     */
                    std::vector<InstanceOpsDto> GetInstances() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
实例列表过滤条件
                     * @param _instances 【已废弃参数，新用户接入无需关注】
实例列表过滤条件
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
                     * 获取【已废弃参数，新用户接入无需关注】
检查父任务类型,  true: 检查父任务类型;  false: 不检查父任务类型
                     * @return CheckFather 【已废弃参数，新用户接入无需关注】
检查父任务类型,  true: 检查父任务类型;  false: 不检查父任务类型
                     * 
                     */
                    bool GetCheckFather() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
检查父任务类型,  true: 检查父任务类型;  false: 不检查父任务类型
                     * @param _checkFather 【已废弃参数，新用户接入无需关注】
检查父任务类型,  true: 检查父任务类型;  false: 不检查父任务类型
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
                     * 获取【已废弃参数，新用户接入无需关注】
重跑类型, 1: 仅重跑当前实例; 2: 重跑当前实例及其子实例; 3: 仅重跑子实例
                     * @return RerunType 【已废弃参数，新用户接入无需关注】
重跑类型, 1: 仅重跑当前实例; 2: 重跑当前实例及其子实例; 3: 仅重跑子实例
                     * 
                     */
                    std::string GetRerunType() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
重跑类型, 1: 仅重跑当前实例; 2: 重跑当前实例及其子实例; 3: 仅重跑子实例
                     * @param _rerunType 【已废弃参数，新用户接入无需关注】
重跑类型, 1: 仅重跑当前实例; 2: 重跑当前实例及其子实例; 3: 仅重跑子实例
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
                     * 获取【已废弃参数，新用户接入无需关注】
实例依赖方式, 1: 任务自依赖; 2: 任务上游依赖; 3: 自依赖及其上游依赖 
                     * @return DependentWay 【已废弃参数，新用户接入无需关注】
实例依赖方式, 1: 任务自依赖; 2: 任务上游依赖; 3: 自依赖及其上游依赖 
                     * 
                     */
                    std::string GetDependentWay() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
实例依赖方式, 1: 任务自依赖; 2: 任务上游依赖; 3: 自依赖及其上游依赖 
                     * @param _dependentWay 【已废弃参数，新用户接入无需关注】
实例依赖方式, 1: 任务自依赖; 2: 任务上游依赖; 3: 自依赖及其上游依赖 
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
                     * 获取【已废弃参数，新用户接入无需关注】
重跑时是否忽略事件监听
                     * @return SkipEventListening 【已废弃参数，新用户接入无需关注】
重跑时是否忽略事件监听
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
重跑时是否忽略事件监听
                     * @param _skipEventListening 【已废弃参数，新用户接入无需关注】
重跑时是否忽略事件监听
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
                     * 获取【已废弃参数，新用户接入无需关注】
下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * @return SonInstanceType 【已废弃参数，新用户接入无需关注】
下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * 
                     */
                    std::string GetSonInstanceType() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     * @param _sonInstanceType 【已废弃参数，新用户接入无需关注】
下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
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
                     * 获取【已废弃参数，新用户接入无需关注】
访问类型
                     * @return OptType 【已废弃参数，新用户接入无需关注】
访问类型
                     * 
                     */
                    std::string GetOptType() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
访问类型
                     * @param _optType 【已废弃参数，新用户接入无需关注】
访问类型
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
                     * 获取【已废弃参数，新用户接入无需关注】
操作者名称
                     * @return OperatorName 【已废弃参数，新用户接入无需关注】
操作者名称
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
操作者名称
                     * @param _operatorName 【已废弃参数，新用户接入无需关注】
操作者名称
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
                     * 获取【已废弃参数，新用户接入无需关注】
操作者id
                     * @return OperatorId 【已废弃参数，新用户接入无需关注】
操作者id
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
操作者id
                     * @param _operatorId 【已废弃参数，新用户接入无需关注】
操作者id
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取【必要参数】
项目ID
                     * @return ProjectIdent 【必要参数】
项目ID
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置【必要参数】
项目ID
                     * @param _projectIdent 【必要参数】
项目ID
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
                     * 获取【已废弃参数，新用户接入无需关注】
项目名称
                     * @return ProjectName 【已废弃参数，新用户接入无需关注】
项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
项目名称
                     * @param _projectName 【已废弃参数，新用户接入无需关注】
项目名称
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
                     * 获取【必要参数】
分页查询开始页页码，默认值为 1
                     * @return PageIndex 【必要参数】
分页查询开始页页码，默认值为 1
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置【必要参数】
分页查询开始页页码，默认值为 1
                     * @param _pageIndex 【必要参数】
分页查询开始页页码，默认值为 1
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
                     * 获取【必要参数】
分页查询每页返回的结果行数，默认值为 10
                     * @return PageSize 【必要参数】
分页查询每页返回的结果行数，默认值为 10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置【必要参数】
分页查询每页返回的结果行数，默认值为 10
                     * @param _pageSize 【必要参数】
分页查询每页返回的结果行数，默认值为 10
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
                     * 获取【已废弃参数，新用户接入无需关注】
数据总数
                     * @return Count 【已废弃参数，新用户接入无需关注】
数据总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
数据总数
                     * @param _count 【已废弃参数，新用户接入无需关注】
数据总数
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
                     * 获取【已废弃参数，新用户接入无需关注】
基础请求信息
                     * @return RequestBaseInfo 【已废弃参数，新用户接入无需关注】
基础请求信息
                     * 
                     */
                    ProjectBaseInfoOpsRequest GetRequestBaseInfo() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
基础请求信息
                     * @param _requestBaseInfo 【已废弃参数，新用户接入无需关注】
基础请求信息
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
                     * 获取【已废弃参数，新用户接入无需关注】
是否计算总数
                     * @return IsCount 【已废弃参数，新用户接入无需关注】
是否计算总数
                     * 
                     */
                    bool GetIsCount() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
是否计算总数
                     * @param _isCount 【已废弃参数，新用户接入无需关注】
是否计算总数
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
                     * 获取【已废弃参数，新用户接入无需关注】
项目ID列表，用于多项目实例列表筛选，请注意，该字段传入时 ProjectId 字段也必须传，且传入的 ProjectIds 中的项目ID必须是当前用户有权限的项目ID，否则会由于权限校验失败报错
                     * @return ProjectIds 【已废弃参数，新用户接入无需关注】
项目ID列表，用于多项目实例列表筛选，请注意，该字段传入时 ProjectId 字段也必须传，且传入的 ProjectIds 中的项目ID必须是当前用户有权限的项目ID，否则会由于权限校验失败报错
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置【已废弃参数，新用户接入无需关注】
项目ID列表，用于多项目实例列表筛选，请注意，该字段传入时 ProjectId 字段也必须传，且传入的 ProjectIds 中的项目ID必须是当前用户有权限的项目ID，否则会由于权限校验失败报错
                     * @param _projectIds 【已废弃参数，新用户接入无需关注】
项目ID列表，用于多项目实例列表筛选，请注意，该字段传入时 ProjectId 字段也必须传，且传入的 ProjectIds 中的项目ID必须是当前用户有权限的项目ID，否则会由于权限校验失败报错
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                private:

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
实例列表过滤条件
                     */
                    std::vector<InstanceOpsDto> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
检查父任务类型,  true: 检查父任务类型;  false: 不检查父任务类型
                     */
                    bool m_checkFather;
                    bool m_checkFatherHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
重跑类型, 1: 仅重跑当前实例; 2: 重跑当前实例及其子实例; 3: 仅重跑子实例
                     */
                    std::string m_rerunType;
                    bool m_rerunTypeHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
实例依赖方式, 1: 任务自依赖; 2: 任务上游依赖; 3: 自依赖及其上游依赖 
                     */
                    std::string m_dependentWay;
                    bool m_dependentWayHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
重跑时是否忽略事件监听
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
下游实例范围 1: 所在工作流 2: 所在项目 3: 所有跨工作流依赖的项目
                     */
                    std::string m_sonInstanceType;
                    bool m_sonInstanceTypeHasBeenSet;

                    /**
                     * 查询条件
                     */
                    InstanceApiOpsRequest m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
访问类型
                     */
                    std::string m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
操作者名称
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
操作者id
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 【必要参数】
项目ID
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 【必要参数】
分页查询开始页页码，默认值为 1
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 【必要参数】
分页查询每页返回的结果行数，默认值为 10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
数据总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
基础请求信息
                     */
                    ProjectBaseInfoOpsRequest m_requestBaseInfo;
                    bool m_requestBaseInfoHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
是否计算总数
                     */
                    bool m_isCount;
                    bool m_isCountHasBeenSet;

                    /**
                     * 【已废弃参数，新用户接入无需关注】
项目ID列表，用于多项目实例列表筛选，请注意，该字段传入时 ProjectId 字段也必须传，且传入的 ProjectIds 中的项目ID必须是当前用户有权限的项目ID，否则会由于权限校验失败报错
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULEINSTANCESREQUEST_H_
