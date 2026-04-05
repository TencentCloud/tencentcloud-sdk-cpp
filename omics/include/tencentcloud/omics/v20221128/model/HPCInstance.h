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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_HPCINSTANCE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_HPCINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/HPCDisk.h>
#include <tencentcloud/omics/v20221128/model/HPCGPUInfo.h>
#include <tencentcloud/omics/v20221128/model/HPCInternetInfo.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * HPC实例
                */
                class HPCInstance : public AbstractModel
                {
                public:
                    HPCInstance();
                    ~HPCInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取CPU数量
                     * @return CPU CPU数量
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CPU数量
                     * @param _cPU CPU数量
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取计费类型
                     * @return ChargeType 计费类型
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型
                     * @param _chargeType 计费类型
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取系统名称
                     * @return OSName 系统名称
                     * 
                     */
                    std::string GetOSName() const;

                    /**
                     * 设置系统名称
                     * @param _oSName 系统名称
                     * 
                     */
                    void SetOSName(const std::string& _oSName);

                    /**
                     * 判断参数 OSName 是否已赋值
                     * @return OSName 是否已赋值
                     * 
                     */
                    bool OSNameHasBeenSet() const;

                    /**
                     * 获取系统盘
                     * @return SystemDisk 系统盘
                     * 
                     */
                    HPCDisk GetSystemDisk() const;

                    /**
                     * 设置系统盘
                     * @param _systemDisk 系统盘
                     * 
                     */
                    void SetSystemDisk(const HPCDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取GPU
                     * @return GPUInfo GPU
                     * 
                     */
                    HPCGPUInfo GetGPUInfo() const;

                    /**
                     * 设置GPU
                     * @param _gPUInfo GPU
                     * 
                     */
                    void SetGPUInfo(const HPCGPUInfo& _gPUInfo);

                    /**
                     * 判断参数 GPUInfo 是否已赋值
                     * @return GPUInfo 是否已赋值
                     * 
                     */
                    bool GPUInfoHasBeenSet() const;

                    /**
                     * 获取内网IP地址
                     * @return PrivateIPAddresses 内网IP地址
                     * 
                     */
                    std::vector<std::string> GetPrivateIPAddresses() const;

                    /**
                     * 设置内网IP地址
                     * @param _privateIPAddresses 内网IP地址
                     * 
                     */
                    void SetPrivateIPAddresses(const std::vector<std::string>& _privateIPAddresses);

                    /**
                     * 判断参数 PrivateIPAddresses 是否已赋值
                     * @return PrivateIPAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIPAddressesHasBeenSet() const;

                    /**
                     * 获取公网IP地址
                     * @return PublicIPAddresses 公网IP地址
                     * 
                     */
                    std::vector<std::string> GetPublicIPAddresses() const;

                    /**
                     * 设置公网IP地址
                     * @param _publicIPAddresses 公网IP地址
                     * 
                     */
                    void SetPublicIPAddresses(const std::vector<std::string>& _publicIPAddresses);

                    /**
                     * 判断参数 PublicIPAddresses 是否已赋值
                     * @return PublicIPAddresses 是否已赋值
                     * 
                     */
                    bool PublicIPAddressesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireTime 到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
                     * @param _expireTime 到期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Uuid
                     * @return Uuid Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Uuid
                     * @param _uuid Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取节点网络信息
                     * @return InternetInfo 节点网络信息
                     * 
                     */
                    HPCInternetInfo GetInternetInfo() const;

                    /**
                     * 设置节点网络信息
                     * @param _internetInfo 节点网络信息
                     * 
                     */
                    void SetInternetInfo(const HPCInternetInfo& _internetInfo);

                    /**
                     * 判断参数 InternetInfo 是否已赋值
                     * @return InternetInfo 是否已赋值
                     * 
                     */
                    bool InternetInfoHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CPU数量
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 计费类型
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 系统名称
                     */
                    std::string m_oSName;
                    bool m_oSNameHasBeenSet;

                    /**
                     * 系统盘
                     */
                    HPCDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * GPU
                     */
                    HPCGPUInfo m_gPUInfo;
                    bool m_gPUInfoHasBeenSet;

                    /**
                     * 内网IP地址
                     */
                    std::vector<std::string> m_privateIPAddresses;
                    bool m_privateIPAddressesHasBeenSet;

                    /**
                     * 公网IP地址
                     */
                    std::vector<std::string> m_publicIPAddresses;
                    bool m_publicIPAddressesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 节点网络信息
                     */
                    HPCInternetInfo m_internetInfo;
                    bool m_internetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_HPCINSTANCE_H_
