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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONINFOSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/IpGeolocationInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeIpGeolocationInfos返回参数结构体
                */
                class DescribeIpGeolocationInfosResponse : public AbstractModel
                {
                public:
                    DescribeIpGeolocationInfosResponse();
                    ~DescribeIpGeolocationInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP地址信息列表。
                     * @return AddressInfo IP地址信息列表。
                     * 
                     */
                    std::vector<IpGeolocationInfo> GetAddressInfo() const;

                    /**
                     * 判断参数 AddressInfo 是否已赋值
                     * @return AddressInfo 是否已赋值
                     * 
                     */
                    bool AddressInfoHasBeenSet() const;

                    /**
                     * 获取IP地址信息个数。
                     * @return Total IP地址信息个数。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * IP地址信息列表。
                     */
                    std::vector<IpGeolocationInfo> m_addressInfo;
                    bool m_addressInfoHasBeenSet;

                    /**
                     * IP地址信息个数。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONINFOSRESPONSE_H_
