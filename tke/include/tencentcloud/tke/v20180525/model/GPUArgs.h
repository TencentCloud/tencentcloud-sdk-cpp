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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GPUARGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GPUARGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/DriverVersion.h>
#include <tencentcloud/tke/v20180525/model/CUDNN.h>
#include <tencentcloud/tke/v20180525/model/CustomDriver.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GPU相关的参数，包括驱动版本，CUDA版本，cuDNN版本以及是否开启MIG
                */
                class GPUArgs : public AbstractModel
                {
                public:
                    GPUArgs();
                    ~GPUArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CUDA版本信息
                     * @return CUDA CUDA版本信息
                     * 
                     */
                    DriverVersion GetCUDA() const;

                    /**
                     * 设置CUDA版本信息
                     * @param _cUDA CUDA版本信息
                     * 
                     */
                    void SetCUDA(const DriverVersion& _cUDA);

                    /**
                     * 判断参数 CUDA 是否已赋值
                     * @return CUDA 是否已赋值
                     * 
                     */
                    bool CUDAHasBeenSet() const;

                    /**
                     * 获取cuDNN版本信息
                     * @return CUDNN cuDNN版本信息
                     * 
                     */
                    CUDNN GetCUDNN() const;

                    /**
                     * 设置cuDNN版本信息
                     * @param _cUDNN cuDNN版本信息
                     * 
                     */
                    void SetCUDNN(const CUDNN& _cUDNN);

                    /**
                     * 判断参数 CUDNN 是否已赋值
                     * @return CUDNN 是否已赋值
                     * 
                     */
                    bool CUDNNHasBeenSet() const;

                    /**
                     * 获取自定义GPU驱动信息
                     * @return CustomDriver 自定义GPU驱动信息
                     * 
                     */
                    CustomDriver GetCustomDriver() const;

                    /**
                     * 设置自定义GPU驱动信息
                     * @param _customDriver 自定义GPU驱动信息
                     * 
                     */
                    void SetCustomDriver(const CustomDriver& _customDriver);

                    /**
                     * 判断参数 CustomDriver 是否已赋值
                     * @return CustomDriver 是否已赋值
                     * 
                     */
                    bool CustomDriverHasBeenSet() const;

                    /**
                     * 获取GPU驱动版本信息
                     * @return Driver GPU驱动版本信息
                     * 
                     */
                    DriverVersion GetDriver() const;

                    /**
                     * 设置GPU驱动版本信息
                     * @param _driver GPU驱动版本信息
                     * 
                     */
                    void SetDriver(const DriverVersion& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                    /**
                     * 获取是否启用MIG特性
                     * @return MIGEnable 是否启用MIG特性
                     * 
                     */
                    bool GetMIGEnable() const;

                    /**
                     * 设置是否启用MIG特性
                     * @param _mIGEnable 是否启用MIG特性
                     * 
                     */
                    void SetMIGEnable(const bool& _mIGEnable);

                    /**
                     * 判断参数 MIGEnable 是否已赋值
                     * @return MIGEnable 是否已赋值
                     * 
                     */
                    bool MIGEnableHasBeenSet() const;

                private:

                    /**
                     * CUDA版本信息
                     */
                    DriverVersion m_cUDA;
                    bool m_cUDAHasBeenSet;

                    /**
                     * cuDNN版本信息
                     */
                    CUDNN m_cUDNN;
                    bool m_cUDNNHasBeenSet;

                    /**
                     * 自定义GPU驱动信息
                     */
                    CustomDriver m_customDriver;
                    bool m_customDriverHasBeenSet;

                    /**
                     * GPU驱动版本信息
                     */
                    DriverVersion m_driver;
                    bool m_driverHasBeenSet;

                    /**
                     * 是否启用MIG特性
                     */
                    bool m_mIGEnable;
                    bool m_mIGEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GPUARGS_H_
