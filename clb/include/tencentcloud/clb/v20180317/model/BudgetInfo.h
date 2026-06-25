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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BudgetConfig.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForBudget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Budget信息
                */
                class BudgetInfo : public AbstractModel
                {
                public:
                    BudgetInfo();
                    ~BudgetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>关联的key数量</p>
                     * @return AssociationKeyCount <p>关联的key数量</p>
                     * 
                     */
                    uint64_t GetAssociationKeyCount() const;

                    /**
                     * 设置<p>关联的key数量</p>
                     * @param _associationKeyCount <p>关联的key数量</p>
                     * 
                     */
                    void SetAssociationKeyCount(const uint64_t& _associationKeyCount);

                    /**
                     * 判断参数 AssociationKeyCount 是否已赋值
                     * @return AssociationKeyCount 是否已赋值
                     * 
                     */
                    bool AssociationKeyCountHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型路由数量</p>
                     * @return AssociationModelRouterCount <p>关联的模型路由数量</p>
                     * 
                     */
                    uint64_t GetAssociationModelRouterCount() const;

                    /**
                     * 设置<p>关联的模型路由数量</p>
                     * @param _associationModelRouterCount <p>关联的模型路由数量</p>
                     * 
                     */
                    void SetAssociationModelRouterCount(const uint64_t& _associationModelRouterCount);

                    /**
                     * 判断参数 AssociationModelRouterCount 是否已赋值
                     * @return AssociationModelRouterCount 是否已赋值
                     * 
                     */
                    bool AssociationModelRouterCountHasBeenSet() const;

                    /**
                     * 获取<p>关联的用户组数量</p>
                     * @return AssociationUserGroupCount <p>关联的用户组数量</p>
                     * 
                     */
                    uint64_t GetAssociationUserGroupCount() const;

                    /**
                     * 设置<p>关联的用户组数量</p>
                     * @param _associationUserGroupCount <p>关联的用户组数量</p>
                     * 
                     */
                    void SetAssociationUserGroupCount(const uint64_t& _associationUserGroupCount);

                    /**
                     * 判断参数 AssociationUserGroupCount 是否已赋值
                     * @return AssociationUserGroupCount 是否已赋值
                     * 
                     */
                    bool AssociationUserGroupCountHasBeenSet() const;

                    /**
                     * 获取<p>Budget预算配置数组。</p><p>最多返回3个元素，每种刷新周期（1d/7d/30d）各一个。</p>
                     * @return BudgetConfigs <p>Budget预算配置数组。</p><p>最多返回3个元素，每种刷新周期（1d/7d/30d）各一个。</p>
                     * 
                     */
                    std::vector<BudgetConfig> GetBudgetConfigs() const;

                    /**
                     * 设置<p>Budget预算配置数组。</p><p>最多返回3个元素，每种刷新周期（1d/7d/30d）各一个。</p>
                     * @param _budgetConfigs <p>Budget预算配置数组。</p><p>最多返回3个元素，每种刷新周期（1d/7d/30d）各一个。</p>
                     * 
                     */
                    void SetBudgetConfigs(const std::vector<BudgetConfig>& _budgetConfigs);

                    /**
                     * 判断参数 BudgetConfigs 是否已赋值
                     * @return BudgetConfigs 是否已赋值
                     * 
                     */
                    bool BudgetConfigsHasBeenSet() const;

                    /**
                     * 获取<p>Budget ID。</p>
                     * @return BudgetId <p>Budget ID。</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>Budget ID。</p>
                     * @param _budgetId <p>Budget ID。</p>
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
                     * 获取<p>Budget名称。</p>
                     * @return BudgetName <p>Budget名称。</p>
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置<p>Budget名称。</p>
                     * @param _budgetName <p>Budget名称。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
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
                     * 获取<p>修改时间。</p>
                     * @return ModifiedTime <p>修改时间。</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>修改时间。</p>
                     * @param _modifiedTime <p>修改时间。</p>
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
                     * 获取<p>Budget限速信息。</p>
                     * @return RateLimitConfig <p>Budget限速信息。</p>
                     * 
                     */
                    RateLimitConfigForBudget GetRateLimitConfig() const;

                    /**
                     * 设置<p>Budget限速信息。</p>
                     * @param _rateLimitConfig <p>Budget限速信息。</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForBudget& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>Budget状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：运行中</li><li>Configuring：变配中</li><li>Deleting：删除中</li><li>ProvisionFailed：创建失败</li><li>ConfigureFailed：变配失败</li><li>DeletionFailed：删除失败</li></ul>
                     * @return Status <p>Budget状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：运行中</li><li>Configuring：变配中</li><li>Deleting：删除中</li><li>ProvisionFailed：创建失败</li><li>ConfigureFailed：变配失败</li><li>DeletionFailed：删除失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Budget状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：运行中</li><li>Configuring：变配中</li><li>Deleting：删除中</li><li>ProvisionFailed：创建失败</li><li>ConfigureFailed：变配失败</li><li>DeletionFailed：删除失败</li></ul>
                     * @param _status <p>Budget状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：运行中</li><li>Configuring：变配中</li><li>Deleting：删除中</li><li>ProvisionFailed：创建失败</li><li>ConfigureFailed：变配失败</li><li>DeletionFailed：删除失败</li></ul>
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
                     * <p>关联的key数量</p>
                     */
                    uint64_t m_associationKeyCount;
                    bool m_associationKeyCountHasBeenSet;

                    /**
                     * <p>关联的模型路由数量</p>
                     */
                    uint64_t m_associationModelRouterCount;
                    bool m_associationModelRouterCountHasBeenSet;

                    /**
                     * <p>关联的用户组数量</p>
                     */
                    uint64_t m_associationUserGroupCount;
                    bool m_associationUserGroupCountHasBeenSet;

                    /**
                     * <p>Budget预算配置数组。</p><p>最多返回3个元素，每种刷新周期（1d/7d/30d）各一个。</p>
                     */
                    std::vector<BudgetConfig> m_budgetConfigs;
                    bool m_budgetConfigsHasBeenSet;

                    /**
                     * <p>Budget ID。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>Budget名称。</p>
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>修改时间。</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>Budget限速信息。</p>
                     */
                    RateLimitConfigForBudget m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>Budget状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：运行中</li><li>Configuring：变配中</li><li>Deleting：删除中</li><li>ProvisionFailed：创建失败</li><li>ConfigureFailed：变配失败</li><li>DeletionFailed：删除失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETINFO_H_
