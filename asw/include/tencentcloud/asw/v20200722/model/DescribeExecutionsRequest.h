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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONSREQUEST_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * DescribeExecutions请求参数结构体
                */
                class DescribeExecutionsRequest : public AbstractModel
                {
                public:
                    DescribeExecutionsRequest();
                    ~DescribeExecutionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态机资源名
                     * @return StateMachineResourceName 状态机资源名
                     * 
                     */
                    std::string GetStateMachineResourceName() const;

                    /**
                     * 设置状态机资源名
                     * @param _stateMachineResourceName 状态机资源名
                     * 
                     */
                    void SetStateMachineResourceName(const std::string& _stateMachineResourceName);

                    /**
                     * 判断参数 StateMachineResourceName 是否已赋值
                     * @return StateMachineResourceName 是否已赋值
                     * 
                     */
                    bool StateMachineResourceNameHasBeenSet() const;

                    /**
                     * 获取页大小，最大100
                     * @return PageSize 页大小，最大100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小，最大100
                     * @param _pageSize 页大小，最大100
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
                     * 获取页序号，从1开始
                     * @return PageIndex 页序号，从1开始
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置页序号，从1开始
                     * @param _pageIndex 页序号，从1开始
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
                     * 获取按状态过滤条件，INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     * @return FilterExecutionStatus 按状态过滤条件，INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     * 
                     */
                    std::string GetFilterExecutionStatus() const;

                    /**
                     * 设置按状态过滤条件，INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     * @param _filterExecutionStatus 按状态过滤条件，INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     * 
                     */
                    void SetFilterExecutionStatus(const std::string& _filterExecutionStatus);

                    /**
                     * 判断参数 FilterExecutionStatus 是否已赋值
                     * @return FilterExecutionStatus 是否已赋值
                     * 
                     */
                    bool FilterExecutionStatusHasBeenSet() const;

                    /**
                     * 获取按执行名过滤条件
                     * @return FilterExecutionResourceName 按执行名过滤条件
                     * 
                     */
                    std::string GetFilterExecutionResourceName() const;

                    /**
                     * 设置按执行名过滤条件
                     * @param _filterExecutionResourceName 按执行名过滤条件
                     * 
                     */
                    void SetFilterExecutionResourceName(const std::string& _filterExecutionResourceName);

                    /**
                     * 判断参数 FilterExecutionResourceName 是否已赋值
                     * @return FilterExecutionResourceName 是否已赋值
                     * 
                     */
                    bool FilterExecutionResourceNameHasBeenSet() const;

                private:

                    /**
                     * 状态机资源名
                     */
                    std::string m_stateMachineResourceName;
                    bool m_stateMachineResourceNameHasBeenSet;

                    /**
                     * 页大小，最大100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页序号，从1开始
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 按状态过滤条件，INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     */
                    std::string m_filterExecutionStatus;
                    bool m_filterExecutionStatusHasBeenSet;

                    /**
                     * 按执行名过滤条件
                     */
                    std::string m_filterExecutionResourceName;
                    bool m_filterExecutionResourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONSREQUEST_H_
