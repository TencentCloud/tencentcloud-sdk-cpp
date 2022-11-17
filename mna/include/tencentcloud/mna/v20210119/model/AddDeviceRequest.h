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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDDEVICEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * AddDevice请求参数结构体
                */
                class AddDeviceRequest : public AbstractModel
                {
                public:
                    AddDeviceRequest();
                    ~AddDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新建设备的名称
                     * @return DeviceName 新建设备的名称
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置新建设备的名称
                     * @param DeviceName 新建设备的名称
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取新建设备的备注
                     * @return Remark 新建设备的备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置新建设备的备注
                     * @param Remark 新建设备的备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * @return DataKey 新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     */
                    std::string GetDataKey() const;

                    /**
                     * 设置新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * @param DataKey 新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     */
                    void SetDataKey(const std::string& _dataKey);

                    /**
                     * 判断参数 DataKey 是否已赋值
                     * @return DataKey 是否已赋值
                     */
                    bool DataKeyHasBeenSet() const;

                    /**
                     * 获取是否设置预置密钥
                     * @return Encrypted 是否设置预置密钥
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置是否设置预置密钥
                     * @param Encrypted 是否设置预置密钥
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     */
                    bool EncryptedHasBeenSet() const;

                private:

                    /**
                     * 新建设备的名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 新建设备的备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 新建设备的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     */
                    std::string m_dataKey;
                    bool m_dataKeyHasBeenSet;

                    /**
                     * 是否设置预置密钥
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDDEVICEREQUEST_H_
