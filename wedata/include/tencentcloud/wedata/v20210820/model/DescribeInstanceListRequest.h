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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceList请求参数结构体
                */
                class DescribeInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceListRequest();
                    ~DescribeInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目/工作空间id
                     * @return ProjectId 项目/工作空间id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目/工作空间id
                     * @param _projectId 项目/工作空间id
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
                     * 获取页码
                     * @return PageIndex 页码
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置页码
                     * @param _pageIndex 页码
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
                     * 获取一页展示的条数
                     * @return PageSize 一页展示的条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置一页展示的条数
                     * @param _pageSize 一页展示的条数
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
                     * 获取周期列表（如天，一次性），可选
                     * @return CycleList 周期列表（如天，一次性），可选
                     * 
                     */
                    std::vector<std::string> GetCycleList() const;

                    /**
                     * 设置周期列表（如天，一次性），可选
                     * @param _cycleList 周期列表（如天，一次性），可选
                     * 
                     */
                    void SetCycleList(const std::vector<std::string>& _cycleList);

                    /**
                     * 判断参数 CycleList 是否已赋值
                     * @return CycleList 是否已赋值
                     * 
                     */
                    bool CycleListHasBeenSet() const;

                    /**
                     * 获取责任人
                     * @return OwnerList 责任人
                     * 
                     */
                    std::vector<std::string> GetOwnerList() const;

                    /**
                     * 设置责任人
                     * @param _ownerList 责任人
                     * 
                     */
                    void SetOwnerList(const std::vector<std::string>& _ownerList);

                    /**
                     * 判断参数 OwnerList 是否已赋值
                     * @return OwnerList 是否已赋值
                     * 
                     */
                    bool OwnerListHasBeenSet() const;

                    /**
                     * 获取跟之前保持一致
                     * @return InstanceType 跟之前保持一致
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置跟之前保持一致
                     * @param _instanceType 跟之前保持一致
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取排序顺序（asc，desc）
                     * @return Sort 排序顺序（asc，desc）
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序顺序（asc，desc）
                     * @param _sort 排序顺序（asc，desc）
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * @return SortCol 排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * @param _sortCol 排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                    /**
                     * 获取类型列表（如python任务类型：30
pyspark任务类型：31
hivesql任务类型：34
shell任务类型：35
sparksql任务类型：36 jdbcsql任务类型：21 dlc任务类型：32），可选
                     * @return TaskTypeList 类型列表（如python任务类型：30
pyspark任务类型：31
hivesql任务类型：34
shell任务类型：35
sparksql任务类型：36 jdbcsql任务类型：21 dlc任务类型：32），可选
                     * 
                     */
                    std::vector<int64_t> GetTaskTypeList() const;

                    /**
                     * 设置类型列表（如python任务类型：30
pyspark任务类型：31
hivesql任务类型：34
shell任务类型：35
sparksql任务类型：36 jdbcsql任务类型：21 dlc任务类型：32），可选
                     * @param _taskTypeList 类型列表（如python任务类型：30
pyspark任务类型：31
hivesql任务类型：34
shell任务类型：35
sparksql任务类型：36 jdbcsql任务类型：21 dlc任务类型：32），可选
                     * 
                     */
                    void SetTaskTypeList(const std::vector<int64_t>& _taskTypeList);

                    /**
                     * 判断参数 TaskTypeList 是否已赋值
                     * @return TaskTypeList 是否已赋值
                     * 
                     */
                    bool TaskTypeListHasBeenSet() const;

                    /**
                     * 获取状态列表（如成功 2，正在执行 1），可选
                     * @return StateList 状态列表（如成功 2，正在执行 1），可选
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置状态列表（如成功 2，正在执行 1），可选
                     * @param _stateList 状态列表（如成功 2，正在执行 1），可选
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return Keyword 任务名称
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置任务名称
                     * @param _keyword 任务名称
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 项目/工作空间id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 一页展示的条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 周期列表（如天，一次性），可选
                     */
                    std::vector<std::string> m_cycleList;
                    bool m_cycleListHasBeenSet;

                    /**
                     * 责任人
                     */
                    std::vector<std::string> m_ownerList;
                    bool m_ownerListHasBeenSet;

                    /**
                     * 跟之前保持一致
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 排序顺序（asc，desc）
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                    /**
                     * 类型列表（如python任务类型：30
pyspark任务类型：31
hivesql任务类型：34
shell任务类型：35
sparksql任务类型：36 jdbcsql任务类型：21 dlc任务类型：32），可选
                     */
                    std::vector<int64_t> m_taskTypeList;
                    bool m_taskTypeListHasBeenSet;

                    /**
                     * 状态列表（如成功 2，正在执行 1），可选
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
