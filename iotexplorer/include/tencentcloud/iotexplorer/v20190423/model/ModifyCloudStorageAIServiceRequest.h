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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYCLOUDSTORAGEAISERVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYCLOUDSTORAGEAISERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DiarySHLConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyCloudStorageAIService请求参数结构体
                */
                class ModifyCloudStorageAIServiceRequest : public AbstractModel
                {
                public:
                    ModifyCloudStorageAIServiceRequest();
                    ~ModifyCloudStorageAIServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `SimpleHighlight`：TrueX SimpleHighlight
                     * @return ServiceType 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `SimpleHighlight`：TrueX SimpleHighlight
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `SimpleHighlight`：TrueX SimpleHighlight
                     * @param _serviceType 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `SimpleHighlight`：TrueX SimpleHighlight
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取视频分析启用状态
                     * @return Enabled 视频分析启用状态
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置视频分析启用状态
                     * @param _enabled 视频分析启用状态
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取视频分析识别区域
                     * @return ROI 视频分析识别区域
                     * 
                     */
                    std::string GetROI() const;

                    /**
                     * 设置视频分析识别区域
                     * @param _rOI 视频分析识别区域
                     * 
                     */
                    void SetROI(const std::string& _rOI);

                    /**
                     * 判断参数 ROI 是否已赋值
                     * @return ROI 是否已赋值
                     * 
                     */
                    bool ROIHasBeenSet() const;

                    /**
                     * 获取视频分析配置参数
                     * @return Config 视频分析配置参数
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置视频分析配置参数
                     * @param _config 视频分析配置参数
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取SimpleHighlight 算法配置参数
                     * @return SHLConfig SimpleHighlight 算法配置参数
                     * 
                     */
                    DiarySHLConfig GetSHLConfig() const;

                    /**
                     * 设置SimpleHighlight 算法配置参数
                     * @param _sHLConfig SimpleHighlight 算法配置参数
                     * 
                     */
                    void SetSHLConfig(const DiarySHLConfig& _sHLConfig);

                    /**
                     * 判断参数 SHLConfig 是否已赋值
                     * @return SHLConfig 是否已赋值
                     * 
                     */
                    bool SHLConfigHasBeenSet() const;

                private:

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `SimpleHighlight`：TrueX SimpleHighlight
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 视频分析启用状态
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 视频分析识别区域
                     */
                    std::string m_rOI;
                    bool m_rOIHasBeenSet;

                    /**
                     * 视频分析配置参数
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * SimpleHighlight 算法配置参数
                     */
                    DiarySHLConfig m_sHLConfig;
                    bool m_sHLConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYCLOUDSTORAGEAISERVICEREQUEST_H_
