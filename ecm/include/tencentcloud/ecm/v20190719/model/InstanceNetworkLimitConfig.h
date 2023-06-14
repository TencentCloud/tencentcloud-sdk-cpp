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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKLIMITCONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 机器网络资源限制
                */
                class InstanceNetworkLimitConfig : public AbstractModel
                {
                public:
                    InstanceNetworkLimitConfig();
                    ~InstanceNetworkLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu核数
                     * @return CpuNum cpu核数
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置cpu核数
                     * @param _cpuNum cpu核数
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取网卡数量限制
                     * @return NetworkInterfaceLimit 网卡数量限制
                     * 
                     */
                    int64_t GetNetworkInterfaceLimit() const;

                    /**
                     * 设置网卡数量限制
                     * @param _networkInterfaceLimit 网卡数量限制
                     * 
                     */
                    void SetNetworkInterfaceLimit(const int64_t& _networkInterfaceLimit);

                    /**
                     * 判断参数 NetworkInterfaceLimit 是否已赋值
                     * @return NetworkInterfaceLimit 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceLimitHasBeenSet() const;

                    /**
                     * 获取每张网卡内网ip数量限制
                     * @return InnerIpPerNetworkInterface 每张网卡内网ip数量限制
                     * 
                     */
                    int64_t GetInnerIpPerNetworkInterface() const;

                    /**
                     * 设置每张网卡内网ip数量限制
                     * @param _innerIpPerNetworkInterface 每张网卡内网ip数量限制
                     * 
                     */
                    void SetInnerIpPerNetworkInterface(const int64_t& _innerIpPerNetworkInterface);

                    /**
                     * 判断参数 InnerIpPerNetworkInterface 是否已赋值
                     * @return InnerIpPerNetworkInterface 是否已赋值
                     * 
                     */
                    bool InnerIpPerNetworkInterfaceHasBeenSet() const;

                    /**
                     * 获取每个实例的外网ip限制
                     * @return PublicIpPerInstance 每个实例的外网ip限制
                     * 
                     */
                    int64_t GetPublicIpPerInstance() const;

                    /**
                     * 设置每个实例的外网ip限制
                     * @param _publicIpPerInstance 每个实例的外网ip限制
                     * 
                     */
                    void SetPublicIpPerInstance(const int64_t& _publicIpPerInstance);

                    /**
                     * 判断参数 PublicIpPerInstance 是否已赋值
                     * @return PublicIpPerInstance 是否已赋值
                     * 
                     */
                    bool PublicIpPerInstanceHasBeenSet() const;

                private:

                    /**
                     * cpu核数
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 网卡数量限制
                     */
                    int64_t m_networkInterfaceLimit;
                    bool m_networkInterfaceLimitHasBeenSet;

                    /**
                     * 每张网卡内网ip数量限制
                     */
                    int64_t m_innerIpPerNetworkInterface;
                    bool m_innerIpPerNetworkInterfaceHasBeenSet;

                    /**
                     * 每个实例的外网ip限制
                     */
                    int64_t m_publicIpPerInstance;
                    bool m_publicIpPerInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKLIMITCONFIG_H_
