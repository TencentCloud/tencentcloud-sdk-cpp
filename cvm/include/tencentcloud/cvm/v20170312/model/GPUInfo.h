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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_GPUINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_GPUINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例GPU信息
                */
                class GPUInfo : public AbstractModel
                {
                public:
                    GPUInfo();
                    ~GPUInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例GPU个数。值小于1代表VGPU类型，大于1代表GPU直通类型。
                     * @return GPUCount 实例GPU个数。值小于1代表VGPU类型，大于1代表GPU直通类型。
                     * 
                     */
                    double GetGPUCount() const;

                    /**
                     * 设置实例GPU个数。值小于1代表VGPU类型，大于1代表GPU直通类型。
                     * @param _gPUCount 实例GPU个数。值小于1代表VGPU类型，大于1代表GPU直通类型。
                     * 
                     */
                    void SetGPUCount(const double& _gPUCount);

                    /**
                     * 判断参数 GPUCount 是否已赋值
                     * @return GPUCount 是否已赋值
                     * 
                     */
                    bool GPUCountHasBeenSet() const;

                    /**
                     * 获取实例GPU地址。
                     * @return GPUId 实例GPU地址。
                     * 
                     */
                    std::vector<std::string> GetGPUId() const;

                    /**
                     * 设置实例GPU地址。
                     * @param _gPUId 实例GPU地址。
                     * 
                     */
                    void SetGPUId(const std::vector<std::string>& _gPUId);

                    /**
                     * 判断参数 GPUId 是否已赋值
                     * @return GPUId 是否已赋值
                     * 
                     */
                    bool GPUIdHasBeenSet() const;

                    /**
                     * 获取实例GPU类型。
                     * @return GPUType 实例GPU类型。
                     * 
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置实例GPU类型。
                     * @param _gPUType 实例GPU类型。
                     * 
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     * 
                     */
                    bool GPUTypeHasBeenSet() const;

                private:

                    /**
                     * 实例GPU个数。值小于1代表VGPU类型，大于1代表GPU直通类型。
                     */
                    double m_gPUCount;
                    bool m_gPUCountHasBeenSet;

                    /**
                     * 实例GPU地址。
                     */
                    std::vector<std::string> m_gPUId;
                    bool m_gPUIdHasBeenSet;

                    /**
                     * 实例GPU类型。
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_GPUINFO_H_
