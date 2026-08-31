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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEINSTANCEFAMILIESREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEINSTANCEFAMILIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeInstanceFamilies请求参数结构体
                */
                class DescribeInstanceFamiliesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceFamiliesRequest();
                    ~DescribeInstanceFamiliesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID。</p>
                     * @return ClusterId <p>集群 ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。</p>
                     * @param _clusterId <p>集群 ID。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>GPU 厂商过滤条件。</p>
                     * @return Vendor <p>GPU 厂商过滤条件。</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>GPU 厂商过滤条件。</p>
                     * @param _vendor <p>GPU 厂商过滤条件。</p>
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>GPU 厂商过滤条件。</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEINSTANCEFAMILIESREQUEST_H_
