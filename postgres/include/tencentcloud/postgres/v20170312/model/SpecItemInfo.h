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
                     * 获取<p>规格ID</p>
                     * @return SpecCode <p>规格ID</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>规格ID</p>
                     * @param _specCode <p>规格ID</p>
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
                     * 获取<p>PostgreSQL的版本编号</p>
                     * @return Version <p>PostgreSQL的版本编号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>PostgreSQL的版本编号</p>
                     * @param _version <p>PostgreSQL的版本编号</p>
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
                     * 获取<p>内核编号对应的完整版本名称</p>
                     * @return VersionName <p>内核编号对应的完整版本名称</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>内核编号对应的完整版本名称</p>
                     * @param _versionName <p>内核编号对应的完整版本名称</p>
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
                     * 获取<p>CPU核数</p>
                     * @return Cpu <p>CPU核数</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>CPU核数</p>
                     * @param _cpu <p>CPU核数</p>
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
                     * 获取<p>内存大小，单位：MB</p>
                     * @return Memory <p>内存大小，单位：MB</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位：MB</p>
                     * @param _memory <p>内存大小，单位：MB</p>
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
                     * 获取<p>该规格所支持最大存储容量，单位：GB</p>
                     * @return MaxStorage <p>该规格所支持最大存储容量，单位：GB</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>该规格所支持最大存储容量，单位：GB</p>
                     * @param _maxStorage <p>该规格所支持最大存储容量，单位：GB</p>
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
                     * 获取<p>该规格所支持最小存储容量，单位：GB</p>
                     * @return MinStorage <p>该规格所支持最小存储容量，单位：GB</p>
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置<p>该规格所支持最小存储容量，单位：GB</p>
                     * @param _minStorage <p>该规格所支持最小存储容量，单位：GB</p>
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
                     * 获取<p>该规格的预估QPS</p>
                     * @return Qps <p>该规格的预估QPS</p>
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置<p>该规格的预估QPS</p>
                     * @param _qps <p>该规格的预估QPS</p>
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
                     * 获取<p>【该字段废弃】</p>
                     * @return Pid <p>【该字段废弃】</p>
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置<p>【该字段废弃】</p>
                     * @param _pid <p>【该字段废弃】</p>
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
                     * 获取<p>机器类型</p>
                     * @return Type <p>机器类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>机器类型</p>
                     * @param _type <p>机器类型</p>
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
                     * 获取<p>PostgreSQL的主要版本编号</p>
                     * @return MajorVersion <p>PostgreSQL的主要版本编号</p>
                     * 
                     */
                    std::string GetMajorVersion() const;

                    /**
                     * 设置<p>PostgreSQL的主要版本编号</p>
                     * @param _majorVersion <p>PostgreSQL的主要版本编号</p>
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
                     * 获取<p>PostgreSQL的内核版本编号</p>
                     * @return KernelVersion <p>PostgreSQL的内核版本编号</p>
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置<p>PostgreSQL的内核版本编号</p>
                     * @param _kernelVersion <p>PostgreSQL的内核版本编号</p>
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
                     * 获取<p>是否支持TDE数据加密功能，0-不支持，1-支持</p>
                     * @return IsSupportTDE <p>是否支持TDE数据加密功能，0-不支持，1-支持</p>
                     * 
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置<p>是否支持TDE数据加密功能，0-不支持，1-支持</p>
                     * @param _isSupportTDE <p>是否支持TDE数据加密功能，0-不支持，1-支持</p>
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
                     * <p>规格ID</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>PostgreSQL的版本编号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>内核编号对应的完整版本名称</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>CPU核数</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存大小，单位：MB</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>该规格所支持最大存储容量，单位：GB</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>该规格所支持最小存储容量，单位：GB</p>
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * <p>该规格的预估QPS</p>
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>【该字段废弃】</p>
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>机器类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>PostgreSQL的主要版本编号</p>
                     */
                    std::string m_majorVersion;
                    bool m_majorVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL的内核版本编号</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * <p>是否支持TDE数据加密功能，0-不支持，1-支持</p>
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECITEMINFO_H_
