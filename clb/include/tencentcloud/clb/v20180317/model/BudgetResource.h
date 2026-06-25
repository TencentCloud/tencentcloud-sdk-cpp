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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETRESOURCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Budget关联资源对象。仅支持企业型模型路由实例和企业型实例下的Key。
                */
                class BudgetResource : public AbstractModel
                {
                public:
                    BudgetResource();
                    ~BudgetResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型路由实例ID。</p><p>当Type为ModelRouter时表示要关联的实例；当Type为Key时表示Key所属实例。</p>
                     * @return ModelRouterId <p>模型路由实例ID。</p><p>当Type为ModelRouter时表示要关联的实例；当Type为Key时表示Key所属实例。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。</p><p>当Type为ModelRouter时表示要关联的实例；当Type为Key时表示Key所属实例。</p>
                     * @param _modelRouterId <p>模型路由实例ID。</p><p>当Type为ModelRouter时表示要关联的实例；当Type为Key时表示Key所属实例。</p>
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
                     * 获取<p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组（Type 为 UserGroup 时需传 UserGroupId）</li></ul>
                     * @return Type <p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组（Type 为 UserGroup 时需传 UserGroupId）</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组（Type 为 UserGroup 时需传 UserGroupId）</li></ul>
                     * @param _type <p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组（Type 为 UserGroup 时需传 UserGroupId）</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Key ID。</p><p>字段本身选填；当Type为Key时必填，当Type为ModelRouter时不传。</p>
                     * @return KeyId <p>Key ID。</p><p>字段本身选填；当Type为Key时必填，当Type为ModelRouter时不传。</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Key ID。</p><p>字段本身选填；当Type为Key时必填，当Type为ModelRouter时不传。</p>
                     * @param _keyId <p>Key ID。</p><p>字段本身选填；当Type为Key时必填，当Type为ModelRouter时不传。</p>
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
                     * 获取<p>用户组ID</p>
                     * @return UserGroupId <p>用户组ID</p>
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>用户组ID</p>
                     * @param _userGroupId <p>用户组ID</p>
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
                     * <p>模型路由实例ID。</p><p>当Type为ModelRouter时表示要关联的实例；当Type为Key时表示Key所属实例。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li><li>UserGroup：用户组（Type 为 UserGroup 时需传 UserGroupId）</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Key ID。</p><p>字段本身选填；当Type为Key时必填，当Type为ModelRouter时不传。</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>用户组ID</p>
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETRESOURCE_H_
