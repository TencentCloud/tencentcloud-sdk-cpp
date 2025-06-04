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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_HOSTINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_HOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC宿主机的详细信息
                */
                class HostInfo : public AbstractModel
                {
                public:
                    HostInfo();
                    ~HostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取宿主机IP（废弃）
                     * @return HostIp 宿主机IP（废弃）
                     * @deprecated
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置宿主机IP（废弃）
                     * @param _hostIp 宿主机IP（废弃）
                     * @deprecated
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * @deprecated
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取云服务类型
                     * @return ServiceType 云服务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置云服务类型
                     * @param _serviceType 云服务类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取宿主机运行状态
                     * @return HostStatus 宿主机运行状态
                     * 
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 设置宿主机运行状态
                     * @param _hostStatus 宿主机运行状态
                     * 
                     */
                    void SetHostStatus(const std::string& _hostStatus);

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     * 
                     */
                    bool HostStatusHasBeenSet() const;

                    /**
                     * 获取宿主机类型
                     * @return HostType 宿主机类型
                     * 
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置宿主机类型
                     * @param _hostType 宿主机类型
                     * 
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取cpu可用数
                     * @return CpuAvailable cpu可用数
                     * 
                     */
                    uint64_t GetCpuAvailable() const;

                    /**
                     * 设置cpu可用数
                     * @param _cpuAvailable cpu可用数
                     * 
                     */
                    void SetCpuAvailable(const uint64_t& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取cpu总数
                     * @return CpuTotal cpu总数
                     * 
                     */
                    uint64_t GetCpuTotal() const;

                    /**
                     * 设置cpu总数
                     * @param _cpuTotal cpu总数
                     * 
                     */
                    void SetCpuTotal(const uint64_t& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取内存可用数
                     * @return MemAvailable 内存可用数
                     * 
                     */
                    uint64_t GetMemAvailable() const;

                    /**
                     * 设置内存可用数
                     * @param _memAvailable 内存可用数
                     * 
                     */
                    void SetMemAvailable(const uint64_t& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                    /**
                     * 获取内存总数
                     * @return MemTotal 内存总数
                     * 
                     */
                    uint64_t GetMemTotal() const;

                    /**
                     * 设置内存总数
                     * @param _memTotal 内存总数
                     * 
                     */
                    void SetMemTotal(const uint64_t& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取运行时间
                     * @return RunTime 运行时间
                     * 
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置运行时间
                     * @param _runTime 运行时间
                     * 
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     * 
                     */
                    bool RunTimeHasBeenSet() const;

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
                     * 获取宿主机id
                     * @return HostId 宿主机id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置宿主机id
                     * @param _hostId 宿主机id
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                private:

                    /**
                     * 宿主机IP（废弃）
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 云服务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 宿主机运行状态
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * 宿主机类型
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * cpu可用数
                     */
                    uint64_t m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * cpu总数
                     */
                    uint64_t m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * 内存可用数
                     */
                    uint64_t m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                    /**
                     * 内存总数
                     */
                    uint64_t m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * 运行时间
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 宿主机id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTINFO_H_
