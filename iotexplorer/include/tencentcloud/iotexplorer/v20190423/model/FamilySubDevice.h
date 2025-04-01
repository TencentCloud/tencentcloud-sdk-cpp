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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FAMILYSUBDEVICE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FAMILYSUBDEVICE_H_

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
                * 子设备详情
                */
                class FamilySubDevice : public AbstractModel
                {
                public:
                    FamilySubDevice();
                    ~FamilySubDevice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
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
                     * 获取设备绑定的家庭ID
                     * @return FamilyId 设备绑定的家庭ID
                     * 
                     */
                    std::string GetFamilyId() const;

                    /**
                     * 设置设备绑定的家庭ID
                     * @param _familyId 设备绑定的家庭ID
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
                     * 获取设备所在的房间ID，默认"0"
                     * @return RoomId 设备所在的房间ID，默认"0"
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置设备所在的房间ID，默认"0"
                     * @param _roomId 设备所在的房间ID，默认"0"
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
                     * 获取图标
                     * @return IconUrl 图标
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置图标
                     * @param _iconUrl 图标
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
                     * 获取grid图标
                     * @return IconUrlGrid grid图标
                     * 
                     */
                    std::string GetIconUrlGrid() const;

                    /**
                     * 设置grid图标
                     * @param _iconUrlGrid grid图标
                     * 
                     */
                    void SetIconUrlGrid(const std::string& _iconUrlGrid);

                    /**
                     * 判断参数 IconUrlGrid 是否已赋值
                     * @return IconUrlGrid 是否已赋值
                     * 
                     */
                    bool IconUrlGridHasBeenSet() const;

                    /**
                     * 获取设备绑定时间戳
                     * @return CreateTime 设备绑定时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置设备绑定时间戳
                     * @param _createTime 设备绑定时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备更新时间戳
                     * @return UpdateTime 设备更新时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置设备更新时间戳
                     * @param _updateTime 设备更新时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 设备绑定的家庭ID
                     */
                    std::string m_familyId;
                    bool m_familyIdHasBeenSet;

                    /**
                     * 设备所在的房间ID，默认"0"
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 图标
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * grid图标
                     */
                    std::string m_iconUrlGrid;
                    bool m_iconUrlGridHasBeenSet;

                    /**
                     * 设备绑定时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备更新时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FAMILYSUBDEVICE_H_
