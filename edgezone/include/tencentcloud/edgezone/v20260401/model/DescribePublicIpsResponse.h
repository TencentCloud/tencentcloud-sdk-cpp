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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSRESPONSE_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/edgezone/v20260401/model/IpInfo.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribePublicIps返回参数结构体
                */
                class DescribePublicIpsResponse : public AbstractModel
                {
                public:
                    DescribePublicIpsResponse();
                    ~DescribePublicIpsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取公网Ip总数
                     * @return TotalCount 公网Ip总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取分配的公网 IP 地址列表
                     * @return IpInfoSet 分配的公网 IP 地址列表
                     * 
                     */
                    std::vector<IpInfo> GetIpInfoSet() const;

                    /**
                     * 判断参数 IpInfoSet 是否已赋值
                     * @return IpInfoSet 是否已赋值
                     * 
                     */
                    bool IpInfoSetHasBeenSet() const;

                private:

                    /**
                     * 公网Ip总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 分配的公网 IP 地址列表
                     */
                    std::vector<IpInfo> m_ipInfoSet;
                    bool m_ipInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSRESPONSE_H_
