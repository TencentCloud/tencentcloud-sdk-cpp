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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEACTIVATIONDETAIL_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEACTIVATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 设备激活详情信息
                */
                class DeviceActivationDetail : public AbstractModel
                {
                public:
                    DeviceActivationDetail();
                    ~DeviceActivationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可注册设备数
                     * @return TotalDeviceNum 可注册设备数
                     * 
                     */
                    int64_t GetTotalDeviceNum() const;

                    /**
                     * 设置可注册设备数
                     * @param _totalDeviceNum 可注册设备数
                     * 
                     */
                    void SetTotalDeviceNum(const int64_t& _totalDeviceNum);

                    /**
                     * 判断参数 TotalDeviceNum 是否已赋值
                     * @return TotalDeviceNum 是否已赋值
                     * 
                     */
                    bool TotalDeviceNumHasBeenSet() const;

                    /**
                     * 获取已注册设备数
                     * @return UsedDeviceNum 已注册设备数
                     * 
                     */
                    int64_t GetUsedDeviceNum() const;

                    /**
                     * 设置已注册设备数
                     * @param _usedDeviceNum 已注册设备数
                     * 
                     */
                    void SetUsedDeviceNum(const int64_t& _usedDeviceNum);

                    /**
                     * 判断参数 UsedDeviceNum 是否已赋值
                     * @return UsedDeviceNum 是否已赋值
                     * 
                     */
                    bool UsedDeviceNumHasBeenSet() const;

                    /**
                     * 获取设备授权数
                     * @return TotalNormalLicense 设备授权数
                     * 
                     */
                    int64_t GetTotalNormalLicense() const;

                    /**
                     * 设置设备授权数
                     * @param _totalNormalLicense 设备授权数
                     * 
                     */
                    void SetTotalNormalLicense(const int64_t& _totalNormalLicense);

                    /**
                     * 判断参数 TotalNormalLicense 是否已赋值
                     * @return TotalNormalLicense 是否已赋值
                     * 
                     */
                    bool TotalNormalLicenseHasBeenSet() const;

                    /**
                     * 获取已使用设备授权数
                     * @return UsedNormalLicense 已使用设备授权数
                     * 
                     */
                    int64_t GetUsedNormalLicense() const;

                    /**
                     * 设置已使用设备授权数
                     * @param _usedNormalLicense 已使用设备授权数
                     * 
                     */
                    void SetUsedNormalLicense(const int64_t& _usedNormalLicense);

                    /**
                     * 判断参数 UsedNormalLicense 是否已赋值
                     * @return UsedNormalLicense 是否已赋值
                     * 
                     */
                    bool UsedNormalLicenseHasBeenSet() const;

                    /**
                     * 获取蓝牙授权数
                     * @return TotalBluetoothLicense 蓝牙授权数
                     * 
                     */
                    int64_t GetTotalBluetoothLicense() const;

                    /**
                     * 设置蓝牙授权数
                     * @param _totalBluetoothLicense 蓝牙授权数
                     * 
                     */
                    void SetTotalBluetoothLicense(const int64_t& _totalBluetoothLicense);

                    /**
                     * 判断参数 TotalBluetoothLicense 是否已赋值
                     * @return TotalBluetoothLicense 是否已赋值
                     * 
                     */
                    bool TotalBluetoothLicenseHasBeenSet() const;

                    /**
                     * 获取已使用蓝牙授权数
                     * @return UsedBluetoothLicense 已使用蓝牙授权数
                     * 
                     */
                    int64_t GetUsedBluetoothLicense() const;

                    /**
                     * 设置已使用蓝牙授权数
                     * @param _usedBluetoothLicense 已使用蓝牙授权数
                     * 
                     */
                    void SetUsedBluetoothLicense(const int64_t& _usedBluetoothLicense);

                    /**
                     * 判断参数 UsedBluetoothLicense 是否已赋值
                     * @return UsedBluetoothLicense 是否已赋值
                     * 
                     */
                    bool UsedBluetoothLicenseHasBeenSet() const;

                    /**
                     * 获取可免费注册设备数
                     * @return TotalFreeLicense 可免费注册设备数
                     * 
                     */
                    int64_t GetTotalFreeLicense() const;

                    /**
                     * 设置可免费注册设备数
                     * @param _totalFreeLicense 可免费注册设备数
                     * 
                     */
                    void SetTotalFreeLicense(const int64_t& _totalFreeLicense);

                    /**
                     * 判断参数 TotalFreeLicense 是否已赋值
                     * @return TotalFreeLicense 是否已赋值
                     * 
                     */
                    bool TotalFreeLicenseHasBeenSet() const;

                    /**
                     * 获取已使用注册设备数
                     * @return UsedFreeLicense 已使用注册设备数
                     * 
                     */
                    int64_t GetUsedFreeLicense() const;

                    /**
                     * 设置已使用注册设备数
                     * @param _usedFreeLicense 已使用注册设备数
                     * 
                     */
                    void SetUsedFreeLicense(const int64_t& _usedFreeLicense);

                    /**
                     * 判断参数 UsedFreeLicense 是否已赋值
                     * @return UsedFreeLicense 是否已赋值
                     * 
                     */
                    bool UsedFreeLicenseHasBeenSet() const;

                private:

                    /**
                     * 可注册设备数
                     */
                    int64_t m_totalDeviceNum;
                    bool m_totalDeviceNumHasBeenSet;

                    /**
                     * 已注册设备数
                     */
                    int64_t m_usedDeviceNum;
                    bool m_usedDeviceNumHasBeenSet;

                    /**
                     * 设备授权数
                     */
                    int64_t m_totalNormalLicense;
                    bool m_totalNormalLicenseHasBeenSet;

                    /**
                     * 已使用设备授权数
                     */
                    int64_t m_usedNormalLicense;
                    bool m_usedNormalLicenseHasBeenSet;

                    /**
                     * 蓝牙授权数
                     */
                    int64_t m_totalBluetoothLicense;
                    bool m_totalBluetoothLicenseHasBeenSet;

                    /**
                     * 已使用蓝牙授权数
                     */
                    int64_t m_usedBluetoothLicense;
                    bool m_usedBluetoothLicenseHasBeenSet;

                    /**
                     * 可免费注册设备数
                     */
                    int64_t m_totalFreeLicense;
                    bool m_totalFreeLicenseHasBeenSet;

                    /**
                     * 已使用注册设备数
                     */
                    int64_t m_usedFreeLicense;
                    bool m_usedFreeLicenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEACTIVATIONDETAIL_H_
