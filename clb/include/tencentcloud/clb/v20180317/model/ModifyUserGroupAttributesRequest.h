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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYUSERGROUPATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYUSERGROUPATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyUserGroupAttributes请求参数结构体
                */
                class ModifyUserGroupAttributesRequest : public AbstractModel
                {
                public:
                    ModifyUserGroupAttributesRequest();
                    ~ModifyUserGroupAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID。</p>
                     * @return ModelRouterId <p>模型路由实例ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。</p>
                     * @param _modelRouterId <p>模型路由实例ID。</p>
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
                     * 获取<p>待修改的用户组ID。不可为「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * @return UserGroupId <p>待修改的用户组ID。不可为「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>待修改的用户组ID。不可为「未分组」虚拟分组 ugrp-ungrouped。</p>
                     * @param _userGroupId <p>待修改的用户组ID。不可为「未分组」虚拟分组 ugrp-ungrouped。</p>
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
                     * 获取<p>用户组关联的预算ID。不传则不修改预算关联；传入有效 budget-xxx 则将该用户组关联到此预算（若已关联其它预算则替换为本预算）。仅支持关联/替换，不支持解绑——解绑请用 DisassociateBudget。预算与组内 Key、所属实例的预算各自独立判定。</p>
                     * @return BudgetId <p>用户组关联的预算ID。不传则不修改预算关联；传入有效 budget-xxx 则将该用户组关联到此预算（若已关联其它预算则替换为本预算）。仅支持关联/替换，不支持解绑——解绑请用 DisassociateBudget。预算与组内 Key、所属实例的预算各自独立判定。</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>用户组关联的预算ID。不传则不修改预算关联；传入有效 budget-xxx 则将该用户组关联到此预算（若已关联其它预算则替换为本预算）。仅支持关联/替换，不支持解绑——解绑请用 DisassociateBudget。预算与组内 Key、所属实例的预算各自独立判定。</p>
                     * @param _budgetId <p>用户组关联的预算ID。不传则不修改预算关联；传入有效 budget-xxx 则将该用户组关联到此预算（若已关联其它预算则替换为本预算）。仅支持关联/替换，不支持解绑——解绑请用 DisassociateBudget。预算与组内 Key、所属实例的预算各自独立判定。</p>
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
                     * 获取<p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。不传则不修改；传入即整体覆盖。</p>
                     * @return IntentRouters <p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。不传则不修改；传入即整体覆盖。</p>
                     * 
                     */
                    std::vector<std::string> GetIntentRouters() const;

                    /**
                     * 设置<p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。不传则不修改；传入即整体覆盖。</p>
                     * @param _intentRouters <p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。不传则不修改；传入即整体覆盖。</p>
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
                     * 获取<p>用户组真实模型白名单。每一项须为该实例已关联的模型名。不传则不修改；传入即整体覆盖。</p>
                     * @return Models <p>用户组真实模型白名单。每一项须为该实例已关联的模型名。不传则不修改；传入即整体覆盖。</p>
                     * 
                     */
                    std::vector<std::string> GetModels() const;

                    /**
                     * 设置<p>用户组真实模型白名单。每一项须为该实例已关联的模型名。不传则不修改；传入即整体覆盖。</p>
                     * @param _models <p>用户组真实模型白名单。每一项须为该实例已关联的模型名。不传则不修改；传入即整体覆盖。</p>
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
                     * 获取<p>用户组名称。不传则不修改；传入时长度不超过255个字符、同实例下唯一。</p>
                     * @return UserGroupName <p>用户组名称。不传则不修改；传入时长度不超过255个字符、同实例下唯一。</p>
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置<p>用户组名称。不传则不修改；传入时长度不超过255个字符、同实例下唯一。</p>
                     * @param _userGroupName <p>用户组名称。不传则不修改；传入时长度不超过255个字符、同实例下唯一。</p>
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
                     * <p>模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>待修改的用户组ID。不可为「未分组」虚拟分组 ugrp-ungrouped。</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * <p>用户组关联的预算ID。不传则不修改预算关联；传入有效 budget-xxx 则将该用户组关联到此预算（若已关联其它预算则替换为本预算）。仅支持关联/替换，不支持解绑——解绑请用 DisassociateBudget。预算与组内 Key、所属实例的预算各自独立判定。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>用户组意图路由白名单（ir-xxx）。每一项须为该实例已创建的意图路由名。不传则不修改；传入即整体覆盖。</p>
                     */
                    std::vector<std::string> m_intentRouters;
                    bool m_intentRoutersHasBeenSet;

                    /**
                     * <p>用户组真实模型白名单。每一项须为该实例已关联的模型名。不传则不修改；传入即整体覆盖。</p>
                     */
                    std::vector<std::string> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>用户组名称。不传则不修改；传入时长度不超过255个字符、同实例下唯一。</p>
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYUSERGROUPATTRIBUTESREQUEST_H_
