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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYINFOITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyAssetStatistic.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm身份信息
                */
                class DspmIdentifyInfoItem : public AbstractModel
                {
                public:
                    DspmIdentifyInfoItem();
                    ~DspmIdentifyInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取身份id。
                     * @return IdentifyId 身份id。
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置身份id。
                     * @param _identifyId 身份id。
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param _remark 备注。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取身份类型。0-未定义 2-长期身份 3-临时身份
                     * @return IdentifyType 身份类型。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置身份类型。0-未定义 2-长期身份 3-临时身份
                     * @param _identifyType 身份类型。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建者账号uin用户。
                     * @return CreatorUin 创建者账号uin用户。
                     * 
                     */
                    DspmUinUser GetCreatorUin() const;

                    /**
                     * 设置创建者账号uin用户。
                     * @param _creatorUin 创建者账号uin用户。
                     * 
                     */
                    void SetCreatorUin(const DspmUinUser& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取关联资产。
                     * @return AssetCount 关联资产。
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置关联资产。
                     * @param _assetCount 关联资产。
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取状态。0-不活跃 1-活跃
                     * @return Status 状态。0-不活跃 1-活跃
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态。0-不活跃 1-活跃
                     * @param _status 状态。0-不活跃 1-活跃
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
                     * 获取所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Person 所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _person 所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取关联数据资产统计信息。
                     * @return AssetStatistic 关联数据资产统计信息。
                     * 
                     */
                    DspmIdentifyAssetStatistic GetAssetStatistic() const;

                    /**
                     * 设置关联数据资产统计信息。
                     * @param _assetStatistic 关联数据资产统计信息。
                     * 
                     */
                    void SetAssetStatistic(const DspmIdentifyAssetStatistic& _assetStatistic);

                    /**
                     * 判断参数 AssetStatistic 是否已赋值
                     * @return AssetStatistic 是否已赋值
                     * 
                     */
                    bool AssetStatisticHasBeenSet() const;

                    /**
                     * 获取风险统计信息
                     * @return RiskCount 风险统计信息
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置风险统计信息
                     * @param _riskCount 风险统计信息
                     * 
                     */
                    void SetRiskCount(const DspmRiskCount& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取安全建议。 Resolve 立即解决 Reinforcement 加固 None 暂无异常
                     * @return SafetyAdvice 安全建议。 Resolve 立即解决 Reinforcement 加固 None 暂无异常
                     * 
                     */
                    std::string GetSafetyAdvice() const;

                    /**
                     * 设置安全建议。 Resolve 立即解决 Reinforcement 加固 None 暂无异常
                     * @param _safetyAdvice 安全建议。 Resolve 立即解决 Reinforcement 加固 None 暂无异常
                     * 
                     */
                    void SetSafetyAdvice(const std::string& _safetyAdvice);

                    /**
                     * 判断参数 SafetyAdvice 是否已赋值
                     * @return SafetyAdvice 是否已赋值
                     * 
                     */
                    bool SafetyAdviceHasBeenSet() const;

                    /**
                     * 获取资产所属账号app id
                     * @return AppId 资产所属账号app id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置资产所属账号app id
                     * @param _appId 资产所属账号app id
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取账号昵称
                     * @return NickName 账号昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号昵称
                     * @param _nickName 账号昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取资产所属账号uin
                     * @return Uin 资产所属账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置资产所属账号uin
                     * @param _uin 资产所属账号uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 身份id。
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 身份类型。0-未定义 2-长期身份 3-临时身份
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者账号uin用户。
                     */
                    DspmUinUser m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 关联资产。
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态。0-不活跃 1-活跃
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 关联数据资产统计信息。
                     */
                    DspmIdentifyAssetStatistic m_assetStatistic;
                    bool m_assetStatisticHasBeenSet;

                    /**
                     * 风险统计信息
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 安全建议。 Resolve 立即解决 Reinforcement 加固 None 暂无异常
                     */
                    std::string m_safetyAdvice;
                    bool m_safetyAdviceHasBeenSet;

                    /**
                     * 资产所属账号app id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 资产所属账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYINFOITEM_H_
