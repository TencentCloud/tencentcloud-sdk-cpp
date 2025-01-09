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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REGISTEREDDEVICENETTYPEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REGISTEREDDEVICENETTYPEINFO_H_

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
                * 已注册通信类型信息
                */
                class RegisteredDeviceNetTypeInfo : public AbstractModel
                {
                public:
                    RegisteredDeviceNetTypeInfo();
                    ~RegisteredDeviceNetTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取普通设备数
                     * @return NormalDeviceNum 普通设备数
                     * 
                     */
                    int64_t GetNormalDeviceNum() const;

                    /**
                     * 设置普通设备数
                     * @param _normalDeviceNum 普通设备数
                     * 
                     */
                    void SetNormalDeviceNum(const int64_t& _normalDeviceNum);

                    /**
                     * 判断参数 NormalDeviceNum 是否已赋值
                     * @return NormalDeviceNum 是否已赋值
                     * 
                     */
                    bool NormalDeviceNumHasBeenSet() const;

                    /**
                     * 获取蓝牙设备数
                     * @return BluetoothDeviceNum 蓝牙设备数
                     * 
                     */
                    int64_t GetBluetoothDeviceNum() const;

                    /**
                     * 设置蓝牙设备数
                     * @param _bluetoothDeviceNum 蓝牙设备数
                     * 
                     */
                    void SetBluetoothDeviceNum(const int64_t& _bluetoothDeviceNum);

                    /**
                     * 判断参数 BluetoothDeviceNum 是否已赋值
                     * @return BluetoothDeviceNum 是否已赋值
                     * 
                     */
                    bool BluetoothDeviceNumHasBeenSet() const;

                private:

                    /**
                     * 普通设备数
                     */
                    int64_t m_normalDeviceNum;
                    bool m_normalDeviceNumHasBeenSet;

                    /**
                     * 蓝牙设备数
                     */
                    int64_t m_bluetoothDeviceNum;
                    bool m_bluetoothDeviceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REGISTEREDDEVICENETTYPEINFO_H_
