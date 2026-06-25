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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYKEYSUSERGROUPREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYKEYSUSERGROUPREQUEST_H_

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
                * ModifyKeysUserGroup请求参数结构体
                */
                class ModifyKeysUserGroupRequest : public AbstractModel
                {
                public:
                    ModifyKeysUserGroupRequest();
                    ~ModifyKeysUserGroupRequest() = default;
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
                     * 获取<p>目标归属用户组ID。传真实用户组ID表示批量入组或跨组移动（Key 已属其它组则改为目标组）；传 ugrp-ungrouped 表示批量移出到未分组。</p>
                     * @return UserGroupId <p>目标归属用户组ID。传真实用户组ID表示批量入组或跨组移动（Key 已属其它组则改为目标组）；传 ugrp-ungrouped 表示批量移出到未分组。</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>目标归属用户组ID。传真实用户组ID表示批量入组或跨组移动（Key 已属其它组则改为目标组）；传 ugrp-ungrouped 表示批量移出到未分组。</p>
                     * @param _userGroupId <p>目标归属用户组ID。传真实用户组ID表示批量入组或跨组移动（Key 已属其它组则改为目标组）；传 ugrp-ungrouped 表示批量移出到未分组。</p>
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
                     * 获取<p>待变更归属的 Key ID 列表，单次1-100个。</p>
                     * @return KeyIds <p>待变更归属的 Key ID 列表，单次1-100个。</p>
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置<p>待变更归属的 Key ID 列表，单次1-100个。</p>
                     * @param _keyIds <p>待变更归属的 Key ID 列表，单次1-100个。</p>
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>目标归属用户组ID。传真实用户组ID表示批量入组或跨组移动（Key 已属其它组则改为目标组）；传 ugrp-ungrouped 表示批量移出到未分组。</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * <p>待变更归属的 Key ID 列表，单次1-100个。</p>
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYKEYSUSERGROUPREQUEST_H_
