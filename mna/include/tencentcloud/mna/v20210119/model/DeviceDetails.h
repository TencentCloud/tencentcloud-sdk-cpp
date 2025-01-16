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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEDETAILS_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/DeviceBaseInfo.h>
#include <tencentcloud/mna/v20210119/model/DeviceNetInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 设备详细信息
                */
                class DeviceDetails : public AbstractModel
                {
                public:
                    DeviceDetails();
                    ~DeviceDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备基本信息
                     * @return DeviceBaseInfo 设备基本信息
                     * 
                     */
                    DeviceBaseInfo GetDeviceBaseInfo() const;

                    /**
                     * 设置设备基本信息
                     * @param _deviceBaseInfo 设备基本信息
                     * 
                     */
                    void SetDeviceBaseInfo(const DeviceBaseInfo& _deviceBaseInfo);

                    /**
                     * 判断参数 DeviceBaseInfo 是否已赋值
                     * @return DeviceBaseInfo 是否已赋值
                     * 
                     */
                    bool DeviceBaseInfoHasBeenSet() const;

                    /**
                     * 获取设备网络信息
                     * @return DeviceNetInfo 设备网络信息
                     * 
                     */
                    std::vector<DeviceNetInfo> GetDeviceNetInfo() const;

                    /**
                     * 设置设备网络信息
                     * @param _deviceNetInfo 设备网络信息
                     * 
                     */
                    void SetDeviceNetInfo(const std::vector<DeviceNetInfo>& _deviceNetInfo);

                    /**
                     * 判断参数 DeviceNetInfo 是否已赋值
                     * @return DeviceNetInfo 是否已赋值
                     * 
                     */
                    bool DeviceNetInfoHasBeenSet() const;

                    /**
                     * 获取聚合服务器地址
                     * @return GatewaySite 聚合服务器地址
                     * 
                     */
                    std::string GetGatewaySite() const;

                    /**
                     * 设置聚合服务器地址
                     * @param _gatewaySite 聚合服务器地址
                     * 
                     */
                    void SetGatewaySite(const std::string& _gatewaySite);

                    /**
                     * 判断参数 GatewaySite 是否已赋值
                     * @return GatewaySite 是否已赋值
                     * 
                     */
                    bool GatewaySiteHasBeenSet() const;

                    /**
                     * 获取业务下行速率
                     * @return BusinessDownRate 业务下行速率
                     * 
                     */
                    double GetBusinessDownRate() const;

                    /**
                     * 设置业务下行速率
                     * @param _businessDownRate 业务下行速率
                     * 
                     */
                    void SetBusinessDownRate(const double& _businessDownRate);

                    /**
                     * 判断参数 BusinessDownRate 是否已赋值
                     * @return BusinessDownRate 是否已赋值
                     * 
                     */
                    bool BusinessDownRateHasBeenSet() const;

                    /**
                     * 获取业务上行速率
                     * @return BusinessUpRate 业务上行速率
                     * 
                     */
                    double GetBusinessUpRate() const;

                    /**
                     * 设置业务上行速率
                     * @param _businessUpRate 业务上行速率
                     * 
                     */
                    void SetBusinessUpRate(const double& _businessUpRate);

                    /**
                     * 判断参数 BusinessUpRate 是否已赋值
                     * @return BusinessUpRate 是否已赋值
                     * 
                     */
                    bool BusinessUpRateHasBeenSet() const;

                private:

                    /**
                     * 设备基本信息
                     */
                    DeviceBaseInfo m_deviceBaseInfo;
                    bool m_deviceBaseInfoHasBeenSet;

                    /**
                     * 设备网络信息
                     */
                    std::vector<DeviceNetInfo> m_deviceNetInfo;
                    bool m_deviceNetInfoHasBeenSet;

                    /**
                     * 聚合服务器地址
                     */
                    std::string m_gatewaySite;
                    bool m_gatewaySiteHasBeenSet;

                    /**
                     * 业务下行速率
                     */
                    double m_businessDownRate;
                    bool m_businessDownRateHasBeenSet;

                    /**
                     * 业务上行速率
                     */
                    double m_businessUpRate;
                    bool m_businessUpRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEDETAILS_H_
