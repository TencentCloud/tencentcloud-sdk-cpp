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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_USERGROUPINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_USERGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CreditUsage.h>
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
                * 用户组信息。
                */
                class UserGroupInfo : public AbstractModel
                {
                public:
                    UserGroupInfo();
                    ~UserGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户组ID。「未分组」虚拟分组固定为 ugrp-ungrouped。</p>
                     * @return UserGroupId <p>用户组ID。「未分组」虚拟分组固定为 ugrp-ungrouped。</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>用户组ID。「未分组」虚拟分组固定为 ugrp-ungrouped。</p>
                     * @param _userGroupId <p>用户组ID。「未分组」虚拟分组固定为 ugrp-ungrouped。</p>
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
                     * 获取<p>用户组名称。「未分组」虚拟分组固定为 ungrouped。</p>
                     * @return UserGroupName <p>用户组名称。「未分组」虚拟分组固定为 ungrouped。</p>
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置<p>用户组名称。「未分组」虚拟分组固定为 ungrouped。</p>
                     * @param _userGroupName <p>用户组名称。「未分组」虚拟分组固定为 ungrouped。</p>
                     * 
                     */
                    void SetUserGroupName(const std::string& _userGroupName);

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     * 
                     */
                    bool UserGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>所属模型路由实例ID。</p>
                     * @return ModelRouterId <p>所属模型路由实例ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>所属模型路由实例ID。</p>
                     * @param _modelRouterId <p>所属模型路由实例ID。</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>用户组状态。</p><p>枚举值：</p><ul><li>Creating：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>Deleting：删除中</li></ul><p>「未分组」虚拟分组（ugrp-ungrouped）恒为 Active。</p>
                     * @return Status <p>用户组状态。</p><p>枚举值：</p><ul><li>Creating：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>Deleting：删除中</li></ul><p>「未分组」虚拟分组（ugrp-ungrouped）恒为 Active。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>用户组状态。</p><p>枚举值：</p><ul><li>Creating：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>Deleting：删除中</li></ul><p>「未分组」虚拟分组（ugrp-ungrouped）恒为 Active。</p>
                     * @param _status <p>用户组状态。</p><p>枚举值：</p><ul><li>Creating：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>Deleting：删除中</li></ul><p>「未分组」虚拟分组（ugrp-ungrouped）恒为 Active。</p>
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
                     * 获取<p>用户组真实模型白名单。「未分组」虚拟分组为空数组。</p>
                     * @return Models <p>用户组真实模型白名单。「未分组」虚拟分组为空数组。</p>
                     * 
                     */
                    std::vector<std::string> GetModels() const;

                    /**
                     * 设置<p>用户组真实模型白名单。「未分组」虚拟分组为空数组。</p>
                     * @param _models <p>用户组真实模型白名单。「未分组」虚拟分组为空数组。</p>
                     * 
                     */
                    void SetModels(const std::vector<std::string>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                    /**
                     * 获取<p>用户组意图路由白名单（ir-xxx）。「未分组」虚拟分组为空数组。</p>
                     * @return IntentRouters <p>用户组意图路由白名单（ir-xxx）。「未分组」虚拟分组为空数组。</p>
                     * 
                     */
                    std::vector<std::string> GetIntentRouters() const;

                    /**
                     * 设置<p>用户组意图路由白名单（ir-xxx）。「未分组」虚拟分组为空数组。</p>
                     * @param _intentRouters <p>用户组意图路由白名单（ir-xxx）。「未分组」虚拟分组为空数组。</p>
                     * 
                     */
                    void SetIntentRouters(const std::vector<std::string>& _intentRouters);

                    /**
                     * 判断参数 IntentRouters 是否已赋值
                     * @return IntentRouters 是否已赋值
                     * 
                     */
                    bool IntentRoutersHasBeenSet() const;

                    /**
                     * 获取<p>关联的Budget ID。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetId <p>关联的Budget ID。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>关联的Budget ID。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetId <p>关联的Budget ID。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
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
                     * 获取<p>关联的Budget名称。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetName <p>关联的Budget名称。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置<p>关联的Budget名称。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetName <p>关联的Budget名称。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
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
                     * 获取<p>用户组多刷新周期 Credit 使用情况。</p><p>无多周期预算时为空数组。</p>
                     * @return CreditUsageSet <p>用户组多刷新周期 Credit 使用情况。</p><p>无多周期预算时为空数组。</p>
                     * 
                     */
                    std::vector<CreditUsage> GetCreditUsageSet() const;

                    /**
                     * 设置<p>用户组多刷新周期 Credit 使用情况。</p><p>无多周期预算时为空数组。</p>
                     * @param _creditUsageSet <p>用户组多刷新周期 Credit 使用情况。</p><p>无多周期预算时为空数组。</p>
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
                     * 获取<p>用户组当前包含的 Key 数量。「未分组」虚拟分组（ugrp-ungrouped）返回该模型路由实例下未归属任何用户组的 Key 数量。</p>
                     * @return KeyCount <p>用户组当前包含的 Key 数量。「未分组」虚拟分组（ugrp-ungrouped）返回该模型路由实例下未归属任何用户组的 Key 数量。</p>
                     * 
                     */
                    int64_t GetKeyCount() const;

                    /**
                     * 设置<p>用户组当前包含的 Key 数量。「未分组」虚拟分组（ugrp-ungrouped）返回该模型路由实例下未归属任何用户组的 Key 数量。</p>
                     * @param _keyCount <p>用户组当前包含的 Key 数量。「未分组」虚拟分组（ugrp-ungrouped）返回该模型路由实例下未归属任何用户组的 Key 数量。</p>
                     * 
                     */
                    void SetKeyCount(const int64_t& _keyCount);

                    /**
                     * 判断参数 KeyCount 是否已赋值
                     * @return KeyCount 是否已赋值
                     * 
                     */
                    bool KeyCountHasBeenSet() const;

                    /**
                     * 获取<p>标签列表。「未分组」虚拟分组为空数组。</p>
                     * @return Tags <p>标签列表。「未分组」虚拟分组为空数组。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签列表。「未分组」虚拟分组为空数组。</p>
                     * @param _tags <p>标签列表。「未分组」虚拟分组为空数组。</p>
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
                     * 获取<p>创建时间。「未分组」虚拟分组不返回此字段。</p>
                     * @return CreatedTime <p>创建时间。「未分组」虚拟分组不返回此字段。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。「未分组」虚拟分组不返回此字段。</p>
                     * @param _createdTime <p>创建时间。「未分组」虚拟分组不返回此字段。</p>
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
                     * 获取<p>修改时间。「未分组」虚拟分组不返回此字段。</p>
                     * @return ModifiedTime <p>修改时间。「未分组」虚拟分组不返回此字段。</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>修改时间。「未分组」虚拟分组不返回此字段。</p>
                     * @param _modifiedTime <p>修改时间。「未分组」虚拟分组不返回此字段。</p>
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>用户组ID。「未分组」虚拟分组固定为 ugrp-ungrouped。</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * <p>用户组名称。「未分组」虚拟分组固定为 ungrouped。</p>
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * <p>所属模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>用户组状态。</p><p>枚举值：</p><ul><li>Creating：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>Deleting：删除中</li></ul><p>「未分组」虚拟分组（ugrp-ungrouped）恒为 Active。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>用户组真实模型白名单。「未分组」虚拟分组为空数组。</p>
                     */
                    std::vector<std::string> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>用户组意图路由白名单（ir-xxx）。「未分组」虚拟分组为空数组。</p>
                     */
                    std::vector<std::string> m_intentRouters;
                    bool m_intentRoutersHasBeenSet;

                    /**
                     * <p>关联的Budget ID。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>关联的Budget名称。</p><p>未关联时为空；「未分组」虚拟分组恒为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * <p>用户组多刷新周期 Credit 使用情况。</p><p>无多周期预算时为空数组。</p>
                     */
                    std::vector<CreditUsage> m_creditUsageSet;
                    bool m_creditUsageSetHasBeenSet;

                    /**
                     * <p>用户组当前包含的 Key 数量。「未分组」虚拟分组（ugrp-ungrouped）返回该模型路由实例下未归属任何用户组的 Key 数量。</p>
                     */
                    int64_t m_keyCount;
                    bool m_keyCountHasBeenSet;

                    /**
                     * <p>标签列表。「未分组」虚拟分组为空数组。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>创建时间。「未分组」虚拟分组不返回此字段。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>修改时间。「未分组」虚拟分组不返回此字段。</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_USERGROUPINFO_H_
