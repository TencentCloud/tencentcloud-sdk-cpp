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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_IOTDEVICESINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_IOTDEVICESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 子设备列表信息
                */
                class IotDevicesInfo : public AbstractModel
                {
                public:
                    IotDevicesInfo();
                    ~IotDevicesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备id
                     * @return Id 设备id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置设备id
                     * @param _id 设备id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return Name 设备名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备名称
                     * @param _name 设备名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取设备状态
                     * @return Status 设备状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置设备状态
                     * @param _status 设备状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设备打开状态
                     * @return Disabled 设备打开状态
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置设备打开状态
                     * @param _disabled 设备打开状态
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取设备创建时间
                     * @return CreateTime 设备创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置设备创建时间
                     * @param _createTime 设备创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后在线时间
                     * @return LastOnlineTime 最后在线时间
                     * 
                     */
                    std::string GetLastOnlineTime() const;

                    /**
                     * 设置最后在线时间
                     * @param _lastOnlineTime 最后在线时间
                     * 
                     */
                    void SetLastOnlineTime(const std::string& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

                    /**
                     * 获取设备是否绑定到节点
                     * @return IsBound 设备是否绑定到节点
                     * 
                     */
                    bool GetIsBound() const;

                    /**
                     * 设置设备是否绑定到节点
                     * @param _isBound 设备是否绑定到节点
                     * 
                     */
                    void SetIsBound(const bool& _isBound);

                    /**
                     * 判断参数 IsBound 是否已赋值
                     * @return IsBound 是否已赋值
                     * 
                     */
                    bool IsBoundHasBeenSet() const;

                    /**
                     * 获取设备版本
                     * @return Version 设备版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置设备版本
                     * @param _version 设备版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Region 无
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置无
                     * @param _region 无
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取无
                     * @return UnitID 无
                     * 
                     */
                    int64_t GetUnitID() const;

                    /**
                     * 设置无
                     * @param _unitID 无
                     * 
                     */
                    void SetUnitID(const int64_t& _unitID);

                    /**
                     * 判断参数 UnitID 是否已赋值
                     * @return UnitID 是否已赋值
                     * 
                     */
                    bool UnitIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return UnitName 无
                     * 
                     */
                    std::string GetUnitName() const;

                    /**
                     * 设置无
                     * @param _unitName 无
                     * 
                     */
                    void SetUnitName(const std::string& _unitName);

                    /**
                     * 判断参数 UnitName 是否已赋值
                     * @return UnitName 是否已赋值
                     * 
                     */
                    bool UnitNameHasBeenSet() const;

                private:

                    /**
                     * 设备id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备打开状态
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后在线时间
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                    /**
                     * 设备是否绑定到节点
                     */
                    bool m_isBound;
                    bool m_isBoundHasBeenSet;

                    /**
                     * 设备版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_unitID;
                    bool m_unitIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_unitName;
                    bool m_unitNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_IOTDEVICESINFO_H_
