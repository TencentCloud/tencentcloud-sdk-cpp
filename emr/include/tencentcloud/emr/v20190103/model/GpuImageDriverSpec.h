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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GPUIMAGEDRIVERSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GPUIMAGEDRIVERSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * GPU机型镜像与驱动配置
                */
                class GpuImageDriverSpec : public AbstractModel
                {
                public:
                    GpuImageDriverSpec();
                    ~GpuImageDriverSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像ID</p>
                     * @return ImageId <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID</p>
                     * @param _imageId <p>镜像ID</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>驱动名称</p>
                     * @return DriverName <p>驱动名称</p>
                     * 
                     */
                    std::string GetDriverName() const;

                    /**
                     * 设置<p>驱动名称</p>
                     * @param _driverName <p>驱动名称</p>
                     * 
                     */
                    void SetDriverName(const std::string& _driverName);

                    /**
                     * 判断参数 DriverName 是否已赋值
                     * @return DriverName 是否已赋值
                     * 
                     */
                    bool DriverNameHasBeenSet() const;

                    /**
                     * 获取<p>驱动版本</p>
                     * @return DriverVersion <p>驱动版本</p>
                     * 
                     */
                    std::string GetDriverVersion() const;

                    /**
                     * 设置<p>驱动版本</p>
                     * @param _driverVersion <p>驱动版本</p>
                     * 
                     */
                    void SetDriverVersion(const std::string& _driverVersion);

                    /**
                     * 判断参数 DriverVersion 是否已赋值
                     * @return DriverVersion 是否已赋值
                     * 
                     */
                    bool DriverVersionHasBeenSet() const;

                    /**
                     * 获取<p>CUDA名称</p>
                     * @return CUDAName <p>CUDA名称</p>
                     * 
                     */
                    std::string GetCUDAName() const;

                    /**
                     * 设置<p>CUDA名称</p>
                     * @param _cUDAName <p>CUDA名称</p>
                     * 
                     */
                    void SetCUDAName(const std::string& _cUDAName);

                    /**
                     * 判断参数 CUDAName 是否已赋值
                     * @return CUDAName 是否已赋值
                     * 
                     */
                    bool CUDANameHasBeenSet() const;

                    /**
                     * 获取<p>CUDA版本</p>
                     * @return CUDAVersion <p>CUDA版本</p>
                     * 
                     */
                    std::string GetCUDAVersion() const;

                    /**
                     * 设置<p>CUDA版本</p>
                     * @param _cUDAVersion <p>CUDA版本</p>
                     * 
                     */
                    void SetCUDAVersion(const std::string& _cUDAVersion);

                    /**
                     * 判断参数 CUDAVersion 是否已赋值
                     * @return CUDAVersion 是否已赋值
                     * 
                     */
                    bool CUDAVersionHasBeenSet() const;

                    /**
                     * 获取<p>CUDNN名称</p>
                     * @return CUDNNName <p>CUDNN名称</p>
                     * 
                     */
                    std::string GetCUDNNName() const;

                    /**
                     * 设置<p>CUDNN名称</p>
                     * @param _cUDNNName <p>CUDNN名称</p>
                     * 
                     */
                    void SetCUDNNName(const std::string& _cUDNNName);

                    /**
                     * 判断参数 CUDNNName 是否已赋值
                     * @return CUDNNName 是否已赋值
                     * 
                     */
                    bool CUDNNNameHasBeenSet() const;

                    /**
                     * 获取<p>CUDNN版本</p>
                     * @return CUDNNVersion <p>CUDNN版本</p>
                     * 
                     */
                    std::string GetCUDNNVersion() const;

                    /**
                     * 设置<p>CUDNN版本</p>
                     * @param _cUDNNVersion <p>CUDNN版本</p>
                     * 
                     */
                    void SetCUDNNVersion(const std::string& _cUDNNVersion);

                    /**
                     * 判断参数 CUDNNVersion 是否已赋值
                     * @return CUDNNVersion 是否已赋值
                     * 
                     */
                    bool CUDNNVersionHasBeenSet() const;

                private:

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>驱动名称</p>
                     */
                    std::string m_driverName;
                    bool m_driverNameHasBeenSet;

                    /**
                     * <p>驱动版本</p>
                     */
                    std::string m_driverVersion;
                    bool m_driverVersionHasBeenSet;

                    /**
                     * <p>CUDA名称</p>
                     */
                    std::string m_cUDAName;
                    bool m_cUDANameHasBeenSet;

                    /**
                     * <p>CUDA版本</p>
                     */
                    std::string m_cUDAVersion;
                    bool m_cUDAVersionHasBeenSet;

                    /**
                     * <p>CUDNN名称</p>
                     */
                    std::string m_cUDNNName;
                    bool m_cUDNNNameHasBeenSet;

                    /**
                     * <p>CUDNN版本</p>
                     */
                    std::string m_cUDNNVersion;
                    bool m_cUDNNVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GPUIMAGEDRIVERSPEC_H_
