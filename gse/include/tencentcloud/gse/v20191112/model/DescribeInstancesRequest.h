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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队ID
                     * @return FleetId 服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队ID
                     * @param _fleetId 服务器舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取CVM实例ID
                     * @return InstanceId CVM实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM实例ID
                     * @param _instanceId CVM实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取结果返回最大数量，最小值0，最大值100
                     * @return Offset 结果返回最大数量，最小值0，最大值100
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置结果返回最大数量，最小值0，最大值100
                     * @param _offset 结果返回最大数量，最小值0，最大值100
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
                     * 获取返回结果偏移，最小值0
                     * @return Limit 返回结果偏移，最小值0
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回结果偏移，最小值0
                     * @param _limit 返回结果偏移，最小值0
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
                     * 获取CVM实例公网IP
                     * @return IpAddress CVM实例公网IP
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置CVM实例公网IP
                     * @param _ipAddress CVM实例公网IP
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * CVM实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 结果返回最大数量，最小值0，最大值100
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回结果偏移，最小值0
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * CVM实例公网IP
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEINSTANCESREQUEST_H_
