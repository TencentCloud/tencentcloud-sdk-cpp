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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DATAEVENT_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DATAEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 事件列表对象
                */
                class DataEvent : public AbstractModel
                {
                public:
                    DataEvent();
                    ~DataEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldIdMd5 Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldIdMd5() const;

                    /**
                     * 设置Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldIdMd5 Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldIdMd5(const std::string& _oldIdMd5);

                    /**
                     * 判断参数 OldIdMd5 是否已赋值
                     * @return OldIdMd5 是否已赋值
                     * 
                     */
                    bool OldIdMd5HasBeenSet() const;

                    /**
                     * 获取事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取事件类型一级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType1 事件类型一级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEventType1() const;

                    /**
                     * 设置事件类型一级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType1 事件类型一级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventType1(const int64_t& _eventType1);

                    /**
                     * 判断参数 EventType1 是否已赋值
                     * @return EventType1 是否已赋值
                     * 
                     */
                    bool EventType1HasBeenSet() const;

                    /**
                     * 获取事件类型二级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType2 事件类型二级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEventType2() const;

                    /**
                     * 设置事件类型二级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType2 事件类型二级分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventType2(const int64_t& _eventType2);

                    /**
                     * 判断参数 EventType2 是否已赋值
                     * @return EventType2 是否已赋值
                     * 
                     */
                    bool EventType2HasBeenSet() const;

                    /**
                     * 获取事件等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 事件等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置事件等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 事件等级
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
                     * 获取处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 处理状态
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
                     * 获取源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcIp 源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcIp 源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取目的ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstIp 目的ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目的ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstIp 目的ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取事件发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 事件发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置事件发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 事件发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dstport 目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDstport() const;

                    /**
                     * 设置目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstport 目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstport(const int64_t& _dstport);

                    /**
                     * 判断参数 Dstport 是否已赋值
                     * @return Dstport 是否已赋值
                     * 
                     */
                    bool DstportHasBeenSet() const;

                    /**
                     * 获取资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIp 资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetIp() const;

                    /**
                     * 设置资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIp 资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIp(const std::string& _assetIp);

                    /**
                     * 判断参数 AssetIp 是否已赋值
                     * @return AssetIp 是否已赋值
                     * 
                     */
                    bool AssetIpHasBeenSet() const;

                    /**
                     * 获取资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名称
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
                     * 获取安全事件唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaEventUniqid 安全事件唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaEventUniqid() const;

                    /**
                     * 设置安全事件唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaEventUniqid 安全事件唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaEventUniqid(const std::string& _ssaEventUniqid);

                    /**
                     * 判断参数 SsaEventUniqid 是否已赋值
                     * @return SsaEventUniqid 是否已赋值
                     * 
                     */
                    bool SsaEventUniqidHasBeenSet() const;

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
                     * 获取事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 事件来源
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
                     * 获取索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取索引中的唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 索引中的唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置索引中的唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 索引中的唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取受影响资产是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAssetDeleted 受影响资产是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsAssetDeleted() const;

                    /**
                     * 设置受影响资产是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAssetDeleted 受影响资产是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAssetDeleted(const std::string& _isAssetDeleted);

                    /**
                     * 判断参数 IsAssetDeleted 是否已赋值
                     * @return IsAssetDeleted 是否已赋值
                     * 
                     */
                    bool IsAssetDeletedHasBeenSet() const;

                    /**
                     * 获取源ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaSrcCountry 源ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaSrcCountry() const;

                    /**
                     * 设置源ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaSrcCountry 源ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaSrcCountry(const std::string& _ssaSrcCountry);

                    /**
                     * 判断参数 SsaSrcCountry 是否已赋值
                     * @return SsaSrcCountry 是否已赋值
                     * 
                     */
                    bool SsaSrcCountryHasBeenSet() const;

                    /**
                     * 获取目的ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaDstCountry 目的ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaDstCountry() const;

                    /**
                     * 设置目的ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaDstCountry 目的ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaDstCountry(const std::string& _ssaDstCountry);

                    /**
                     * 判断参数 SsaDstCountry 是否已赋值
                     * @return SsaDstCountry 是否已赋值
                     * 
                     */
                    bool SsaDstCountryHasBeenSet() const;

                    /**
                     * 获取木马类型的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaDescription 木马类型的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaDescription() const;

                    /**
                     * 设置木马类型的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaDescription 木马类型的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaDescription(const std::string& _ssaDescription);

                    /**
                     * 判断参数 SsaDescription 是否已赋值
                     * @return SsaDescription 是否已赋值
                     * 
                     */
                    bool SsaDescriptionHasBeenSet() const;

                    /**
                     * 获取供给链类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAttackChain 供给链类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaAttackChain() const;

                    /**
                     * 设置供给链类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaAttackChain 供给链类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaAttackChain(const std::string& _ssaAttackChain);

                    /**
                     * 判断参数 SsaAttackChain 是否已赋值
                     * @return SsaAttackChain 是否已赋值
                     * 
                     */
                    bool SsaAttackChainHasBeenSet() const;

                    /**
                     * 获取受影响组件
                     * @return RuleComponents 受影响组件
                     * 
                     */
                    std::string GetRuleComponents() const;

                    /**
                     * 设置受影响组件
                     * @param _ruleComponents 受影响组件
                     * 
                     */
                    void SetRuleComponents(const std::string& _ruleComponents);

                    /**
                     * 判断参数 RuleComponents 是否已赋值
                     * @return RuleComponents 是否已赋值
                     * 
                     */
                    bool RuleComponentsHasBeenSet() const;

                    /**
                     * 获取资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIpAll 资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetIpAll() const;

                    /**
                     * 设置资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIpAll 资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIpAll(const std::vector<std::string>& _assetIpAll);

                    /**
                     * 判断参数 AssetIpAll 是否已赋值
                     * @return AssetIpAll 是否已赋值
                     * 
                     */
                    bool AssetIpAllHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取cvm类型资产的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses cvm类型资产的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置cvm类型资产的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAddresses cvm类型资产的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取cvm类型资产的内网ip
                     * @return PrivateIpAddresses cvm类型资产的内网ip
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置cvm类型资产的内网ip
                     * @param _privateIpAddresses cvm类型资产的内网ip
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取事件响应状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoarResponseStatus 事件响应状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSoarResponseStatus() const;

                    /**
                     * 设置事件响应状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _soarResponseStatus 事件响应状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoarResponseStatus(const int64_t& _soarResponseStatus);

                    /**
                     * 判断参数 SoarResponseStatus 是否已赋值
                     * @return SoarResponseStatus 是否已赋值
                     * 
                     */
                    bool SoarResponseStatusHasBeenSet() const;

                    /**
                     * 获取事件最近响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoarResponseTime 事件最近响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSoarResponseTime() const;

                    /**
                     * 设置事件最近响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _soarResponseTime 事件最近响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoarResponseTime(const int64_t& _soarResponseTime);

                    /**
                     * 判断参数 SoarResponseTime 是否已赋值
                     * @return SoarResponseTime 是否已赋值
                     * 
                     */
                    bool SoarResponseTimeHasBeenSet() const;

                    /**
                     * 获取事件建议处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoarSuggestStatus 事件建议处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSoarSuggestStatus() const;

                    /**
                     * 设置事件建议处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _soarSuggestStatus 事件建议处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoarSuggestStatus(const int64_t& _soarSuggestStatus);

                    /**
                     * 判断参数 SoarSuggestStatus 是否已赋值
                     * @return SoarSuggestStatus 是否已赋值
                     * 
                     */
                    bool SoarSuggestStatusHasBeenSet() const;

                    /**
                     * 获取事件剧本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoarPlaybookType 事件剧本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSoarPlaybookType() const;

                    /**
                     * 设置事件剧本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _soarPlaybookType 事件剧本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoarPlaybookType(const std::string& _soarPlaybookType);

                    /**
                     * 判断参数 SoarPlaybookType 是否已赋值
                     * @return SoarPlaybookType 是否已赋值
                     * 
                     */
                    bool SoarPlaybookTypeHasBeenSet() const;

                    /**
                     * 获取剧本任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoarRunId 剧本任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSoarRunId() const;

                    /**
                     * 设置剧本任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _soarRunId 剧本任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoarRunId(const std::string& _soarRunId);

                    /**
                     * 判断参数 SoarRunId 是否已赋值
                     * @return SoarRunId 是否已赋值
                     * 
                     */
                    bool SoarRunIdHasBeenSet() const;

                    /**
                     * 获取事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaEventId 事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaEventId() const;

                    /**
                     * 设置事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaEventId 事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaEventId(const std::string& _ssaEventId);

                    /**
                     * 判断参数 SsaEventId 是否已赋值
                     * @return SsaEventId 是否已赋值
                     * 
                     */
                    bool SsaEventIdHasBeenSet() const;

                    /**
                     * 获取是否新接入的云防事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNewCfwEvent 是否新接入的云防事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNewCfwEvent() const;

                    /**
                     * 设置是否新接入的云防事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNewCfwEvent 是否新接入的云防事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNewCfwEvent(const bool& _isNewCfwEvent);

                    /**
                     * 判断参数 IsNewCfwEvent 是否已赋值
                     * @return IsNewCfwEvent 是否已赋值
                     * 
                     */
                    bool IsNewCfwEventHasBeenSet() const;

                    /**
                     * 获取出入站方向
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction 出入站方向
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置出入站方向
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _direction 出入站方向
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * Md5值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldIdMd5;
                    bool m_oldIdMd5HasBeenSet;

                    /**
                     * 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件类型一级分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventType1;
                    bool m_eventType1HasBeenSet;

                    /**
                     * 事件类型二级分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventType2;
                    bool m_eventType2HasBeenSet;

                    /**
                     * 事件等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 目的ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 事件发生时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 目的端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dstport;
                    bool m_dstportHasBeenSet;

                    /**
                     * 资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetIp;
                    bool m_assetIpHasBeenSet;

                    /**
                     * 资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 安全事件唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaEventUniqid;
                    bool m_ssaEventUniqidHasBeenSet;

                    /**
                     * 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 索引中的唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 受影响资产是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isAssetDeleted;
                    bool m_isAssetDeletedHasBeenSet;

                    /**
                     * 源ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaSrcCountry;
                    bool m_ssaSrcCountryHasBeenSet;

                    /**
                     * 目的ip所属地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaDstCountry;
                    bool m_ssaDstCountryHasBeenSet;

                    /**
                     * 木马类型的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaDescription;
                    bool m_ssaDescriptionHasBeenSet;

                    /**
                     * 供给链类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaAttackChain;
                    bool m_ssaAttackChainHasBeenSet;

                    /**
                     * 受影响组件
                     */
                    std::string m_ruleComponents;
                    bool m_ruleComponentsHasBeenSet;

                    /**
                     * 资产ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetIpAll;
                    bool m_assetIpAllHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * cvm类型资产的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * cvm类型资产的内网ip
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 事件响应状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_soarResponseStatus;
                    bool m_soarResponseStatusHasBeenSet;

                    /**
                     * 事件最近响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_soarResponseTime;
                    bool m_soarResponseTimeHasBeenSet;

                    /**
                     * 事件建议处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_soarSuggestStatus;
                    bool m_soarSuggestStatusHasBeenSet;

                    /**
                     * 事件剧本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_soarPlaybookType;
                    bool m_soarPlaybookTypeHasBeenSet;

                    /**
                     * 剧本任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_soarRunId;
                    bool m_soarRunIdHasBeenSet;

                    /**
                     * 事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaEventId;
                    bool m_ssaEventIdHasBeenSet;

                    /**
                     * 是否新接入的云防事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNewCfwEvent;
                    bool m_isNewCfwEventHasBeenSet;

                    /**
                     * 出入站方向
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DATAEVENT_H_
