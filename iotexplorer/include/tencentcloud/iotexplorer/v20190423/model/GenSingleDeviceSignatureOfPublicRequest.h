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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENSINGLEDEVICESIGNATUREOFPUBLICREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENSINGLEDEVICESIGNATUREOFPUBLICREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GenSingleDeviceSignatureOfPublic请求参数结构体
                */
                class GenSingleDeviceSignatureOfPublicRequest : public AbstractModel
                {
                public:
                    GenSingleDeviceSignatureOfPublicRequest();
                    ~GenSingleDeviceSignatureOfPublicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备所属的产品ID
                     * @return ProductId 设备所属的产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置设备所属的产品ID
                     * @param _productId 设备所属的产品ID
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
                     * 获取需要绑定的设备
                     * @return DeviceName 需要绑定的设备
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置需要绑定的设备
                     * @param _deviceName 需要绑定的设备
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
                     * 获取设备绑定签名的有效时间,以秒为单位。取值范围：0 < Expire <= 86400，Expire == -1（十年）
                     * @return Expire 设备绑定签名的有效时间,以秒为单位。取值范围：0 < Expire <= 86400，Expire == -1（十年）
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置设备绑定签名的有效时间,以秒为单位。取值范围：0 < Expire <= 86400，Expire == -1（十年）
                     * @param _expire 设备绑定签名的有效时间,以秒为单位。取值范围：0 < Expire <= 86400，Expire == -1（十年）
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * 设备所属的产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 需要绑定的设备
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备绑定签名的有效时间,以秒为单位。取值范围：0 < Expire <= 86400，Expire == -1（十年）
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENSINGLEDEVICESIGNATUREOFPUBLICREQUEST_H_
