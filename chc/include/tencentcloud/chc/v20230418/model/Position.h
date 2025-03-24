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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_POSITION_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_POSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机位信息
                */
                class Position : public AbstractModel
                {
                public:
                    Position();
                    ~Position() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机位ID
                     * @return PositionId 机位ID
                     * 
                     */
                    uint64_t GetPositionId() const;

                    /**
                     * 设置机位ID
                     * @param _positionId 机位ID
                     * 
                     */
                    void SetPositionId(const uint64_t& _positionId);

                    /**
                     * 判断参数 PositionId 是否已赋值
                     * @return PositionId 是否已赋值
                     * 
                     */
                    bool PositionIdHasBeenSet() const;

                    /**
                     * 获取机位高度
                     * @return Height 机位高度
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置机位高度
                     * @param _height 机位高度
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取机位编号
                     * @return PositionCode 机位编号
                     * 
                     */
                    std::string GetPositionCode() const;

                    /**
                     * 设置机位编号
                     * @param _positionCode 机位编号
                     * 
                     */
                    void SetPositionCode(const std::string& _positionCode);

                    /**
                     * 判断参数 PositionCode 是否已赋值
                     * @return PositionCode 是否已赋值
                     * 
                     */
                    bool PositionCodeHasBeenSet() const;

                    /**
                     * 获取机位状态,0 空闲,1 已用,2 不可用,3 预占用,4 预留
                     * @return PositionStatus 机位状态,0 空闲,1 已用,2 不可用,3 预占用,4 预留
                     * 
                     */
                    uint64_t GetPositionStatus() const;

                    /**
                     * 设置机位状态,0 空闲,1 已用,2 不可用,3 预占用,4 预留
                     * @param _positionStatus 机位状态,0 空闲,1 已用,2 不可用,3 预占用,4 预留
                     * 
                     */
                    void SetPositionStatus(const uint64_t& _positionStatus);

                    /**
                     * 判断参数 PositionStatus 是否已赋值
                     * @return PositionStatus 是否已赋值
                     * 
                     */
                    bool PositionStatusHasBeenSet() const;

                    /**
                     * 获取设备规划类型ID
                     * @return PlanDeviceType 设备规划类型ID
                     * 
                     */
                    int64_t GetPlanDeviceType() const;

                    /**
                     * 设置设备规划类型ID
                     * @param _planDeviceType 设备规划类型ID
                     * 
                     */
                    void SetPlanDeviceType(const int64_t& _planDeviceType);

                    /**
                     * 判断参数 PlanDeviceType 是否已赋值
                     * @return PlanDeviceType 是否已赋值
                     * 
                     */
                    bool PlanDeviceTypeHasBeenSet() const;

                    /**
                     * 获取机位所属的机房管理单元ID
                     * @return IdcUnitId 机位所属的机房管理单元ID
                     * 
                     */
                    uint64_t GetIdcUnitId() const;

                    /**
                     * 设置机位所属的机房管理单元ID
                     * @param _idcUnitId 机位所属的机房管理单元ID
                     * 
                     */
                    void SetIdcUnitId(const uint64_t& _idcUnitId);

                    /**
                     * 判断参数 IdcUnitId 是否已赋值
                     * @return IdcUnitId 是否已赋值
                     * 
                     */
                    bool IdcUnitIdHasBeenSet() const;

                    /**
                     * 获取机位所属的机架ID
                     * @return RackId 机位所属的机架ID
                     * 
                     */
                    uint64_t GetRackId() const;

                    /**
                     * 设置机位所属的机架ID
                     * @param _rackId 机位所属的机架ID
                     * 
                     */
                    void SetRackId(const uint64_t& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取机位所属的机架名称
                     * @return RackName 机位所属的机架名称
                     * 
                     */
                    std::string GetRackName() const;

                    /**
                     * 设置机位所属的机架名称
                     * @param _rackName 机位所属的机架名称
                     * 
                     */
                    void SetRackName(const std::string& _rackName);

                    /**
                     * 判断参数 RackName 是否已赋值
                     * @return RackName 是否已赋值
                     * 
                     */
                    bool RackNameHasBeenSet() const;

                    /**
                     * 获取机位所属的机房管理单元名称
                     * @return IdcUnitName 机位所属的机房管理单元名称
                     * 
                     */
                    std::string GetIdcUnitName() const;

                    /**
                     * 设置机位所属的机房管理单元名称
                     * @param _idcUnitName 机位所属的机房管理单元名称
                     * 
                     */
                    void SetIdcUnitName(const std::string& _idcUnitName);

                    /**
                     * 判断参数 IdcUnitName 是否已赋值
                     * @return IdcUnitName 是否已赋值
                     * 
                     */
                    bool IdcUnitNameHasBeenSet() const;

                    /**
                     * 获取机位所属的机房名称
                     * @return IdcName 机位所属的机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机位所属的机房名称
                     * @param _idcName 机位所属的机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取机位所属的机房ID
                     * @return IdcId 机位所属的机房ID
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机位所属的机房ID
                     * @param _idcId 机位所属的机房ID
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取机位上如果有设备，该字段代表设备的 SN 码，如果是空闲机位，不返回该字段。
                     * @return Sn 机位上如果有设备，该字段代表设备的 SN 码，如果是空闲机位，不返回该字段。
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置机位上如果有设备，该字段代表设备的 SN 码，如果是空闲机位，不返回该字段。
                     * @param _sn 机位上如果有设备，该字段代表设备的 SN 码，如果是空闲机位，不返回该字段。
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取机位上如果有设备，该字段代表设备的固资号，如果是空闲机位，不返回该字段。
                     * @return AssetId 机位上如果有设备，该字段代表设备的固资号，如果是空闲机位，不返回该字段。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置机位上如果有设备，该字段代表设备的固资号，如果是空闲机位，不返回该字段。
                     * @param _assetId 机位上如果有设备，该字段代表设备的固资号，如果是空闲机位，不返回该字段。
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取机位上如果有设备，该字段代表设备的设备型号加版本号，如果是空闲机位，不返回该字段。
                     * @return ModelVersion 机位上如果有设备，该字段代表设备的设备型号加版本号，如果是空闲机位，不返回该字段。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置机位上如果有设备，该字段代表设备的设备型号加版本号，如果是空闲机位，不返回该字段。
                     * @param _modelVersion 机位上如果有设备，该字段代表设备的设备型号加版本号，如果是空闲机位，不返回该字段。
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                private:

                    /**
                     * 机位ID
                     */
                    uint64_t m_positionId;
                    bool m_positionIdHasBeenSet;

                    /**
                     * 机位高度
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 机位编号
                     */
                    std::string m_positionCode;
                    bool m_positionCodeHasBeenSet;

                    /**
                     * 机位状态,0 空闲,1 已用,2 不可用,3 预占用,4 预留
                     */
                    uint64_t m_positionStatus;
                    bool m_positionStatusHasBeenSet;

                    /**
                     * 设备规划类型ID
                     */
                    int64_t m_planDeviceType;
                    bool m_planDeviceTypeHasBeenSet;

                    /**
                     * 机位所属的机房管理单元ID
                     */
                    uint64_t m_idcUnitId;
                    bool m_idcUnitIdHasBeenSet;

                    /**
                     * 机位所属的机架ID
                     */
                    uint64_t m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * 机位所属的机架名称
                     */
                    std::string m_rackName;
                    bool m_rackNameHasBeenSet;

                    /**
                     * 机位所属的机房管理单元名称
                     */
                    std::string m_idcUnitName;
                    bool m_idcUnitNameHasBeenSet;

                    /**
                     * 机位所属的机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 机位所属的机房ID
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 机位上如果有设备，该字段代表设备的 SN 码，如果是空闲机位，不返回该字段。
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 机位上如果有设备，该字段代表设备的固资号，如果是空闲机位，不返回该字段。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 机位上如果有设备，该字段代表设备的设备型号加版本号，如果是空闲机位，不返回该字段。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_POSITION_H_
