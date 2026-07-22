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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDREQUEST_H_

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
                * DescribeVpcResourceDashboard请求参数结构体
                */
                class DescribeVpcResourceDashboardRequest : public AbstractModel
                {
                public:
                    DescribeVpcResourceDashboardRequest();
                    ~DescribeVpcResourceDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Vpc实例ID，例如：vpc-f1xjkw1b。</p>
                     * @return VpcIds <p>Vpc实例ID，例如：vpc-f1xjkw1b。</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置<p>Vpc实例ID，例如：vpc-f1xjkw1b。</p>
                     * @param _vpcIds <p>Vpc实例ID，例如：vpc-f1xjkw1b。</p>
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Vpc实例ID，例如：vpc-f1xjkw1b。</p>
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDREQUEST_H_
