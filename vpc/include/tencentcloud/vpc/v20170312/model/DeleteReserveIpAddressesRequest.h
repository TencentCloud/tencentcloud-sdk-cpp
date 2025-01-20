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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETERESERVEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETERESERVEIPADDRESSESREQUEST_H_

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
                * DeleteReserveIpAddresses请求参数结构体
                */
                class DeleteReserveIpAddressesRequest : public AbstractModel
                {
                public:
                    DeleteReserveIpAddressesRequest();
                    ~DeleteReserveIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC唯一 ID。
                     * @return VpcId VPC唯一 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一 ID。
                     * @param _vpcId VPC唯一 ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取内网保留IP地址列表。
                     * @return ReserveIpIds 内网保留IP地址列表。
                     * 
                     */
                    std::vector<std::string> GetReserveIpIds() const;

                    /**
                     * 设置内网保留IP地址列表。
                     * @param _reserveIpIds 内网保留IP地址列表。
                     * 
                     */
                    void SetReserveIpIds(const std::vector<std::string>& _reserveIpIds);

                    /**
                     * 判断参数 ReserveIpIds 是否已赋值
                     * @return ReserveIpIds 是否已赋值
                     * 
                     */
                    bool ReserveIpIdsHasBeenSet() const;

                private:

                    /**
                     * VPC唯一 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 内网保留IP地址列表。
                     */
                    std::vector<std::string> m_reserveIpIds;
                    bool m_reserveIpIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETERESERVEIPADDRESSESREQUEST_H_
