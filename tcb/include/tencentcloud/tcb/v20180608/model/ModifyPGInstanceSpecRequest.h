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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYPGINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYPGINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyPGInstanceSpec请求参数结构体
                */
                class ModifyPGInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyPGInstanceSpecRequest();
                    ~ModifyPGInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境 id</p>
                     * @return EnvId <p>环境 id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境 id</p>
                     * @param _envId <p>环境 id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>cpu 核数</p><p>单位：核数</p>
                     * @return Cpu <p>cpu 核数</p><p>单位：核数</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>cpu 核数</p><p>单位：核数</p>
                     * @param _cpu <p>cpu 核数</p><p>单位：核数</p>
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
                     * 获取<p>内存容量</p><p>单位：GB</p>
                     * @return Memory <p>内存容量</p><p>单位：GB</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存容量</p><p>单位：GB</p>
                     * @param _memory <p>内存容量</p><p>单位：GB</p>
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
                     * 获取<p>磁盘容量</p><p>单位：GB</p>
                     * @return Storage <p>磁盘容量</p><p>单位：GB</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>磁盘容量</p><p>单位：GB</p>
                     * @param _storage <p>磁盘容量</p><p>单位：GB</p>
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>0： 立即执行</li><li>1： 指定时间执行</li><li>2： 维护时间执行</li></ul>
                     * @return SwitchTag <p>类型</p><p>枚举值：</p><ul><li>0： 立即执行</li><li>1： 指定时间执行</li><li>2： 维护时间执行</li></ul>
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>0： 立即执行</li><li>1： 指定时间执行</li><li>2： 维护时间执行</li></ul>
                     * @param _switchTag <p>类型</p><p>枚举值：</p><ul><li>0： 立即执行</li><li>1： 指定时间执行</li><li>2： 维护时间执行</li></ul>
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取<p>SwitchTag=1 时，启动时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * @return SwitchStartTime <p>SwitchTag=1 时，启动时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>SwitchTag=1 时，启动时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * @param _switchStartTime <p>SwitchTag=1 时，启动时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>SwitchTag=1 时结束时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * @return SwitchEndTime <p>SwitchTag=1 时结束时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>SwitchTag=1 时结束时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * @param _switchEndTime <p>SwitchTag=1 时结束时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>预检</p>
                     * @return DryRun <p>预检</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>预检</p>
                     * @param _dryRun <p>预检</p>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * <p>环境 id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>cpu 核数</p><p>单位：核数</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存容量</p><p>单位：GB</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>磁盘容量</p><p>单位：GB</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>类型</p><p>枚举值：</p><ul><li>0： 立即执行</li><li>1： 指定时间执行</li><li>2： 维护时间执行</li></ul>
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * <p>SwitchTag=1 时，启动时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>SwitchTag=1 时结束时间</p><p>参数格式：YYYY-MM-dd HH:mm:ss</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * <p>预检</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYPGINSTANCESPECREQUEST_H_
