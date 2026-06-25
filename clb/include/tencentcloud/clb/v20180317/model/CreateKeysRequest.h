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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEKEYSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/InputKeyInfo.h>
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
                * CreateKeys请求参数结构体
                */
                class CreateKeysRequest : public AbstractModel
                {
                public:
                    CreateKeysRequest();
                    ~CreateKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由ID</p>
                     * @return ModelRouterId <p>模型路由ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由ID</p>
                     * @param _modelRouterId <p>模型路由ID</p>
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
                     * 获取<p>需要绑定的预算信息，所有Key共用</p>
                     * @return BudgetId <p>需要绑定的预算信息，所有Key共用</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>需要绑定的预算信息，所有Key共用</p>
                     * @param _budgetId <p>需要绑定的预算信息，所有Key共用</p>
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
                     * 获取<p>Key列表</p>
                     * @return Keys <p>Key列表</p>
                     * 
                     */
                    std::vector<InputKeyInfo> GetKeys() const;

                    /**
                     * 设置<p>Key列表</p>
                     * @param _keys <p>Key列表</p>
                     * 
                     */
                    void SetKeys(const std::vector<InputKeyInfo>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取<p>批量创建Key的模式</p><p>枚举值：</p><ul><li>Generate： 平台生成Key</li><li>Import： 导入自带Key</li></ul><p>默认值：Generate</p>
                     * @return Mode <p>批量创建Key的模式</p><p>枚举值：</p><ul><li>Generate： 平台生成Key</li><li>Import： 导入自带Key</li></ul><p>默认值：Generate</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>批量创建Key的模式</p><p>枚举值：</p><ul><li>Generate： 平台生成Key</li><li>Import： 导入自带Key</li></ul><p>默认值：Generate</p>
                     * @param _mode <p>批量创建Key的模式</p><p>枚举值：</p><ul><li>Generate： 平台生成Key</li><li>Import： 导入自带Key</li></ul><p>默认值：Generate</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>限速信息，所有Key共用</p>
                     * @return RateLimitConfig <p>限速信息，所有Key共用</p>
                     * 
                     */
                    RateLimitConfigForKey GetRateLimitConfig() const;

                    /**
                     * 设置<p>限速信息，所有Key共用</p>
                     * @param _rateLimitConfig <p>限速信息，所有Key共用</p>
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
                     * 获取<p>标签。所有Key都会绑定该标签。</p>
                     * @return Tags <p>标签。所有Key都会绑定该标签。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签。所有Key都会绑定该标签。</p>
                     * @param _tags <p>标签。所有Key都会绑定该标签。</p>
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

                private:

                    /**
                     * <p>模型路由ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>需要绑定的预算信息，所有Key共用</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>Key列表</p>
                     */
                    std::vector<InputKeyInfo> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>批量创建Key的模式</p><p>枚举值：</p><ul><li>Generate： 平台生成Key</li><li>Import： 导入自带Key</li></ul><p>默认值：Generate</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>限速信息，所有Key共用</p>
                     */
                    RateLimitConfigForKey m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>标签。所有Key都会绑定该标签。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>需要关联的用户组ID</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEKEYSREQUEST_H_
