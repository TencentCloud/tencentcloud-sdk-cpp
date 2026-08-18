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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYSHARDSPECINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYSHARDSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 单shark变配入参
                */
                class ModifyShardSpecInfo : public AbstractModel
                {
                public:
                    ModifyShardSpecInfo();
                    ~ModifyShardSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分片ID</p>
                     * @return ReplicaSetId <p>分片ID</p>
                     * 
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置<p>分片ID</p>
                     * @param _replicaSetId <p>分片ID</p>
                     * 
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     * 
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取<p>CPU核数。单位：C。</p>
                     * @return Cpu <p>CPU核数。单位：C。</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>CPU核数。单位：C。</p>
                     * @param _cpu <p>CPU核数。单位：C。</p>
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
                     * 获取<p>内存大小，单位：GB。</p>
                     * @return Memory <p>内存大小，单位：GB。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位：GB。</p>
                     * @param _memory <p>内存大小，单位：GB。</p>
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
                     * 获取<p>硬盘大小，单位：GB。</p>
                     * @return Volume <p>硬盘大小，单位：GB。</p>
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置<p>硬盘大小，单位：GB。</p>
                     * @param _volume <p>硬盘大小，单位：GB。</p>
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * <p>分片ID</p>
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * <p>CPU核数。单位：C。</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存大小，单位：GB。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>硬盘大小，单位：GB。</p>
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYSHARDSPECINFO_H_
