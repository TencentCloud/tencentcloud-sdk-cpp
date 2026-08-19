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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDERLIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDERLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>
#include <tencentcloud/csip/v20221121/model/CWPOrderExtraParam.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 订单列表对象成员
                */
                class CWPOrderList : public AbstractModel
                {
                public:
                    CWPOrderList();
                    ~CWPOrderList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>所属产品 p_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCode <p>所属产品 p_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>所属产品 p_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCode <p>所属产品 p_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>子产品 sp_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductCode <p>子产品 sp_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>子产品 sp_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductCode <p>子产品 sp_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>计费项四层 sv_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InquireKey <p>计费项四层 sv_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置<p>计费项四层 sv_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inquireKey <p>计费项四层 sv_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取<p>资源购买量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InquireNum <p>资源购买量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 设置<p>资源购买量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inquireNum <p>资源购买量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInquireNum(const uint64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取<p>资源用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedNum <p>资源用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsedNum() const;

                    /**
                     * 设置<p>资源用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedNum <p>资源用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedNum(const uint64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取<p>云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList <p>云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tags> GetTagList() const;

                    /**
                     * 设置<p>云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList <p>云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<Tags>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>订单状态 1 正常 2隔离 3销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>订单状态 1 正常 2隔离 3销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>订单状态 1 正常 2隔离 3销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>订单状态 1 正常 2隔离 3销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>订单的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime <p>订单的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>订单的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginTime <p>订单的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>订单的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>订单的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>订单的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>订单的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectID <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProjectID() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectID <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectID(const uint64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>资源别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias <p>资源别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>资源别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias <p>资源别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId <p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId <p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标签 0 默认不自动续费(大客户特权会自动续费的) 1 自动续费 2 手动设置不自动续费(大客户特权不会自动续费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag <p>自动续费标签 0 默认不自动续费(大客户特权会自动续费的) 1 自动续费 2 手动设置不自动续费(大客户特权不会自动续费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标签 0 默认不自动续费(大客户特权会自动续费的) 1 自动续费 2 手动设置不自动续费(大客户特权不会自动续费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag <p>自动续费标签 0 默认不自动续费(大客户特权会自动续费的) 1 自动续费 2 手动设置不自动续费(大客户特权不会自动续费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType <p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置<p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType <p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>计费模式 0 后付费 1 预付费(包年包月)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode <p>计费模式 0 后付费 1 预付费(包年包月)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式 0 后付费 1 预付费(包年包月)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode <p>计费模式 0 后付费 1 预付费(包年包月)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>地域ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionID <p>地域ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRegionID() const;

                    /**
                     * 设置<p>地域ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionID <p>地域ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionID(const uint64_t& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                    /**
                     * 获取<p>可用区ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneID <p>可用区ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetZoneID() const;

                    /**
                     * 设置<p>可用区ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneID <p>可用区ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneID(const uint64_t& _zoneID);

                    /**
                     * 判断参数 ZoneID 是否已赋值
                     * @return ZoneID 是否已赋值
                     * 
                     */
                    bool ZoneIDHasBeenSet() const;

                    /**
                     * 获取<p>当前子订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealName <p>当前子订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置<p>当前子订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dealName <p>当前子订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>订单额外参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraParam <p>订单额外参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CWPOrderExtraParam GetExtraParam() const;

                    /**
                     * 设置<p>订单额外参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraParam <p>订单额外参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraParam(const CWPOrderExtraParam& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * <p>所属产品 p_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>子产品 sp_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>计费项四层 sv_</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * <p>资源购买量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * <p>资源用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * <p>云标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>订单状态 1 正常 2隔离 3销毁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>订单的开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>订单的结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>资源别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>自动续费标签 0 默认不自动续费(大客户特权会自动续费的) 1 自动续费 2 手动设置不自动续费(大客户特权不会自动续费)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>资源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>计费模式 0 后付费 1 预付费(包年包月)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>地域ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_regionID;
                    bool m_regionIDHasBeenSet;

                    /**
                     * <p>可用区ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * <p>当前子订单号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>订单额外参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CWPOrderExtraParam m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDERLIST_H_
