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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_OTHERDEVRECEIVINGINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_OTHERDEVRECEIVINGINFO_H_

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
                * 其他设备收货信息
                */
                class OtherDevReceivingInfo : public AbstractModel
                {
                public:
                    OtherDevReceivingInfo();
                    ~OtherDevReceivingInfo() = default;
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
                     * 获取'USB', '移动硬盘', '网络设备板卡', '网络设备模块', '服务器硬盘', '服务器内存', '其他'
                     * @return TypeName 'USB', '移动硬盘', '网络设备板卡', '网络设备模块', '服务器硬盘', '服务器内存', '其他'
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置'USB', '移动硬盘', '网络设备板卡', '网络设备模块', '服务器硬盘', '服务器内存', '其他'
                     * @param _typeName 'USB', '移动硬盘', '网络设备板卡', '网络设备模块', '服务器硬盘', '服务器内存', '其他'
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取厂商
                     * @return Manufacturer 厂商
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置厂商
                     * @param _manufacturer 厂商
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

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
                     * 'USB', '移动硬盘', '网络设备板卡', '网络设备模块', '服务器硬盘', '服务器内存', '其他'
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 厂商
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

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

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_OTHERDEVRECEIVINGINFO_H_
