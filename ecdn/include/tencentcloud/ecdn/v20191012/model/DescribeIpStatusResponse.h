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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEIPSTATUSRESPONSE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEIPSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/IpStatus.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeIpStatus返回参数结构体
                */
                class DescribeIpStatusResponse : public AbstractModel
                {
                public:
                    DescribeIpStatusResponse();
                    ~DescribeIpStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点列表
                     * @return Ips 节点列表
                     * 
                     */
                    std::vector<IpStatus> GetIps() const;

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取节点总个数
                     * @return TotalCount 节点总个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 节点列表
                     */
                    std::vector<IpStatus> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * 节点总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEIPSTATUSRESPONSE_H_
