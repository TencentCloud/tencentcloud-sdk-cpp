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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeLifecyclePolicies请求参数结构体
                */
                class DescribeLifecyclePoliciesRequest : public AbstractModel
                {
                public:
                    DescribeLifecyclePoliciesRequest();
                    ~DescribeLifecyclePoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生命周期管理策略名称
                     * @return LifecyclePolicyName 生命周期管理策略名称
                     * 
                     */
                    std::string GetLifecyclePolicyName() const;

                    /**
                     * 设置生命周期管理策略名称
                     * @param _lifecyclePolicyName 生命周期管理策略名称
                     * 
                     */
                    void SetLifecyclePolicyName(const std::string& _lifecyclePolicyName);

                    /**
                     * 判断参数 LifecyclePolicyName 是否已赋值
                     * @return LifecyclePolicyName 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyNameHasBeenSet() const;

                    /**
                     * 获取每个分页包含的生命周期管理策略个数
                     * @return PageSize 每个分页包含的生命周期管理策略个数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每个分页包含的生命周期管理策略个数
                     * @param _pageSize 每个分页包含的生命周期管理策略个数
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取列表的分页页码
                     * @return PageNumber 列表的分页页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置列表的分页页码
                     * @param _pageNumber 列表的分页页码
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略ID
                     * @return LifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置生命周期管理策略ID
                     * @param _lifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                private:

                    /**
                     * 生命周期管理策略名称
                     */
                    std::string m_lifecyclePolicyName;
                    bool m_lifecyclePolicyNameHasBeenSet;

                    /**
                     * 每个分页包含的生命周期管理策略个数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 列表的分页页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 生命周期管理策略ID
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESREQUEST_H_
