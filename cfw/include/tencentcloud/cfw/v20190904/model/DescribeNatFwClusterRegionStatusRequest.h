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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWCLUSTERREGIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWCLUSTERREGIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatClusterRegionStatusQuery.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwClusterRegionStatus请求参数结构体
                */
                class DescribeNatFwClusterRegionStatusRequest : public AbstractModel
                {
                public:
                    DescribeNatFwClusterRegionStatusRequest();
                    ~DescribeNatFwClusterRegionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NAT集群防火墙地域状态查询列表</p>
                     * @return NatClusterRegionStatusQueryList <p>NAT集群防火墙地域状态查询列表</p>
                     * 
                     */
                    std::vector<NatClusterRegionStatusQuery> GetNatClusterRegionStatusQueryList() const;

                    /**
                     * 设置<p>NAT集群防火墙地域状态查询列表</p>
                     * @param _natClusterRegionStatusQueryList <p>NAT集群防火墙地域状态查询列表</p>
                     * 
                     */
                    void SetNatClusterRegionStatusQueryList(const std::vector<NatClusterRegionStatusQuery>& _natClusterRegionStatusQueryList);

                    /**
                     * 判断参数 NatClusterRegionStatusQueryList 是否已赋值
                     * @return NatClusterRegionStatusQueryList 是否已赋值
                     * 
                     */
                    bool NatClusterRegionStatusQueryListHasBeenSet() const;

                private:

                    /**
                     * <p>NAT集群防火墙地域状态查询列表</p>
                     */
                    std::vector<NatClusterRegionStatusQuery> m_natClusterRegionStatusQueryList;
                    bool m_natClusterRegionStatusQueryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWCLUSTERREGIONSTATUSREQUEST_H_
