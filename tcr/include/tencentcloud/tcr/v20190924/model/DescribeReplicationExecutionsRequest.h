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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONEXECUTIONSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONEXECUTIONSREQUEST_H_

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
                * DescribeReplicationExecutions请求参数结构体
                */
                class DescribeReplicationExecutionsRequest : public AbstractModel
                {
                public:
                    DescribeReplicationExecutionsRequest();
                    ~DescribeReplicationExecutionsRequest() = default;
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
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取复制实例ID
                     * @return ReplicationInstanceId 复制实例ID
                     * 
                     */
                    std::string GetReplicationInstanceId() const;

                    /**
                     * 设置复制实例ID
                     * @param _replicationInstanceId 复制实例ID
                     * 
                     */
                    void SetReplicationInstanceId(const std::string& _replicationInstanceId);

                    /**
                     * 判断参数 ReplicationInstanceId 是否已赋值
                     * @return ReplicationInstanceId 是否已赋值
                     * 
                     */
                    bool ReplicationInstanceIdHasBeenSet() const;

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
                     * 策略ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 复制实例ID
                     */
                    std::string m_replicationInstanceId;
                    bool m_replicationInstanceIdHasBeenSet;

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

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONEXECUTIONSREQUEST_H_
