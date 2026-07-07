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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_KEYINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_KEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CreditUsage.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForKey.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Key信息
                */
                class KeyInfo : public AbstractModel
                {
                public:
                    KeyInfo();
                    ~KeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否禁用Key</p>
                     * @return Blocked <p>是否禁用Key</p>
                     * 
                     */
                    bool GetBlocked() const;

                    /**
                     * 设置<p>是否禁用Key</p>
                     * @param _blocked <p>是否禁用Key</p>
                     * 
                     */
                    void SetBlocked(const bool& _blocked);

                    /**
                     * 判断参数 Blocked 是否已赋值
                     * @return Blocked 是否已赋值
                     * 
                     */
                    bool BlockedHasBeenSet() const;

                    /**
                     * 获取<p>Key关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetId <p>Key关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>Key关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetId <p>Key关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取<p>Key关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetName <p>Key关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置<p>Key关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetName <p>Key关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetName(const std::string& _budgetName);

                    /**
                     * 判断参数 BudgetName 是否已赋值
                     * @return BudgetName 是否已赋值
                     * 
                     */
                    bool BudgetNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Key按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * @return CreditUsageSet <p>Key按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * 
                     */
                    std::vector<CreditUsage> GetCreditUsageSet() const;

                    /**
                     * 设置<p>Key按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * @param _creditUsageSet <p>Key按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     * 
                     */
                    void SetCreditUsageSet(const std::vector<CreditUsage>& _creditUsageSet);

                    /**
                     * 判断参数 CreditUsageSet 是否已赋值
                     * @return CreditUsageSet 是否已赋值
                     * 
                     */
                    bool CreditUsageSetHasBeenSet() const;

                    /**
                     * 获取<p>Key的值</p>
                     * @return Key <p>Key的值</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Key的值</p>
                     * @param _key <p>Key的值</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>Key的ID</p>
                     * @return KeyId <p>Key的ID</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Key的ID</p>
                     * @param _keyId <p>Key的ID</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Key名称</p>
                     * @return KeyName <p>Key名称</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>Key名称</p>
                     * @param _keyName <p>Key名称</p>
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifiedTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifiedTime <p>修改时间</p>
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>限速信息</p>
                     * @return RateLimitConfig <p>限速信息</p>
                     * 
                     */
                    RateLimitConfigForKey GetRateLimitConfig() const;

                    /**
                     * 设置<p>限速信息</p>
                     * @param _rateLimitConfig <p>限速信息</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForKey& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>Key状态</p><p>枚举值：</p><ul><li>Active： 正常</li></ul>
                     * @return Status <p>Key状态</p><p>枚举值：</p><ul><li>Active： 正常</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Key状态</p><p>枚举值：</p><ul><li>Active： 正常</li></ul>
                     * @param _status <p>Key状态</p><p>枚举值：</p><ul><li>Active： 正常</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>所属的用户组ID</p>
                     * @return UserGroupId <p>所属的用户组ID</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>所属的用户组ID</p>
                     * @param _userGroupId <p>所属的用户组ID</p>
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>所属的用户组名称</p>
                     * @return UserGroupName <p>所属的用户组名称</p>
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置<p>所属的用户组名称</p>
                     * @param _userGroupName <p>所属的用户组名称</p>
                     * 
                     */
                    void SetUserGroupName(const std::string& _userGroupName);

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     * 
                     */
                    bool UserGroupNameHasBeenSet() const;

                private:

                    /**
                     * <p>是否禁用Key</p>
                     */
                    bool m_blocked;
                    bool m_blockedHasBeenSet;

                    /**
                     * <p>Key关联的Budget ID。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>Key关联的Budget名称。</p><p>未关联Budget时返回空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Key按Budget刷新周期划分的Credit使用情况。</p><p>当关联Budget配置多个刷新周期时，按1d、7d、30d顺序返回各周期用量；未关联Budget时返回空数组。</p>
                     */
                    std::vector<CreditUsage> m_creditUsageSet;
                    bool m_creditUsageSetHasBeenSet;

                    /**
                     * <p>Key的值</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Key的ID</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>Key名称</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>限速信息</p>
                     */
                    RateLimitConfigForKey m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>Key状态</p><p>枚举值：</p><ul><li>Active： 正常</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>所属的用户组ID</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * <p>所属的用户组名称</p>
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_KEYINFO_H_
