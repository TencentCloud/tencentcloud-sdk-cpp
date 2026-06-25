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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEKEYREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateKey请求参数结构体
                */
                class CreateKeyRequest : public AbstractModel
                {
                public:
                    CreateKeyRequest();
                    ~CreateKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID</p>
                     * @return ModelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID</p>
                     * @param _modelRouterId <p>模型路由实例ID</p>
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
                     * 获取<p>限速配置</p>
                     * @return RateLimitConfig <p>限速配置</p>
                     * 
                     */
                    RateLimitConfigForKey GetRateLimitConfig() const;

                    /**
                     * 设置<p>限速配置</p>
                     * @param _rateLimitConfig <p>限速配置</p>
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
                     * 获取<p>关联的积分预算ID</p>
                     * @return BudgetId <p>关联的积分预算ID</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>关联的积分预算ID</p>
                     * @param _budgetId <p>关联的积分预算ID</p>
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
                     * 获取<p>需要关联的用户组ID</p>
                     * @return UserGroupId <p>需要关联的用户组ID</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>需要关联的用户组ID</p>
                     * @param _userGroupId <p>需要关联的用户组ID</p>
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

                private:

                    /**
                     * <p>模型路由实例ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>Key名称</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>限速配置</p>
                     */
                    RateLimitConfigForKey m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>关联的积分预算ID</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>需要关联的用户组ID</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEKEYREQUEST_H_
