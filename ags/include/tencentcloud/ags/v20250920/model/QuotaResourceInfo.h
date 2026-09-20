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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_QUOTARESOURCEINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_QUOTARESOURCEINFO_H_

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
                * 主账号资源信息
                */
                class QuotaResourceInfo : public AbstractModel
                {
                public:
                    QuotaResourceInfo();
                    ~QuotaResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>沙箱工具配额或当前用量</p><p>单位：个</p>
                     * @return SandboxTools <p>沙箱工具配额或当前用量</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetSandboxTools() const;

                    /**
                     * 设置<p>沙箱工具配额或当前用量</p><p>单位：个</p>
                     * @param _sandboxTools <p>沙箱工具配额或当前用量</p><p>单位：个</p>
                     * 
                     */
                    void SetSandboxTools(const int64_t& _sandboxTools);

                    /**
                     * 判断参数 SandboxTools 是否已赋值
                     * @return SandboxTools 是否已赋值
                     * 
                     */
                    bool SandboxToolsHasBeenSet() const;

                    /**
                     * 获取<p>沙箱实例配额或当前用量</p><p>单位：个</p>
                     * @return SandboxInstances <p>沙箱实例配额或当前用量</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetSandboxInstances() const;

                    /**
                     * 设置<p>沙箱实例配额或当前用量</p><p>单位：个</p>
                     * @param _sandboxInstances <p>沙箱实例配额或当前用量</p><p>单位：个</p>
                     * 
                     */
                    void SetSandboxInstances(const int64_t& _sandboxInstances);

                    /**
                     * 判断参数 SandboxInstances 是否已赋值
                     * @return SandboxInstances 是否已赋值
                     * 
                     */
                    bool SandboxInstancesHasBeenSet() const;

                    /**
                     * 获取<p>暂停实例配额或当前用量</p><p>单位：个</p>
                     * @return PausedInstances <p>暂停实例配额或当前用量</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetPausedInstances() const;

                    /**
                     * 设置<p>暂停实例配额或当前用量</p><p>单位：个</p>
                     * @param _pausedInstances <p>暂停实例配额或当前用量</p><p>单位：个</p>
                     * 
                     */
                    void SetPausedInstances(const int64_t& _pausedInstances);

                    /**
                     * 判断参数 PausedInstances 是否已赋值
                     * @return PausedInstances 是否已赋值
                     * 
                     */
                    bool PausedInstancesHasBeenSet() const;

                    /**
                     * 获取<p>暂停实例配额或当前用量。目前只在主账号中返回</p><p>单位：核</p>
                     * @return CPUCores <p>暂停实例配额或当前用量。目前只在主账号中返回</p><p>单位：核</p>
                     * 
                     */
                    double GetCPUCores() const;

                    /**
                     * 设置<p>暂停实例配额或当前用量。目前只在主账号中返回</p><p>单位：核</p>
                     * @param _cPUCores <p>暂停实例配额或当前用量。目前只在主账号中返回</p><p>单位：核</p>
                     * 
                     */
                    void SetCPUCores(const double& _cPUCores);

                    /**
                     * 判断参数 CPUCores 是否已赋值
                     * @return CPUCores 是否已赋值
                     * 
                     */
                    bool CPUCoresHasBeenSet() const;

                    /**
                     * 获取<p>内存配额或当前用量</p><p>单位：GiB</p>
                     * @return MemoryGiB <p>内存配额或当前用量</p><p>单位：GiB</p>
                     * 
                     */
                    double GetMemoryGiB() const;

                    /**
                     * 设置<p>内存配额或当前用量</p><p>单位：GiB</p>
                     * @param _memoryGiB <p>内存配额或当前用量</p><p>单位：GiB</p>
                     * 
                     */
                    void SetMemoryGiB(const double& _memoryGiB);

                    /**
                     * 判断参数 MemoryGiB 是否已赋值
                     * @return MemoryGiB 是否已赋值
                     * 
                     */
                    bool MemoryGiBHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱工具配额或当前用量</p><p>单位：个</p>
                     */
                    int64_t m_sandboxTools;
                    bool m_sandboxToolsHasBeenSet;

                    /**
                     * <p>沙箱实例配额或当前用量</p><p>单位：个</p>
                     */
                    int64_t m_sandboxInstances;
                    bool m_sandboxInstancesHasBeenSet;

                    /**
                     * <p>暂停实例配额或当前用量</p><p>单位：个</p>
                     */
                    int64_t m_pausedInstances;
                    bool m_pausedInstancesHasBeenSet;

                    /**
                     * <p>暂停实例配额或当前用量。目前只在主账号中返回</p><p>单位：核</p>
                     */
                    double m_cPUCores;
                    bool m_cPUCoresHasBeenSet;

                    /**
                     * <p>内存配额或当前用量</p><p>单位：GiB</p>
                     */
                    double m_memoryGiB;
                    bool m_memoryGiBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_QUOTARESOURCEINFO_H_
