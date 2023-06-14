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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEKSContainerInstances请求参数结构体
                */
                class DescribeEKSContainerInstancesRequest : public AbstractModel
                {
                public:
                    DescribeEKSContainerInstancesRequest();
                    ~DescribeEKSContainerInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取限定此次返回资源的数量。如果不设定，默认返回20，最大不能超过100
                     * @return Limit 限定此次返回资源的数量。如果不设定，默认返回20，最大不能超过100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限定此次返回资源的数量。如果不设定，默认返回20，最大不能超过100
                     * @param _limit 限定此次返回资源的数量。如果不设定，默认返回20，最大不能超过100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件，可条件：
(1)实例名称
KeyName: eks-ci-name
类型：String

(2)实例状态
KeyName: status
类型：String
可选值："Pending", "Running", "Succeeded", "Failed"

(3)内网ip
KeyName: private-ip
类型：String

(4)EIP地址
KeyName: eip-address
类型：String

(5)VpcId
KeyName: vpc-id
类型：String
                     * @return Filters 过滤条件，可条件：
(1)实例名称
KeyName: eks-ci-name
类型：String

(2)实例状态
KeyName: status
类型：String
可选值："Pending", "Running", "Succeeded", "Failed"

(3)内网ip
KeyName: private-ip
类型：String

(4)EIP地址
KeyName: eip-address
类型：String

(5)VpcId
KeyName: vpc-id
类型：String
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，可条件：
(1)实例名称
KeyName: eks-ci-name
类型：String

(2)实例状态
KeyName: status
类型：String
可选值："Pending", "Running", "Succeeded", "Failed"

(3)内网ip
KeyName: private-ip
类型：String

(4)EIP地址
KeyName: eip-address
类型：String

(5)VpcId
KeyName: vpc-id
类型：String
                     * @param _filters 过滤条件，可条件：
(1)实例名称
KeyName: eks-ci-name
类型：String

(2)实例状态
KeyName: status
类型：String
可选值："Pending", "Running", "Succeeded", "Failed"

(3)内网ip
KeyName: private-ip
类型：String

(4)EIP地址
KeyName: eip-address
类型：String

(5)VpcId
KeyName: vpc-id
类型：String
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取容器实例 ID 数组
                     * @return EksCiIds 容器实例 ID 数组
                     * 
                     */
                    std::vector<std::string> GetEksCiIds() const;

                    /**
                     * 设置容器实例 ID 数组
                     * @param _eksCiIds 容器实例 ID 数组
                     * 
                     */
                    void SetEksCiIds(const std::vector<std::string>& _eksCiIds);

                    /**
                     * 判断参数 EksCiIds 是否已赋值
                     * @return EksCiIds 是否已赋值
                     * 
                     */
                    bool EksCiIdsHasBeenSet() const;

                private:

                    /**
                     * 限定此次返回资源的数量。如果不设定，默认返回20，最大不能超过100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件，可条件：
(1)实例名称
KeyName: eks-ci-name
类型：String

(2)实例状态
KeyName: status
类型：String
可选值："Pending", "Running", "Succeeded", "Failed"

(3)内网ip
KeyName: private-ip
类型：String

(4)EIP地址
KeyName: eip-address
类型：String

(5)VpcId
KeyName: vpc-id
类型：String
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 容器实例 ID 数组
                     */
                    std::vector<std::string> m_eksCiIds;
                    bool m_eksCiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCESREQUEST_H_
