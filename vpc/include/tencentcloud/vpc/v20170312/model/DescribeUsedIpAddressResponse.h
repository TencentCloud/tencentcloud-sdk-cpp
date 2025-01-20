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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/IpAddressStates.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeUsedIpAddress返回参数结构体
                */
                class DescribeUsedIpAddressResponse : public AbstractModel
                {
                public:
                    DescribeUsedIpAddressResponse();
                    ~DescribeUsedIpAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取占用ip地址的资源信息
                     * @return IpAddressStates 占用ip地址的资源信息
                     * 
                     */
                    std::vector<IpAddressStates> GetIpAddressStates() const;

                    /**
                     * 判断参数 IpAddressStates 是否已赋值
                     * @return IpAddressStates 是否已赋值
                     * 
                     */
                    bool IpAddressStatesHasBeenSet() const;

                    /**
                     * 获取返回占用资源的个数
                     * @return TotalCount 返回占用资源的个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 占用ip地址的资源信息
                     */
                    std::vector<IpAddressStates> m_ipAddressStates;
                    bool m_ipAddressStatesHasBeenSet;

                    /**
                     * 返回占用资源的个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSRESPONSE_H_
