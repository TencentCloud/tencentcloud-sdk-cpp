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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_AVAILABLEMODELVERSION_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_AVAILABLEMODELVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 已通过设备型号评估的型号信息
                */
                class AvailableModelVersion : public AbstractModel
                {
                public:
                    AvailableModelVersion();
                    ~AvailableModelVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带有版本号的设备型号
                     * @return ModelVersion 带有版本号的设备型号
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置带有版本号的设备型号
                     * @param _modelVersion 带有版本号的设备型号
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取设备高度
                     * @return DevHeight 设备高度
                     * 
                     */
                    std::string GetDevHeight() const;

                    /**
                     * 设置设备高度
                     * @param _devHeight 设备高度
                     * 
                     */
                    void SetDevHeight(const std::string& _devHeight);

                    /**
                     * 判断参数 DevHeight 是否已赋值
                     * @return DevHeight 是否已赋值
                     * 
                     */
                    bool DevHeightHasBeenSet() const;

                    /**
                     * 获取设备类型，server 服务器，netDevice 网络设备
                     * @return DeviceType 设备类型，server 服务器，netDevice 网络设备
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，server 服务器，netDevice 网络设备
                     * @param _deviceType 设备类型，server 服务器，netDevice 网络设备
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 带有版本号的设备型号
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 设备高度
                     */
                    std::string m_devHeight;
                    bool m_devHeightHasBeenSet;

                    /**
                     * 设备类型，server 服务器，netDevice 网络设备
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_AVAILABLEMODELVERSION_H_
