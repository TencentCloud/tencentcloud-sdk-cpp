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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_GPUCONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_GPUCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/GPUParams.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 机型名称与GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric等相关配置信息
                */
                class GPUConfig : public AbstractModel
                {
                public:
                    GPUConfig();
                    ~GPUConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUParams GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GPUParams GetGPUParams() const;

                    /**
                     * 设置GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPUParams GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGPUParams(const GPUParams& _gPUParams);

                    /**
                     * 判断参数 GPUParams 是否已赋值
                     * @return GPUParams 是否已赋值
                     * 
                     */
                    bool GPUParamsHasBeenSet() const;

                private:

                    /**
                     * 机型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GPUParams m_gPUParams;
                    bool m_gPUParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_GPUCONFIG_H_
