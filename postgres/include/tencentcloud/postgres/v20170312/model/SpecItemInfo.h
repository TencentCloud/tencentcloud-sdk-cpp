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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述一种规格的信息
                */
                class SpecItemInfo : public AbstractModel
                {
                public:
                    SpecItemInfo();
                    ~SpecItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格ID
                     * @return SpecCode 规格ID
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置规格ID
                     * @param _specCode 规格ID
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取PostgreSQL的版本编号
                     * @return Version PostgreSQL的版本编号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置PostgreSQL的版本编号
                     * @param _version PostgreSQL的版本编号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取内核编号对应的完整版本名称
                     * @return VersionName 内核编号对应的完整版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置内核编号对应的完整版本名称
                     * @param _versionName 内核编号对应的完整版本名称
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存大小，单位：MB
                     * @return Memory 内存大小，单位：MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：MB
                     * @param _memory 内存大小，单位：MB
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
                     * 获取该规格所支持最大存储容量，单位：GB
                     * @return MaxStorage 该规格所支持最大存储容量，单位：GB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置该规格所支持最大存储容量，单位：GB
                     * @param _maxStorage 该规格所支持最大存储容量，单位：GB
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取该规格所支持最小存储容量，单位：GB
                     * @return MinStorage 该规格所支持最小存储容量，单位：GB
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置该规格所支持最小存储容量，单位：GB
                     * @param _minStorage 该规格所支持最小存储容量，单位：GB
                     * 
                     */
                    void SetMinStorage(const uint64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取该规格的预估QPS
                     * @return Qps 该规格的预估QPS
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置该规格的预估QPS
                     * @param _qps 该规格的预估QPS
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取【该字段废弃】
                     * @return Pid 【该字段废弃】
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置【该字段废弃】
                     * @param _pid 【该字段废弃】
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取机器类型
                     * @return Type 机器类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置机器类型
                     * @param _type 机器类型
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
                     * 获取PostgreSQL的主要版本编号
                     * @return MajorVersion PostgreSQL的主要版本编号
                     * 
                     */
                    std::string GetMajorVersion() const;

                    /**
                     * 设置PostgreSQL的主要版本编号
                     * @param _majorVersion PostgreSQL的主要版本编号
                     * 
                     */
                    void SetMajorVersion(const std::string& _majorVersion);

                    /**
                     * 判断参数 MajorVersion 是否已赋值
                     * @return MajorVersion 是否已赋值
                     * 
                     */
                    bool MajorVersionHasBeenSet() const;

                    /**
                     * 获取PostgreSQL的内核版本编号
                     * @return KernelVersion PostgreSQL的内核版本编号
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置PostgreSQL的内核版本编号
                     * @param _kernelVersion PostgreSQL的内核版本编号
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取是否支持TDE数据加密功能，0-不支持，1-支持
                     * @return IsSupportTDE 是否支持TDE数据加密功能，0-不支持，1-支持
                     * 
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置是否支持TDE数据加密功能，0-不支持，1-支持
                     * @param _isSupportTDE 是否支持TDE数据加密功能，0-不支持，1-支持
                     * 
                     */
                    void SetIsSupportTDE(const int64_t& _isSupportTDE);

                    /**
                     * 判断参数 IsSupportTDE 是否已赋值
                     * @return IsSupportTDE 是否已赋值
                     * 
                     */
                    bool IsSupportTDEHasBeenSet() const;

                private:

                    /**
                     * 规格ID
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * PostgreSQL的版本编号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 内核编号对应的完整版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * CPU核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位：MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 该规格所支持最大存储容量，单位：GB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 该规格所支持最小存储容量，单位：GB
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * 该规格的预估QPS
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 【该字段废弃】
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 机器类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * PostgreSQL的主要版本编号
                     */
                    std::string m_majorVersion;
                    bool m_majorVersionHasBeenSet;

                    /**
                     * PostgreSQL的内核版本编号
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * 是否支持TDE数据加密功能，0-不支持，1-支持
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_
