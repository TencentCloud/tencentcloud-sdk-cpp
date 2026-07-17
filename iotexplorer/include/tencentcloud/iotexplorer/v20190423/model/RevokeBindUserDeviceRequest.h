/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REVOKEBINDUSERDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REVOKEBINDUSERDEVICEREQUEST_H_

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
                * RevokeBindUserDevice请求参数结构体
                */
                class RevokeBindUserDeviceRequest : public AbstractModel
                {
                public:
                    RevokeBindUserDeviceRequest();
                    ~RevokeBindUserDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 AppKey，用于解析 IotAppID 并完成签名校验</p>
                     * @return AppKey <p>应用 AppKey，用于解析 IotAppID 并完成签名校验</p>
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置<p>应用 AppKey，用于解析 IotAppID 并完成签名校验</p>
                     * @param _appKey <p>应用 AppKey，用于解析 IotAppID 并完成签名校验</p>
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
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
                     * 获取<p>设备名</p>
                     * @return DeviceName <p>设备名</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名</p>
                     * @param _deviceName <p>设备名</p>
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
                     * 获取<p>用户 OpenID（仅只读定位，不会创建）</p>
                     * @return OpenID <p>用户 OpenID（仅只读定位，不会创建）</p>
                     * 
                     */
                    std::string GetOpenID() const;

                    /**
                     * 设置<p>用户 OpenID（仅只读定位，不会创建）</p>
                     * @param _openID <p>用户 OpenID（仅只读定位，不会创建）</p>
                     * 
                     */
                    void SetOpenID(const std::string& _openID);

                    /**
                     * 判断参数 OpenID 是否已赋值
                     * @return OpenID 是否已赋值
                     * 
                     */
                    bool OpenIDHasBeenSet() const;

                    /**
                     * 获取<p>家庭名，默认 default</p>
                     * @return FamilyName <p>家庭名，默认 default</p>
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置<p>家庭名，默认 default</p>
                     * @param _familyName <p>家庭名，默认 default</p>
                     * 
                     */
                    void SetFamilyName(const std::string& _familyName);

                    /**
                     * 判断参数 FamilyName 是否已赋值
                     * @return FamilyName 是否已赋值
                     * 
                     */
                    bool FamilyNameHasBeenSet() const;

                private:

                    /**
                     * <p>应用 AppKey，用于解析 IotAppID 并完成签名校验</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>用户 OpenID（仅只读定位，不会创建）</p>
                     */
                    std::string m_openID;
                    bool m_openIDHasBeenSet;

                    /**
                     * <p>家庭名，默认 default</p>
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REVOKEBINDUSERDEVICEREQUEST_H_
