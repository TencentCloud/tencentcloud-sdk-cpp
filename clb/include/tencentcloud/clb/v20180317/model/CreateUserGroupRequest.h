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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEUSERGROUPREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateUserGroup请求参数结构体
                */
                class CreateUserGroupRequest : public AbstractModel
                {
                public:
                    CreateUserGroupRequest();
                    ~CreateUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID。用户组将创建在该实例下。</p>
                     * @return ModelRouterId <p>模型路由实例ID。用户组将创建在该实例下。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。用户组将创建在该实例下。</p>
                     * @param _modelRouterId <p>模型路由实例ID。用户组将创建在该实例下。</p>
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
                     * 获取<p>用户组名称。必填。同一模型路由实例下名称唯一，长度不超过255个字符。</p>
                     * @return UserGroupName <p>用户组名称。必填。同一模型路由实例下名称唯一，长度不超过255个字符。</p>
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置<p>用户组名称。必填。同一模型路由实例下名称唯一，长度不超过255个字符。</p>
                     * @param _userGroupName <p>用户组名称。必填。同一模型路由实例下名称唯一，长度不超过255个字符。</p>
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
                     * 获取<p>建组时直接关联的预算 ID（须为已存在的 Budget）。关联后由该 Budget 统一管理本组的消费上限与限速。不传表示不关联预算，可建组后再用 AssociateBudget 关联。</p>
                     * @return BudgetId <p>建组时直接关联的预算 ID（须为已存在的 Budget）。关联后由该 Budget 统一管理本组的消费上限与限速。不传表示不关联预算，可建组后再用 AssociateBudget 关联。</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>建组时直接关联的预算 ID（须为已存在的 Budget）。关联后由该 Budget 统一管理本组的消费上限与限速。不传表示不关联预算，可建组后再用 AssociateBudget 关联。</p>
                     * @param _budgetId <p>建组时直接关联的预算 ID（须为已存在的 Budget）。关联后由该 Budget 统一管理本组的消费上限与限速。不传表示不关联预算，可建组后再用 AssociateBudget 关联。</p>
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
                     * 获取<p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。命中意图路由名时其内部真实模型自动豁免白名单。为空表示不授权任何意图路由。</p>
                     * @return IntentRouters <p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。命中意图路由名时其内部真实模型自动豁免白名单。为空表示不授权任何意图路由。</p>
                     * 
                     */
                    std::vector<std::string> GetIntentRouters() const;

                    /**
                     * 设置<p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。命中意图路由名时其内部真实模型自动豁免白名单。为空表示不授权任何意图路由。</p>
                     * @param _intentRouters <p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。命中意图路由名时其内部真实模型自动豁免白名单。为空表示不授权任何意图路由。</p>
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
                     * 获取<p>建组时同时绑定的已有 Key ID 列表，最多100个。每个 Key 须属于同一模型路由实例。建组与绑定为一个原子异步任务，任一 Key 失败则整组创建回滚。不传表示建空组。</p>
                     * @return KeyIds <p>建组时同时绑定的已有 Key ID 列表，最多100个。每个 Key 须属于同一模型路由实例。建组与绑定为一个原子异步任务，任一 Key 失败则整组创建回滚。不传表示建空组。</p>
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置<p>建组时同时绑定的已有 Key ID 列表，最多100个。每个 Key 须属于同一模型路由实例。建组与绑定为一个原子异步任务，任一 Key 失败则整组创建回滚。不传表示建空组。</p>
                     * @param _keyIds <p>建组时同时绑定的已有 Key ID 列表，最多100个。每个 Key 须属于同一模型路由实例。建组与绑定为一个原子异步任务，任一 Key 失败则整组创建回滚。不传表示建空组。</p>
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>用户组真实模型白名单。每一项须为该实例已关联的模型名。为空表示不在用户组层限制真实模型（按实例层白名单生效）。</p>
                     * @return Models <p>用户组真实模型白名单。每一项须为该实例已关联的模型名。为空表示不在用户组层限制真实模型（按实例层白名单生效）。</p>
                     * 
                     */
                    std::vector<std::string> GetModels() const;

                    /**
                     * 设置<p>用户组真实模型白名单。每一项须为该实例已关联的模型名。为空表示不在用户组层限制真实模型（按实例层白名单生效）。</p>
                     * @param _models <p>用户组真实模型白名单。每一项须为该实例已关联的模型名。为空表示不在用户组层限制真实模型（按实例层白名单生效）。</p>
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
                     * 获取<p>标签列表，最多50个。</p>
                     * @return Tags <p>标签列表，最多50个。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签列表，最多50个。</p>
                     * @param _tags <p>标签列表，最多50个。</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例ID。用户组将创建在该实例下。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>用户组名称。必填。同一模型路由实例下名称唯一，长度不超过255个字符。</p>
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * <p>建组时直接关联的预算 ID（须为已存在的 Budget）。关联后由该 Budget 统一管理本组的消费上限与限速。不传表示不关联预算，可建组后再用 AssociateBudget 关联。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。命中意图路由名时其内部真实模型自动豁免白名单。为空表示不授权任何意图路由。</p>
                     */
                    std::vector<std::string> m_intentRouters;
                    bool m_intentRoutersHasBeenSet;

                    /**
                     * <p>建组时同时绑定的已有 Key ID 列表，最多100个。每个 Key 须属于同一模型路由实例。建组与绑定为一个原子异步任务，任一 Key 失败则整组创建回滚。不传表示建空组。</p>
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * <p>用户组真实模型白名单。每一项须为该实例已关联的模型名。为空表示不在用户组层限制真实模型（按实例层白名单生效）。</p>
                     */
                    std::vector<std::string> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>标签列表，最多50个。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEUSERGROUPREQUEST_H_
