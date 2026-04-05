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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_HPCGPUINFO_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_HPCGPUINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * HPC实例GPU
                */
                class HPCGPUInfo : public AbstractModel
                {
                public:
                    HPCGPUInfo();
                    ~HPCGPUInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GPU类型
                     * @return GPUType GPU类型
                     * 
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU类型
                     * @param _gPUType GPU类型
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
                     * 获取GPU数量
                     * @return GPUCount GPU数量
                     * 
                     */
                    double GetGPUCount() const;

                    /**
                     * 设置GPU数量
                     * @param _gPUCount GPU数量
                     * 
                     */
                    void SetGPUCount(const double& _gPUCount);

                    /**
                     * 判断参数 GPUCount 是否已赋值
                     * @return GPUCount 是否已赋值
                     * 
                     */
                    bool GPUCountHasBeenSet() const;

                private:

                    /**
                     * GPU类型
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * GPU数量
                     */
                    double m_gPUCount;
                    bool m_gPUCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_HPCGPUINFO_H_
