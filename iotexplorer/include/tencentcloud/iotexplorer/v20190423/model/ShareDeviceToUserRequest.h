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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SHAREDEVICETOUSERREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SHAREDEVICETOUSERREQUEST_H_

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
                * ShareDeviceToUser请求参数结构体
                */
                class ShareDeviceToUserRequest : public AbstractModel
                {
                public:
                    ShareDeviceToUserRequest();
                    ~ShareDeviceToUserRequest() = default;
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
                     * 获取<p>设备所有者 OpenID（必须已存在）</p>
                     * @return OwnerOpenID <p>设备所有者 OpenID（必须已存在）</p>
                     * 
                     */
                    std::string GetOwnerOpenID() const;

                    /**
                     * 设置<p>设备所有者 OpenID（必须已存在）</p>
                     * @param _ownerOpenID <p>设备所有者 OpenID（必须已存在）</p>
                     * 
                     */
                    void SetOwnerOpenID(const std::string& _ownerOpenID);

                    /**
                     * 判断参数 OwnerOpenID 是否已赋值
                     * @return OwnerOpenID 是否已赋值
                     * 
                     */
                    bool OwnerOpenIDHasBeenSet() const;

                    /**
                     * 获取<p>被分享用户 OpenID（不存在则自动创建）</p>
                     * @return ToOpenID <p>被分享用户 OpenID（不存在则自动创建）</p>
                     * 
                     */
                    std::string GetToOpenID() const;

                    /**
                     * 设置<p>被分享用户 OpenID（不存在则自动创建）</p>
                     * @param _toOpenID <p>被分享用户 OpenID（不存在则自动创建）</p>
                     * 
                     */
                    void SetToOpenID(const std::string& _toOpenID);

                    /**
                     * 判断参数 ToOpenID 是否已赋值
                     * @return ToOpenID 是否已赋值
                     * 
                     */
                    bool ToOpenIDHasBeenSet() const;

                    /**
                     * 获取<p>被分享用户昵称（仅自动创建时使用）</p>
                     * @return ToNickName <p>被分享用户昵称（仅自动创建时使用）</p>
                     * 
                     */
                    std::string GetToNickName() const;

                    /**
                     * 设置<p>被分享用户昵称（仅自动创建时使用）</p>
                     * @param _toNickName <p>被分享用户昵称（仅自动创建时使用）</p>
                     * 
                     */
                    void SetToNickName(const std::string& _toNickName);

                    /**
                     * 判断参数 ToNickName 是否已赋值
                     * @return ToNickName 是否已赋值
                     * 
                     */
                    bool ToNickNameHasBeenSet() const;

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
                     * <p>设备所有者 OpenID（必须已存在）</p>
                     */
                    std::string m_ownerOpenID;
                    bool m_ownerOpenIDHasBeenSet;

                    /**
                     * <p>被分享用户 OpenID（不存在则自动创建）</p>
                     */
                    std::string m_toOpenID;
                    bool m_toOpenIDHasBeenSet;

                    /**
                     * <p>被分享用户昵称（仅自动创建时使用）</p>
                     */
                    std::string m_toNickName;
                    bool m_toNickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SHAREDEVICETOUSERREQUEST_H_
