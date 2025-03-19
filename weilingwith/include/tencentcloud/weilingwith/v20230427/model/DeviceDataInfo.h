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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICEDATAINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/DeviceSpaceInfo.h>
#include <tencentcloud/weilingwith/v20230427/model/DeviceLocation.h>
#include <tencentcloud/weilingwith/v20230427/model/CustomFieldInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备数据信息
                */
                class DeviceDataInfo : public AbstractModel
                {
                public:
                    DeviceDataInfo();
                    ~DeviceDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID， wid
                     * @return WID 设备ID， wid
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备ID， wid
                     * @param _wID 设备ID， wid
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

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
                     * 获取设备类型Id
                     * @return DeviceTypeCode 设备类型Id
                     * 
                     */
                    std::string GetDeviceTypeCode() const;

                    /**
                     * 设置设备类型Id
                     * @param _deviceTypeCode 设备类型Id
                     * 
                     */
                    void SetDeviceTypeCode(const std::string& _deviceTypeCode);

                    /**
                     * 判断参数 DeviceTypeCode 是否已赋值
                     * @return DeviceTypeCode 是否已赋值
                     * 
                     */
                    bool DeviceTypeCodeHasBeenSet() const;

                    /**
                     * 获取设备类型名称
                     * @return DeviceTypeName 设备类型名称
                     * 
                     */
                    std::string GetDeviceTypeName() const;

                    /**
                     * 设置设备类型名称
                     * @param _deviceTypeName 设备类型名称
                     * 
                     */
                    void SetDeviceTypeName(const std::string& _deviceTypeName);

                    /**
                     * 判断参数 DeviceTypeName 是否已赋值
                     * @return DeviceTypeName 是否已赋值
                     * 
                     */
                    bool DeviceTypeNameHasBeenSet() const;

                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * @return ProductAbility 产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * 
                     */
                    int64_t GetProductAbility() const;

                    /**
                     * 设置产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * @param _productAbility 产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     * 
                     */
                    void SetProductAbility(const int64_t& _productAbility);

                    /**
                     * 判断参数 ProductAbility 是否已赋值
                     * @return ProductAbility 是否已赋值
                     * 
                     */
                    bool ProductAbilityHasBeenSet() const;

                    /**
                     * 获取设备位置信息
                     * @return SpaceInfoSet 设备位置信息
                     * 
                     */
                    std::vector<DeviceSpaceInfo> GetSpaceInfoSet() const;

                    /**
                     * 设置设备位置信息
                     * @param _spaceInfoSet 设备位置信息
                     * 
                     */
                    void SetSpaceInfoSet(const std::vector<DeviceSpaceInfo>& _spaceInfoSet);

                    /**
                     * 判断参数 SpaceInfoSet 是否已赋值
                     * @return SpaceInfoSet 是否已赋值
                     * 
                     */
                    bool SpaceInfoSetHasBeenSet() const;

                    /**
                     * 获取模型id
                     * @return ModelId 模型id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型id
                     * @param _modelId 模型id
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取设备标签名，非必填
                     * @return DeviceTagSet 设备标签名，非必填
                     * 
                     */
                    std::vector<std::string> GetDeviceTagSet() const;

                    /**
                     * 设置设备标签名，非必填
                     * @param _deviceTagSet 设备标签名，非必填
                     * 
                     */
                    void SetDeviceTagSet(const std::vector<std::string>& _deviceTagSet);

                    /**
                     * 判断参数 DeviceTagSet 是否已赋值
                     * @return DeviceTagSet 是否已赋值
                     * 
                     */
                    bool DeviceTagSetHasBeenSet() const;

                    /**
                     * 获取激活状态（1激活、0未激活）
                     * @return IsActive 激活状态（1激活、0未激活）
                     * 
                     */
                    int64_t GetIsActive() const;

                    /**
                     * 设置激活状态（1激活、0未激活）
                     * @param _isActive 激活状态（1激活、0未激活）
                     * 
                     */
                    void SetIsActive(const int64_t& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取 激活时间
                     * @return ActiveTime  激活时间
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置 激活时间
                     * @param _activeTime  激活时间
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取推流状态（推流中、未推流） 仅摄像机有的状态
                     * @return IsLive 推流状态（推流中、未推流） 仅摄像机有的状态
                     * 
                     */
                    bool GetIsLive() const;

                    /**
                     * 设置推流状态（推流中、未推流） 仅摄像机有的状态
                     * @param _isLive 推流状态（推流中、未推流） 仅摄像机有的状态
                     * 
                     */
                    void SetIsLive(const bool& _isLive);

                    /**
                     * 判断参数 IsLive 是否已赋值
                     * @return IsLive 是否已赋值
                     * 
                     */
                    bool IsLiveHasBeenSet() const;

                    /**
                     * 获取设备所属父设备id（子设备才有）
                     * @return ParentWID 设备所属父设备id（子设备才有）
                     * 
                     */
                    std::string GetParentWID() const;

                    /**
                     * 设置设备所属父设备id（子设备才有）
                     * @param _parentWID 设备所属父设备id（子设备才有）
                     * 
                     */
                    void SetParentWID(const std::string& _parentWID);

                    /**
                     * 判断参数 ParentWID 是否已赋值
                     * @return ParentWID 是否已赋值
                     * 
                     */
                    bool ParentWIDHasBeenSet() const;

                    /**
                     * 获取设备所有父设备名称（子设备才有）
                     * @return ParentWIDName 设备所有父设备名称（子设备才有）
                     * 
                     */
                    std::string GetParentWIDName() const;

                    /**
                     * 设置设备所有父设备名称（子设备才有）
                     * @param _parentWIDName 设备所有父设备名称（子设备才有）
                     * 
                     */
                    void SetParentWIDName(const std::string& _parentWIDName);

                    /**
                     * 判断参数 ParentWIDName 是否已赋值
                     * @return ParentWIDName 是否已赋值
                     * 
                     */
                    bool ParentWIDNameHasBeenSet() const;

                    /**
                     * 获取序列号
                     * @return SN 序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置序列号
                     * @param _sN 序列号
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取设备点位坐标值
                     * @return Location 设备点位坐标值
                     * 
                     */
                    DeviceLocation GetLocation() const;

                    /**
                     * 设置设备点位坐标值
                     * @param _location 设备点位坐标值
                     * 
                     */
                    void SetLocation(const DeviceLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取自定义字段
                     * @return FieldList 自定义字段
                     * 
                     */
                    std::vector<CustomFieldInfo> GetFieldList() const;

                    /**
                     * 设置自定义字段
                     * @param _fieldList 自定义字段
                     * 
                     */
                    void SetFieldList(const std::vector<CustomFieldInfo>& _fieldList);

                    /**
                     * 判断参数 FieldList 是否已赋值
                     * @return FieldList 是否已赋值
                     * 
                     */
                    bool FieldListHasBeenSet() const;

                    /**
                     * 获取分组信息
                     * @return GroupInfo 分组信息
                     * 
                     */
                    std::string GetGroupInfo() const;

                    /**
                     * 设置分组信息
                     * @param _groupInfo 分组信息
                     * 
                     */
                    void SetGroupInfo(const std::string& _groupInfo);

                    /**
                     * 判断参数 GroupInfo 是否已赋值
                     * @return GroupInfo 是否已赋值
                     * 
                     */
                    bool GroupInfoHasBeenSet() const;

                    /**
                     * 获取通信在/离线状态（online=normal+fault，offline）
                     * @return DeviceStatus 通信在/离线状态（online=normal+fault，offline）
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 设置通信在/离线状态（online=normal+fault，offline）
                     * @param _deviceStatus 通信在/离线状态（online=normal+fault，offline）
                     * 
                     */
                    void SetDeviceStatus(const std::string& _deviceStatus);

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取设备业务状态（normal、fault、offline）
                     * @return Status 设备业务状态（normal、fault、offline）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设备业务状态（normal、fault、offline）
                     * @param _status 设备业务状态（normal、fault、offline）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 设备ID， wid
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备类型Id
                     */
                    std::string m_deviceTypeCode;
                    bool m_deviceTypeCodeHasBeenSet;

                    /**
                     * 设备类型名称
                     */
                    std::string m_deviceTypeName;
                    bool m_deviceTypeNameHasBeenSet;

                    /**
                     * 产品Id
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品能力:信令数据、音视频。二进制数值中第0位表示信令数据、第1位表示音视频 。1（信令数据），3（具有信令数据以及音视频能力）。
                     */
                    int64_t m_productAbility;
                    bool m_productAbilityHasBeenSet;

                    /**
                     * 设备位置信息
                     */
                    std::vector<DeviceSpaceInfo> m_spaceInfoSet;
                    bool m_spaceInfoSetHasBeenSet;

                    /**
                     * 模型id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 设备标签名，非必填
                     */
                    std::vector<std::string> m_deviceTagSet;
                    bool m_deviceTagSetHasBeenSet;

                    /**
                     * 激活状态（1激活、0未激活）
                     */
                    int64_t m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     *  激活时间
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 推流状态（推流中、未推流） 仅摄像机有的状态
                     */
                    bool m_isLive;
                    bool m_isLiveHasBeenSet;

                    /**
                     * 设备所属父设备id（子设备才有）
                     */
                    std::string m_parentWID;
                    bool m_parentWIDHasBeenSet;

                    /**
                     * 设备所有父设备名称（子设备才有）
                     */
                    std::string m_parentWIDName;
                    bool m_parentWIDNameHasBeenSet;

                    /**
                     * 序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 设备点位坐标值
                     */
                    DeviceLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 自定义字段
                     */
                    std::vector<CustomFieldInfo> m_fieldList;
                    bool m_fieldListHasBeenSet;

                    /**
                     * 分组信息
                     */
                    std::string m_groupInfo;
                    bool m_groupInfoHasBeenSet;

                    /**
                     * 通信在/离线状态（online=normal+fault，offline）
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * 设备业务状态（normal、fault、offline）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICEDATAINFO_H_
