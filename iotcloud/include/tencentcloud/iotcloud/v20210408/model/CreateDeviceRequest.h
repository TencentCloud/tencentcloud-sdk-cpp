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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/Attribute.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateDevice请求参数结构体
                */
                class CreateDeviceRequest : public AbstractModel
                {
                public:
                    CreateDeviceRequest();
                    ~CreateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID 。创建产品时腾讯云为用户分配全局唯一的 ID
                     * @return ProductId 产品 ID 。创建产品时腾讯云为用户分配全局唯一的 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID 。创建产品时腾讯云为用户分配全局唯一的 ID
                     * @param _productId 产品 ID 。创建产品时腾讯云为用户分配全局唯一的 ID
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
                     * 获取设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     * @return DeviceName 设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     * @param _deviceName 设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
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
                     * 获取设备属性
                     * @return Attribute 设备属性
                     * 
                     */
                    Attribute GetAttribute() const;

                    /**
                     * 设置设备属性
                     * @param _attribute 设备属性
                     * 
                     */
                    void SetAttribute(const Attribute& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取是否使用自定义PSK，默认不使用
                     * @return DefinedPsk 是否使用自定义PSK，默认不使用
                     * 
                     */
                    std::string GetDefinedPsk() const;

                    /**
                     * 设置是否使用自定义PSK，默认不使用
                     * @param _definedPsk 是否使用自定义PSK，默认不使用
                     * 
                     */
                    void SetDefinedPsk(const std::string& _definedPsk);

                    /**
                     * 判断参数 DefinedPsk 是否已赋值
                     * @return DefinedPsk 是否已赋值
                     * 
                     */
                    bool DefinedPskHasBeenSet() const;

                    /**
                     * 获取运营商类型，当产品是NB-IoT产品时，此字段必填。1表示中国电信，2表示中国移动，3表示中国联通
                     * @return Isp 运营商类型，当产品是NB-IoT产品时，此字段必填。1表示中国电信，2表示中国移动，3表示中国联通
                     * 
                     */
                    uint64_t GetIsp() const;

                    /**
                     * 设置运营商类型，当产品是NB-IoT产品时，此字段必填。1表示中国电信，2表示中国移动，3表示中国联通
                     * @param _isp 运营商类型，当产品是NB-IoT产品时，此字段必填。1表示中国电信，2表示中国移动，3表示中国联通
                     * 
                     */
                    void SetIsp(const uint64_t& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取IMEI，当产品是NB-IoT产品时，此字段必填
                     * @return Imei IMEI，当产品是NB-IoT产品时，此字段必填
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置IMEI，当产品是NB-IoT产品时，此字段必填
                     * @param _imei IMEI，当产品是NB-IoT产品时，此字段必填
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取LoRa设备的DevEui，当创建LoRa时，此字段必填
                     * @return LoraDevEui LoRa设备的DevEui，当创建LoRa时，此字段必填
                     * 
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 设置LoRa设备的DevEui，当创建LoRa时，此字段必填
                     * @param _loraDevEui LoRa设备的DevEui，当创建LoRa时，此字段必填
                     * 
                     */
                    void SetLoraDevEui(const std::string& _loraDevEui);

                    /**
                     * 判断参数 LoraDevEui 是否已赋值
                     * @return LoraDevEui 是否已赋值
                     * 
                     */
                    bool LoraDevEuiHasBeenSet() const;

                    /**
                     * 获取LoRa设备的MoteType
                     * @return LoraMoteType LoRa设备的MoteType
                     * 
                     */
                    uint64_t GetLoraMoteType() const;

                    /**
                     * 设置LoRa设备的MoteType
                     * @param _loraMoteType LoRa设备的MoteType
                     * 
                     */
                    void SetLoraMoteType(const uint64_t& _loraMoteType);

                    /**
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     * 
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取创建LoRa设备需要skey
                     * @return Skey 创建LoRa设备需要skey
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置创建LoRa设备需要skey
                     * @param _skey 创建LoRa设备需要skey
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取LoRa设备的AppKey
                     * @return LoraAppKey LoRa设备的AppKey
                     * 
                     */
                    std::string GetLoraAppKey() const;

                    /**
                     * 设置LoRa设备的AppKey
                     * @param _loraAppKey LoRa设备的AppKey
                     * 
                     */
                    void SetLoraAppKey(const std::string& _loraAppKey);

                    /**
                     * 判断参数 LoraAppKey 是否已赋值
                     * @return LoraAppKey 是否已赋值
                     * 
                     */
                    bool LoraAppKeyHasBeenSet() const;

                    /**
                     * 获取私有CA创建的设备证书
                     * @return TlsCrt 私有CA创建的设备证书
                     * 
                     */
                    std::string GetTlsCrt() const;

                    /**
                     * 设置私有CA创建的设备证书
                     * @param _tlsCrt 私有CA创建的设备证书
                     * 
                     */
                    void SetTlsCrt(const std::string& _tlsCrt);

                    /**
                     * 判断参数 TlsCrt 是否已赋值
                     * @return TlsCrt 是否已赋值
                     * 
                     */
                    bool TlsCrtHasBeenSet() const;

                private:

                    /**
                     * 产品 ID 。创建产品时腾讯云为用户分配全局唯一的 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称。命名规则：[a-zA-Z0-9:_-]{1,48}。
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备属性
                     */
                    Attribute m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * 是否使用自定义PSK，默认不使用
                     */
                    std::string m_definedPsk;
                    bool m_definedPskHasBeenSet;

                    /**
                     * 运营商类型，当产品是NB-IoT产品时，此字段必填。1表示中国电信，2表示中国移动，3表示中国联通
                     */
                    uint64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * IMEI，当产品是NB-IoT产品时，此字段必填
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * LoRa设备的DevEui，当创建LoRa时，此字段必填
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * LoRa设备的MoteType
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * 创建LoRa设备需要skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * LoRa设备的AppKey
                     */
                    std::string m_loraAppKey;
                    bool m_loraAppKeyHasBeenSet;

                    /**
                     * 私有CA创建的设备证书
                     */
                    std::string m_tlsCrt;
                    bool m_tlsCrtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICEREQUEST_H_
