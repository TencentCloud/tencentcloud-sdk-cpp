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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAddressTemplateInstances请求参数结构体
                */
                class DescribeAddressTemplateInstancesRequest : public AbstractModel
                {
                public:
                    DescribeAddressTemplateInstancesRequest();
                    ~DescribeAddressTemplateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP地址实例ID。例如：ipm-12345678。
                     * @return AddressTemplateId IP地址实例ID。例如：ipm-12345678。
                     * 
                     */
                    std::string GetAddressTemplateId() const;

                    /**
                     * 设置IP地址实例ID。例如：ipm-12345678。
                     * @param _addressTemplateId IP地址实例ID。例如：ipm-12345678。
                     * 
                     */
                    void SetAddressTemplateId(const std::string& _addressTemplateId);

                    /**
                     * 判断参数 AddressTemplateId 是否已赋值
                     * @return AddressTemplateId 是否已赋值
                     * 
                     */
                    bool AddressTemplateIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * IP地址实例ID。例如：ipm-12345678。
                     */
                    std::string m_addressTemplateId;
                    bool m_addressTemplateIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATEINSTANCESREQUEST_H_
