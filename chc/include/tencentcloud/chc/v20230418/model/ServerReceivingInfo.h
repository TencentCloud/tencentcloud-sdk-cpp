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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_SERVERRECEIVINGINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_SERVERRECEIVINGINFO_H_

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
                * 服务器收货信息
                */
                class ServerReceivingInfo : public AbstractModel
                {
                public:
                    ServerReceivingInfo();
                    ~ServerReceivingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备sn
                     * @return DeviceSn 设备sn
                     * 
                     */
                    std::string GetDeviceSn() const;

                    /**
                     * 设置设备sn
                     * @param _deviceSn 设备sn
                     * 
                     */
                    void SetDeviceSn(const std::string& _deviceSn);

                    /**
                     * 判断参数 DeviceSn 是否已赋值
                     * @return DeviceSn 是否已赋值
                     * 
                     */
                    bool DeviceSnHasBeenSet() const;

                    /**
                     * 获取设备型号-版本
                     * @return ModelVersion 设备型号-版本
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置设备型号-版本
                     * @param _modelVersion 设备型号-版本
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
                     * 获取需要万兆机位
                     * @return Need10GbSlot 需要万兆机位
                     * 
                     */
                    std::string GetNeed10GbSlot() const;

                    /**
                     * 设置需要万兆机位
                     * @param _need10GbSlot 需要万兆机位
                     * 
                     */
                    void SetNeed10GbSlot(const std::string& _need10GbSlot);

                    /**
                     * 判断参数 Need10GbSlot 是否已赋值
                     * @return Need10GbSlot 是否已赋值
                     * 
                     */
                    bool Need10GbSlotHasBeenSet() const;

                    /**
                     * 获取需要直流电
                     * @return NeedDCPower 需要直流电
                     * 
                     */
                    std::string GetNeedDCPower() const;

                    /**
                     * 设置需要直流电
                     * @param _needDCPower 需要直流电
                     * 
                     */
                    void SetNeedDCPower(const std::string& _needDCPower);

                    /**
                     * 判断参数 NeedDCPower 是否已赋值
                     * @return NeedDCPower 是否已赋值
                     * 
                     */
                    bool NeedDCPowerHasBeenSet() const;

                    /**
                     * 获取需要外网
                     * @return NeedExtranet 需要外网
                     * 
                     */
                    std::string GetNeedExtranet() const;

                    /**
                     * 设置需要外网
                     * @param _needExtranet 需要外网
                     * 
                     */
                    void SetNeedExtranet(const std::string& _needExtranet);

                    /**
                     * 判断参数 NeedExtranet 是否已赋值
                     * @return NeedExtranet 是否已赋值
                     * 
                     */
                    bool NeedExtranetHasBeenSet() const;

                    /**
                     * 获取需要虚拟化
                     * @return NeedVirtualization 需要虚拟化
                     * 
                     */
                    std::string GetNeedVirtualization() const;

                    /**
                     * 设置需要虚拟化
                     * @param _needVirtualization 需要虚拟化
                     * 
                     */
                    void SetNeedVirtualization(const std::string& _needVirtualization);

                    /**
                     * 判断参数 NeedVirtualization 是否已赋值
                     * @return NeedVirtualization 是否已赋值
                     * 
                     */
                    bool NeedVirtualizationHasBeenSet() const;

                    /**
                     * 获取硬件备注
                     * @return HardwareMemo 硬件备注
                     * 
                     */
                    std::string GetHardwareMemo() const;

                    /**
                     * 设置硬件备注
                     * @param _hardwareMemo 硬件备注
                     * 
                     */
                    void SetHardwareMemo(const std::string& _hardwareMemo);

                    /**
                     * 判断参数 HardwareMemo 是否已赋值
                     * @return HardwareMemo 是否已赋值
                     * 
                     */
                    bool HardwareMemoHasBeenSet() const;

                private:

                    /**
                     * 设备sn
                     */
                    std::string m_deviceSn;
                    bool m_deviceSnHasBeenSet;

                    /**
                     * 设备型号-版本
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 需要万兆机位
                     */
                    std::string m_need10GbSlot;
                    bool m_need10GbSlotHasBeenSet;

                    /**
                     * 需要直流电
                     */
                    std::string m_needDCPower;
                    bool m_needDCPowerHasBeenSet;

                    /**
                     * 需要外网
                     */
                    std::string m_needExtranet;
                    bool m_needExtranetHasBeenSet;

                    /**
                     * 需要虚拟化
                     */
                    std::string m_needVirtualization;
                    bool m_needVirtualizationHasBeenSet;

                    /**
                     * 硬件备注
                     */
                    std::string m_hardwareMemo;
                    bool m_hardwareMemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_SERVERRECEIVINGINFO_H_
