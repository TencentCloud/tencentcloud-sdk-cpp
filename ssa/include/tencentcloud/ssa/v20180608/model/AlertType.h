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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ALERTTYPE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ALERTTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/ConcernInfo.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 告警字段
                */
                class AlertType : public AbstractModel
                {
                public:
                    AlertType();
                    ~AlertType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标准时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertTime 标准时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlertTime() const;

                    /**
                     * 设置标准时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertTime 标准时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertTime(const std::string& _alertTime);

                    /**
                     * 判断参数 AlertTime 是否已赋值
                     * @return AlertTime 是否已赋值
                     * 
                     */
                    bool AlertTimeHasBeenSet() const;

                    /**
                     * 获取唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertId 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertId 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetPrivateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetPrivateIp() const;

                    /**
                     * 设置内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetPrivateIp 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetPrivateIp(const std::vector<std::string>& _assetPrivateIp);

                    /**
                     * 判断参数 AssetPrivateIp 是否已赋值
                     * @return AssetPrivateIp 是否已赋值
                     * 
                     */
                    bool AssetPrivateIpHasBeenSet() const;

                    /**
                     * 获取名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertName 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlertName() const;

                    /**
                     * 设置名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertName 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertName(const std::string& _alertName);

                    /**
                     * 判断参数 AlertName 是否已赋值
                     * @return AlertName 是否已赋值
                     * 
                     */
                    bool AlertNameHasBeenSet() const;

                    /**
                     * 获取告警级别  0:未知 1:低危 2:中危 3:高危 4:严重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 告警级别  0:未知 1:低危 2:中危 3:高危 4:严重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置告警级别  0:未知 1:低危 2:中危 3:高危 4:严重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 告警级别  0:未知 1:低危 2:中危 3:高危 4:严重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取攻击字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackChain 攻击字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackChain() const;

                    /**
                     * 设置攻击字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackChain 攻击字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackChain(const std::string& _attackChain);

                    /**
                     * 判断参数 AttackChain 是否已赋值
                     * @return AttackChain 是否已赋值
                     * 
                     */
                    bool AttackChainHasBeenSet() const;

                    /**
                     * 获取攻击字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackId 攻击字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackId() const;

                    /**
                     * 设置攻击字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackId 攻击字段2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackId(const std::string& _attackId);

                    /**
                     * 判断参数 AttackId 是否已赋值
                     * @return AttackId 是否已赋值
                     * 
                     */
                    bool AttackIdHasBeenSet() const;

                    /**
                     * 获取关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Concerns 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConcernInfo> GetConcerns() const;

                    /**
                     * 设置关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concerns 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcerns(const std::vector<ConcernInfo>& _concerns);

                    /**
                     * 判断参数 Concerns 是否已赋值
                     * @return Concerns 是否已赋值
                     * 
                     */
                    bool ConcernsHasBeenSet() const;

                    /**
                     * 获取1：已防御，0,2：仅检测(0:告警类 1:拦截类 2:放行类 )
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 1：已防御，0,2：仅检测(0:告警类 1:拦截类 2:放行类 )
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置1：已防御，0,2：仅检测(0:告警类 1:拦截类 2:放行类 )
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 1：已防御，0,2：仅检测(0:告警类 1:拦截类 2:放行类 )
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取0/空：未知，1：未成功，2：成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackResult 0/空：未知，1：未成功，2：成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttackResult() const;

                    /**
                     * 设置0/空：未知，1：未成功，2：成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackResult 0/空：未知，1：未成功，2：成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackResult(const int64_t& _attackResult);

                    /**
                     * 判断参数 AttackResult 是否已赋值
                     * @return AttackResult 是否已赋值
                     * 
                     */
                    bool AttackResultHasBeenSet() const;

                    /**
                     * 获取//调查状态  0/空：未启用，1：调查中，2：完成调查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventStatus //调查状态  0/空：未启用，1：调查中，2：完成调查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEventStatus() const;

                    /**
                     * 设置//调查状态  0/空：未启用，1：调查中，2：完成调查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventStatus //调查状态  0/空：未启用，1：调查中，2：完成调查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventStatus(const int64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取//关联事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId //关联事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置//关联事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventId //关联事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取//处置状态  0：未关闭，1：已关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status //处置状态  0：未关闭，1：已关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置//处置状态  0：未关闭，1：已关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status //处置状态  0：未关闭，1：已关闭
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取恶意实体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcernMaliciousCount 恶意实体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConcernMaliciousCount() const;

                    /**
                     * 设置恶意实体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concernMaliciousCount 恶意实体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcernMaliciousCount(const int64_t& _concernMaliciousCount);

                    /**
                     * 判断参数 ConcernMaliciousCount 是否已赋值
                     * @return ConcernMaliciousCount 是否已赋值
                     * 
                     */
                    bool ConcernMaliciousCountHasBeenSet() const;

                    /**
                     * 获取受害者实体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcernVictimCount 受害者实体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConcernVictimCount() const;

                    /**
                     * 设置受害者实体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concernVictimCount 受害者实体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcernVictimCount(const int64_t& _concernVictimCount);

                    /**
                     * 判断参数 ConcernVictimCount 是否已赋值
                     * @return ConcernVictimCount 是否已赋值
                     * 
                     */
                    bool ConcernVictimCountHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VictimAssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVictimAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _victimAssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVictimAssetType(const std::string& _victimAssetType);

                    /**
                     * 判断参数 VictimAssetType 是否已赋值
                     * @return VictimAssetType 是否已赋值
                     * 
                     */
                    bool VictimAssetTypeHasBeenSet() const;

                    /**
                     * 获取告警子类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubType 告警子类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置告警子类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subType 告警子类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取攻击技术名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackName 攻击技术名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackName() const;

                    /**
                     * 设置攻击技术名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackName 攻击技术名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackName(const std::string& _attackName);

                    /**
                     * 判断参数 AttackName 是否已赋值
                     * @return AttackName 是否已赋值
                     * 
                     */
                    bool AttackNameHasBeenSet() const;

                    /**
                     * 获取外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetPublicIp 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetPublicIp() const;

                    /**
                     * 设置外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetPublicIp 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetPublicIp(const std::vector<std::string>& _assetPublicIp);

                    /**
                     * 判断参数 AssetPublicIp 是否已赋值
                     * @return AssetPublicIp 是否已赋值
                     * 
                     */
                    bool AssetPublicIpHasBeenSet() const;

                    /**
                     * 获取攻击战术名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackTactic 攻击战术名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackTactic() const;

                    /**
                     * 设置攻击战术名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackTactic 攻击战术名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackTactic(const std::string& _attackTactic);

                    /**
                     * 判断参数 AttackTactic 是否已赋值
                     * @return AttackTactic 是否已赋值
                     * 
                     */
                    bool AttackTacticHasBeenSet() const;

                    /**
                     * 获取资产子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VictimAssetSub 资产子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVictimAssetSub() const;

                    /**
                     * 设置资产子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _victimAssetSub 资产子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVictimAssetSub(const std::string& _victimAssetSub);

                    /**
                     * 判断参数 VictimAssetSub 是否已赋值
                     * @return VictimAssetSub 是否已赋值
                     * 
                     */
                    bool VictimAssetSubHasBeenSet() const;

                    /**
                     * 获取资产vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VictimAssetVpc 资产vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVictimAssetVpc() const;

                    /**
                     * 设置资产vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _victimAssetVpc 资产vpc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVictimAssetVpc(const std::string& _victimAssetVpc);

                    /**
                     * 判断参数 VictimAssetVpc 是否已赋值
                     * @return VictimAssetVpc 是否已赋值
                     * 
                     */
                    bool VictimAssetVpcHasBeenSet() const;

                    /**
                     * 获取时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取资产组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetGroupName 资产组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetGroupName() const;

                    /**
                     * 设置资产组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetGroupName 资产组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetGroupName(const std::vector<std::string>& _assetGroupName);

                    /**
                     * 判断参数 AssetGroupName 是否已赋值
                     * @return AssetGroupName 是否已赋值
                     * 
                     */
                    bool AssetGroupNameHasBeenSet() const;

                    /**
                     * 获取资产项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetProjectName 资产项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetProjectName() const;

                    /**
                     * 设置资产项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetProjectName 资产项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetProjectName(const std::string& _assetProjectName);

                    /**
                     * 判断参数 AssetProjectName 是否已赋值
                     * @return AssetProjectName 是否已赋值
                     * 
                     */
                    bool AssetProjectNameHasBeenSet() const;

                    /**
                     * 获取失陷资产内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VictimAssetContent 失陷资产内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetVictimAssetContent() const;

                    /**
                     * 设置失陷资产内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _victimAssetContent 失陷资产内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVictimAssetContent(const std::vector<std::string>& _victimAssetContent);

                    /**
                     * 判断参数 VictimAssetContent 是否已赋值
                     * @return VictimAssetContent 是否已赋值
                     * 
                     */
                    bool VictimAssetContentHasBeenSet() const;

                    /**
                     * 获取错误报告状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WrongReportStatus 错误报告状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWrongReportStatus() const;

                    /**
                     * 设置错误报告状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wrongReportStatus 错误报告状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWrongReportStatus(const int64_t& _wrongReportStatus);

                    /**
                     * 判断参数 WrongReportStatus 是否已赋值
                     * @return WrongReportStatus 是否已赋值
                     * 
                     */
                    bool WrongReportStatusHasBeenSet() const;

                    /**
                     * 获取错误报告Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WrongReportConditionId 错误报告Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWrongReportConditionId() const;

                    /**
                     * 设置错误报告Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wrongReportConditionId 错误报告Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWrongReportConditionId(const int64_t& _wrongReportConditionId);

                    /**
                     * 判断参数 WrongReportConditionId 是否已赋值
                     * @return WrongReportConditionId 是否已赋值
                     * 
                     */
                    bool WrongReportConditionIdHasBeenSet() const;

                private:

                    /**
                     * 标准时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertTime;
                    bool m_alertTimeHasBeenSet;

                    /**
                     * 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetPrivateIp;
                    bool m_assetPrivateIpHasBeenSet;

                    /**
                     * 名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertName;
                    bool m_alertNameHasBeenSet;

                    /**
                     * 告警级别  0:未知 1:低危 2:中危 3:高危 4:严重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 攻击字段1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackChain;
                    bool m_attackChainHasBeenSet;

                    /**
                     * 攻击字段2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackId;
                    bool m_attackIdHasBeenSet;

                    /**
                     * 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConcernInfo> m_concerns;
                    bool m_concernsHasBeenSet;

                    /**
                     * 1：已防御，0,2：仅检测(0:告警类 1:拦截类 2:放行类 )
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 0/空：未知，1：未成功，2：成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackResult;
                    bool m_attackResultHasBeenSet;

                    /**
                     * //调查状态  0/空：未启用，1：调查中，2：完成调查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * //关联事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * //处置状态  0：未关闭，1：已关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 恶意实体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_concernMaliciousCount;
                    bool m_concernMaliciousCountHasBeenSet;

                    /**
                     * 受害者实体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_concernVictimCount;
                    bool m_concernVictimCountHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_victimAssetType;
                    bool m_victimAssetTypeHasBeenSet;

                    /**
                     * 告警子类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 攻击技术名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackName;
                    bool m_attackNameHasBeenSet;

                    /**
                     * 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetPublicIp;
                    bool m_assetPublicIpHasBeenSet;

                    /**
                     * 攻击战术名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackTactic;
                    bool m_attackTacticHasBeenSet;

                    /**
                     * 资产子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_victimAssetSub;
                    bool m_victimAssetSubHasBeenSet;

                    /**
                     * 资产vpc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_victimAssetVpc;
                    bool m_victimAssetVpcHasBeenSet;

                    /**
                     * 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 资产组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetGroupName;
                    bool m_assetGroupNameHasBeenSet;

                    /**
                     * 资产项目名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetProjectName;
                    bool m_assetProjectNameHasBeenSet;

                    /**
                     * 失陷资产内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_victimAssetContent;
                    bool m_victimAssetContentHasBeenSet;

                    /**
                     * 错误报告状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wrongReportStatus;
                    bool m_wrongReportStatusHasBeenSet;

                    /**
                     * 错误报告Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wrongReportConditionId;
                    bool m_wrongReportConditionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ALERTTYPE_H_
