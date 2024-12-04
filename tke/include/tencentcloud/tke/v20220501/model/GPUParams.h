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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_GPUPARAMS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_GPUPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本，是否开启MIG以及是否开启Fabric
                */
                class GPUParams : public AbstractModel
                {
                public:
                    GPUParams();
                    ~GPUParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GPU驱动版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Driver GPU驱动版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置GPU驱动版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _driver GPU驱动版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDriver(const std::string& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                    /**
                     * 获取CUDA版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CUDA CUDA版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCUDA() const;

                    /**
                     * 设置CUDA版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cUDA CUDA版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCUDA(const std::string& _cUDA);

                    /**
                     * 判断参数 CUDA 是否已赋值
                     * @return CUDA 是否已赋值
                     * 
                     */
                    bool CUDAHasBeenSet() const;

                    /**
                     * 获取CUDNN版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CUDNN CUDNN版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCUDNN() const;

                    /**
                     * 设置CUDNN版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cUDNN CUDNN版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCUDNN(const std::string& _cUDNN);

                    /**
                     * 判断参数 CUDNN 是否已赋值
                     * @return CUDNN 是否已赋值
                     * 
                     */
                    bool CUDNNHasBeenSet() const;

                    /**
                     * 获取是否启用MIG特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MIGEnable 是否启用MIG特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMIGEnable() const;

                    /**
                     * 设置是否启用MIG特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mIGEnable 是否启用MIG特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMIGEnable(const bool& _mIGEnable);

                    /**
                     * 判断参数 MIGEnable 是否已赋值
                     * @return MIGEnable 是否已赋值
                     * 
                     */
                    bool MIGEnableHasBeenSet() const;

                    /**
                     * 获取是否启用Fabric特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fabric 是否启用Fabric特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetFabric() const;

                    /**
                     * 设置是否启用Fabric特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fabric 是否启用Fabric特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFabric(const bool& _fabric);

                    /**
                     * 判断参数 Fabric 是否已赋值
                     * @return Fabric 是否已赋值
                     * 
                     */
                    bool FabricHasBeenSet() const;

                    /**
                     * 获取自定义驱动下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomGPUDriver 自定义驱动下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomGPUDriver() const;

                    /**
                     * 设置自定义驱动下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customGPUDriver 自定义驱动下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomGPUDriver(const std::string& _customGPUDriver);

                    /**
                     * 判断参数 CustomGPUDriver 是否已赋值
                     * @return CustomGPUDriver 是否已赋值
                     * 
                     */
                    bool CustomGPUDriverHasBeenSet() const;

                private:

                    /**
                     * GPU驱动版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                    /**
                     * CUDA版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cUDA;
                    bool m_cUDAHasBeenSet;

                    /**
                     * CUDNN版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cUDNN;
                    bool m_cUDNNHasBeenSet;

                    /**
                     * 是否启用MIG特性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_mIGEnable;
                    bool m_mIGEnableHasBeenSet;

                    /**
                     * 是否启用Fabric特性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_fabric;
                    bool m_fabricHasBeenSet;

                    /**
                     * 自定义驱动下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customGPUDriver;
                    bool m_customGPUDriverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_GPUPARAMS_H_
