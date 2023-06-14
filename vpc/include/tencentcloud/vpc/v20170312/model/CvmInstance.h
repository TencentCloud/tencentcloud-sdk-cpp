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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CVMINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CVMINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云主机实例信息。
                */
                class CvmInstance : public AbstractModel
                {
                public:
                    CvmInstance();
                    ~CvmInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取子网实例ID。
                     * @return SubnetId 子网实例ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。
                     * @param _subnetId 子网实例ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取云主机实例ID
                     * @return InstanceId 云主机实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云主机实例ID
                     * @param _instanceId 云主机实例ID
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
                     * 获取云主机名称。
                     * @return InstanceName 云主机名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置云主机名称。
                     * @param _instanceName 云主机名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取云主机状态。
                     * @return InstanceState 云主机状态。
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置云主机状态。
                     * @param _instanceState 云主机状态。
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取实例的CPU核数，单位：核。
                     * @return CPU 实例的CPU核数，单位：核。
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置实例的CPU核数，单位：核。
                     * @param _cPU 实例的CPU核数，单位：核。
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取实例内存容量，单位：GB。
                     * @return Memory 实例内存容量，单位：GB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存容量，单位：GB。
                     * @param _memory 实例内存容量，单位：GB。
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param _instanceType 实例机型。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例弹性网卡配额（包含主网卡）。
                     * @return EniLimit 实例弹性网卡配额（包含主网卡）。
                     * 
                     */
                    uint64_t GetEniLimit() const;

                    /**
                     * 设置实例弹性网卡配额（包含主网卡）。
                     * @param _eniLimit 实例弹性网卡配额（包含主网卡）。
                     * 
                     */
                    void SetEniLimit(const uint64_t& _eniLimit);

                    /**
                     * 判断参数 EniLimit 是否已赋值
                     * @return EniLimit 是否已赋值
                     * 
                     */
                    bool EniLimitHasBeenSet() const;

                    /**
                     * 获取实例弹性网卡内网IP配额（包含主网卡）。
                     * @return EniIpLimit 实例弹性网卡内网IP配额（包含主网卡）。
                     * 
                     */
                    uint64_t GetEniIpLimit() const;

                    /**
                     * 设置实例弹性网卡内网IP配额（包含主网卡）。
                     * @param _eniIpLimit 实例弹性网卡内网IP配额（包含主网卡）。
                     * 
                     */
                    void SetEniIpLimit(const uint64_t& _eniIpLimit);

                    /**
                     * 判断参数 EniIpLimit 是否已赋值
                     * @return EniIpLimit 是否已赋值
                     * 
                     */
                    bool EniIpLimitHasBeenSet() const;

                    /**
                     * 获取实例已绑定弹性网卡的个数（包含主网卡）。
                     * @return InstanceEniCount 实例已绑定弹性网卡的个数（包含主网卡）。
                     * 
                     */
                    uint64_t GetInstanceEniCount() const;

                    /**
                     * 设置实例已绑定弹性网卡的个数（包含主网卡）。
                     * @param _instanceEniCount 实例已绑定弹性网卡的个数（包含主网卡）。
                     * 
                     */
                    void SetInstanceEniCount(const uint64_t& _instanceEniCount);

                    /**
                     * 判断参数 InstanceEniCount 是否已赋值
                     * @return InstanceEniCount 是否已赋值
                     * 
                     */
                    bool InstanceEniCountHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 云主机实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云主机名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 云主机状态。
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 实例的CPU核数，单位：核。
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 实例内存容量，单位：GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例弹性网卡配额（包含主网卡）。
                     */
                    uint64_t m_eniLimit;
                    bool m_eniLimitHasBeenSet;

                    /**
                     * 实例弹性网卡内网IP配额（包含主网卡）。
                     */
                    uint64_t m_eniIpLimit;
                    bool m_eniIpLimitHasBeenSet;

                    /**
                     * 实例已绑定弹性网卡的个数（包含主网卡）。
                     */
                    uint64_t m_instanceEniCount;
                    bool m_instanceEniCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CVMINSTANCE_H_
