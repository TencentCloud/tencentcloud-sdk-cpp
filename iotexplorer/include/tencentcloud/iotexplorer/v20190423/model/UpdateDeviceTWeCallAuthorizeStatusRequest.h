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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEDEVICETWECALLAUTHORIZESTATUSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEDEVICETWECALLAUTHORIZESTATUSREQUEST_H_

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
                * UpdateDeviceTWeCallAuthorizeStatus请求参数结构体
                */
                class UpdateDeviceTWeCallAuthorizeStatusRequest : public AbstractModel
                {
                public:
                    UpdateDeviceTWeCallAuthorizeStatusRequest();
                    ~UpdateDeviceTWeCallAuthorizeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TweCall授权状态：0未授权，1已授权
                     * @return Status TweCall授权状态：0未授权，1已授权
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置TweCall授权状态：0未授权，1已授权
                     * @param _status TweCall授权状态：0未授权，1已授权
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
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
                     * 获取微信用户的openId
                     * @return WechatOpenId 微信用户的openId
                     * 
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置微信用户的openId
                     * @param _wechatOpenId 微信用户的openId
                     * 
                     */
                    void SetWechatOpenId(const std::string& _wechatOpenId);

                    /**
                     * 判断参数 WechatOpenId 是否已赋值
                     * @return WechatOpenId 是否已赋值
                     * 
                     */
                    bool WechatOpenIdHasBeenSet() const;

                private:

                    /**
                     * TweCall授权状态：0未授权，1已授权
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 微信用户的openId
                     */
                    std::string m_wechatOpenId;
                    bool m_wechatOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEDEVICETWECALLAUTHORIZESTATUSREQUEST_H_
