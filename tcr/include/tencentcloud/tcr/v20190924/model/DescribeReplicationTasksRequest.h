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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONTASKSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationTasks请求参数结构体
                */
                class DescribeReplicationTasksRequest : public AbstractModel
                {
                public:
                    DescribeReplicationTasksRequest();
                    ~DescribeReplicationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param _registryId 实例ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取执行记录ID
                     * @return ExecutionId 执行记录ID
                     * 
                     */
                    int64_t GetExecutionId() const;

                    /**
                     * 设置执行记录ID
                     * @param _executionId 执行记录ID
                     * 
                     */
                    void SetExecutionId(const int64_t& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取页数，默认为1
                     * @return Page 页数，默认为1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页数，默认为1
                     * @param _page 页数，默认为1
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页展示个数，默认为100
                     * @return PageSize 每页展示个数，默认为100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页展示个数，默认为100
                     * @param _pageSize 每页展示个数，默认为100
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 执行记录ID
                     */
                    int64_t m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * 页数，默认为1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页展示个数，默认为100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONTASKSREQUEST_H_
