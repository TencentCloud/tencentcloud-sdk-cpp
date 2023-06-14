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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_APPDEVICEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_APPDEVICEINFO_H_

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
                * 云api直接绑定设备出参
                */
                class AppDeviceInfo : public AbstractModel
                {
                public:
                    AppDeviceInfo();
                    ~AppDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID/设备名
                     * @return DeviceId 产品ID/设备名
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置产品ID/设备名
                     * @param _deviceId 产品ID/设备名
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

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
                     * 获取设备别名
                     * @return AliasName 设备别名
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置设备别名
                     * @param _aliasName 设备别名
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取icon地址
                     * @return IconUrl icon地址
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置icon地址
                     * @param _iconUrl icon地址
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

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

                    /**
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
                     * 
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 产品ID/设备名
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

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
                     * 设备别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * icon地址
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 家庭ID
                     */
                    std::string m_familyId;
                    bool m_familyIdHasBeenSet;

                    /**
                     * 房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 设备类型
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_APPDEVICEINFO_H_
