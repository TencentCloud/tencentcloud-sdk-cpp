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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENGINECAPABILITIES_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENGINECAPABILITIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ParallelKeyMapping.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 描述一个推理引擎的能力
                */
                class EngineCapabilities : public AbstractModel
                {
                public:
                    EngineCapabilities();
                    ~EngineCapabilities() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>GPU 是否可选</p>
                     * @return GpuOptional <p>GPU 是否可选</p>
                     * 
                     */
                    bool GetGpuOptional() const;

                    /**
                     * 设置<p>GPU 是否可选</p>
                     * @param _gpuOptional <p>GPU 是否可选</p>
                     * 
                     */
                    void SetGpuOptional(const bool& _gpuOptional);

                    /**
                     * 判断参数 GpuOptional 是否已赋值
                     * @return GpuOptional 是否已赋值
                     * 
                     */
                    bool GpuOptionalHasBeenSet() const;

                    /**
                     * 获取<p>是否支持并行配置</p>
                     * @return SupportsParallelConfig <p>是否支持并行配置</p>
                     * 
                     */
                    bool GetSupportsParallelConfig() const;

                    /**
                     * 设置<p>是否支持并行配置</p>
                     * @param _supportsParallelConfig <p>是否支持并行配置</p>
                     * 
                     */
                    void SetSupportsParallelConfig(const bool& _supportsParallelConfig);

                    /**
                     * 判断参数 SupportsParallelConfig 是否已赋值
                     * @return SupportsParallelConfig 是否已赋值
                     * 
                     */
                    bool SupportsParallelConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否支持远程代码</p>
                     * @return SupportsRemoteCode <p>是否支持远程代码</p>
                     * 
                     */
                    bool GetSupportsRemoteCode() const;

                    /**
                     * 设置<p>是否支持远程代码</p>
                     * @param _supportsRemoteCode <p>是否支持远程代码</p>
                     * 
                     */
                    void SetSupportsRemoteCode(const bool& _supportsRemoteCode);

                    /**
                     * 判断参数 SupportsRemoteCode 是否已赋值
                     * @return SupportsRemoteCode 是否已赋值
                     * 
                     */
                    bool SupportsRemoteCodeHasBeenSet() const;

                    /**
                     * 获取<p>GPU 显存配置键名</p>
                     * @return GpuMemoryKey <p>GPU 显存配置键名</p>
                     * 
                     */
                    std::string GetGpuMemoryKey() const;

                    /**
                     * 设置<p>GPU 显存配置键名</p>
                     * @param _gpuMemoryKey <p>GPU 显存配置键名</p>
                     * 
                     */
                    void SetGpuMemoryKey(const std::string& _gpuMemoryKey);

                    /**
                     * 判断参数 GpuMemoryKey 是否已赋值
                     * @return GpuMemoryKey 是否已赋值
                     * 
                     */
                    bool GpuMemoryKeyHasBeenSet() const;

                    /**
                     * 获取<p>并行配置键名列表</p>
                     * @return ParallelKeys <p>并行配置键名列表</p>
                     * 
                     */
                    std::vector<ParallelKeyMapping> GetParallelKeys() const;

                    /**
                     * 设置<p>并行配置键名列表</p>
                     * @param _parallelKeys <p>并行配置键名列表</p>
                     * 
                     */
                    void SetParallelKeys(const std::vector<ParallelKeyMapping>& _parallelKeys);

                    /**
                     * 判断参数 ParallelKeys 是否已赋值
                     * @return ParallelKeys 是否已赋值
                     * 
                     */
                    bool ParallelKeysHasBeenSet() const;

                private:

                    /**
                     * <p>GPU 是否可选</p>
                     */
                    bool m_gpuOptional;
                    bool m_gpuOptionalHasBeenSet;

                    /**
                     * <p>是否支持并行配置</p>
                     */
                    bool m_supportsParallelConfig;
                    bool m_supportsParallelConfigHasBeenSet;

                    /**
                     * <p>是否支持远程代码</p>
                     */
                    bool m_supportsRemoteCode;
                    bool m_supportsRemoteCodeHasBeenSet;

                    /**
                     * <p>GPU 显存配置键名</p>
                     */
                    std::string m_gpuMemoryKey;
                    bool m_gpuMemoryKeyHasBeenSet;

                    /**
                     * <p>并行配置键名列表</p>
                     */
                    std::vector<ParallelKeyMapping> m_parallelKeys;
                    bool m_parallelKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENGINECAPABILITIES_H_
