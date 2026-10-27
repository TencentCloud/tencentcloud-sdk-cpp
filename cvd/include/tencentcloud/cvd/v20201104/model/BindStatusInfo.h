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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_BINDSTATUSINFO_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_BINDSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 桌面实例绑定状态详情
                */
                class BindStatusInfo : public AbstractModel
                {
                public:
                    BindStatusInfo();
                    ~BindStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>桌面实例id</p>
                     * @return InstanceId <p>桌面实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>桌面实例id</p>
                     * @param _instanceId <p>桌面实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例的绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定<br>UNBINDING-解绑中</p>
                     * @return BindStatus <p>实例的绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定<br>UNBINDING-解绑中</p>
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置<p>实例的绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定<br>UNBINDING-解绑中</p>
                     * @param _bindStatus <p>实例的绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定<br>UNBINDING-解绑中</p>
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取<p>绑定的用户id【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId <p>绑定的用户id【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>绑定的用户id【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId <p>绑定的用户id【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定用户名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>绑定用户名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>绑定用户名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>绑定用户名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>绑定用户显示名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName <p>绑定用户显示名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>绑定用户显示名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName <p>绑定用户显示名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                private:

                    /**
                     * <p>桌面实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例的绑定状态。取值：<br>UNBOUND - 未绑定<br>BINDING - 绑定中<br>BOUND - 绑定<br>UNBINDING-解绑中</p>
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * <p>绑定的用户id【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>绑定用户名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>绑定用户显示名称【BOUND状态不允许为空】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_BINDSTATUSINFO_H_
