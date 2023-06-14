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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DIRECTBINDDEVICEINFAMILYREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DIRECTBINDDEVICEINFAMILYREQUEST_H_

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
                * DirectBindDeviceInFamily请求参数结构体
                */
                class DirectBindDeviceInFamilyRequest : public AbstractModel
                {
                public:
                    DirectBindDeviceInFamilyRequest();
                    ~DirectBindDeviceInFamilyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取小程序appid
                     * @return IotAppID 小程序appid
                     * 
                     */
                    std::string GetIotAppID() const;

                    /**
                     * 设置小程序appid
                     * @param _iotAppID 小程序appid
                     * 
                     */
                    void SetIotAppID(const std::string& _iotAppID);

                    /**
                     * 判断参数 IotAppID 是否已赋值
                     * @return IotAppID 是否已赋值
                     * 
                     */
                    bool IotAppIDHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserID 用户ID
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置用户ID
                     * @param _userID 用户ID
                     * 
                     */
                    void SetUserID(const std::string& _userID);

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

                    /**
                     * 获取家庭ID
                     * @return FamilyId 家庭ID
                     * 
                     */
                    std::string GetFamilyId() const;

                    /**
                     * 设置家庭ID
                     * @param _familyId 家庭ID
                     * 
                     */
                    void SetFamilyId(const std::string& _familyId);

                    /**
                     * 判断参数 FamilyId 是否已赋值
                     * @return FamilyId 是否已赋值
                     * 
                     */
                    bool FamilyIdHasBeenSet() const;

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
                     * 获取房间ID
                     * @return RoomId 房间ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间ID
                     * @param _roomId 房间ID
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 小程序appid
                     */
                    std::string m_iotAppID;
                    bool m_iotAppIDHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 家庭ID
                     */
                    std::string m_familyId;
                    bool m_familyIdHasBeenSet;

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
                     * 房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DIRECTBINDDEVICEINFAMILYREQUEST_H_
