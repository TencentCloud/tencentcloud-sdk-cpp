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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUPSPEC_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUPSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 已购买 GPU 资源组的固定规格及展示元数据。
                */
                class GPUResourceGroupSpec : public AbstractModel
                {
                public:
                    GPUResourceGroupSpec();
                    ~GPUResourceGroupSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>GPU 类型标识，例如 5090d。</p>
                     * @return GPUType <p>GPU 类型标识，例如 5090d。</p>
                     * 
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置<p>GPU 类型标识，例如 5090d。</p>
                     * @param _gPUType <p>GPU 类型标识，例如 5090d。</p>
                     * 
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     * 
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取<p>GPU 类型展示名称；为空时使用 GPUType 展示。</p>
                     * @return GPUTypeAlias <p>GPU 类型展示名称；为空时使用 GPUType 展示。</p>
                     * 
                     */
                    std::string GetGPUTypeAlias() const;

                    /**
                     * 设置<p>GPU 类型展示名称；为空时使用 GPUType 展示。</p>
                     * @param _gPUTypeAlias <p>GPU 类型展示名称；为空时使用 GPUType 展示。</p>
                     * 
                     */
                    void SetGPUTypeAlias(const std::string& _gPUTypeAlias);

                    /**
                     * 判断参数 GPUTypeAlias 是否已赋值
                     * @return GPUTypeAlias 是否已赋值
                     * 
                     */
                    bool GPUTypeAliasHasBeenSet() const;

                    /**
                     * 获取<p>单台实例全部 GPU 的总显存，单位 GiB；不需要再乘 GPUNum。0 表示展示元数据未维护。</p>
                     * @return GPUMemoryGiB <p>单台实例全部 GPU 的总显存，单位 GiB；不需要再乘 GPUNum。0 表示展示元数据未维护。</p>
                     * 
                     */
                    uint64_t GetGPUMemoryGiB() const;

                    /**
                     * 设置<p>单台实例全部 GPU 的总显存，单位 GiB；不需要再乘 GPUNum。0 表示展示元数据未维护。</p>
                     * @param _gPUMemoryGiB <p>单台实例全部 GPU 的总显存，单位 GiB；不需要再乘 GPUNum。0 表示展示元数据未维护。</p>
                     * 
                     */
                    void SetGPUMemoryGiB(const uint64_t& _gPUMemoryGiB);

                    /**
                     * 判断参数 GPUMemoryGiB 是否已赋值
                     * @return GPUMemoryGiB 是否已赋值
                     * 
                     */
                    bool GPUMemoryGiBHasBeenSet() const;

                    /**
                     * 获取<p>单台实例 CPU 核数。</p>
                     * @return CPU <p>单台实例 CPU 核数。</p>
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置<p>单台实例 CPU 核数。</p>
                     * @param _cPU <p>单台实例 CPU 核数。</p>
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
                     * 获取<p>单台实例主机内存，单位 GiB；不是 GPU 显存。</p>
                     * @return Memory <p>单台实例主机内存，单位 GiB；不是 GPU 显存。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>单台实例主机内存，单位 GiB；不是 GPU 显存。</p>
                     * @param _memory <p>单台实例主机内存，单位 GiB；不是 GPU 显存。</p>
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
                     * 获取<p>单台实例的 GPU 卡数。</p>
                     * @return GPUNum <p>单台实例的 GPU 卡数。</p>
                     * 
                     */
                    uint64_t GetGPUNum() const;

                    /**
                     * 设置<p>单台实例的 GPU 卡数。</p>
                     * @param _gPUNum <p>单台实例的 GPU 卡数。</p>
                     * 
                     */
                    void SetGPUNum(const uint64_t& _gPUNum);

                    /**
                     * 判断参数 GPUNum 是否已赋值
                     * @return GPUNum 是否已赋值
                     * 
                     */
                    bool GPUNumHasBeenSet() const;

                private:

                    /**
                     * <p>GPU 类型标识，例如 5090d。</p>
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * <p>GPU 类型展示名称；为空时使用 GPUType 展示。</p>
                     */
                    std::string m_gPUTypeAlias;
                    bool m_gPUTypeAliasHasBeenSet;

                    /**
                     * <p>单台实例全部 GPU 的总显存，单位 GiB；不需要再乘 GPUNum。0 表示展示元数据未维护。</p>
                     */
                    uint64_t m_gPUMemoryGiB;
                    bool m_gPUMemoryGiBHasBeenSet;

                    /**
                     * <p>单台实例 CPU 核数。</p>
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>单台实例主机内存，单位 GiB；不是 GPU 显存。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>单台实例的 GPU 卡数。</p>
                     */
                    uint64_t m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUPSPEC_H_
