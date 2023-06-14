/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAACCOUNTINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/GrafanaAccountRole.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Grafana可视化服务 授权账户信息
                */
                class GrafanaAccountInfo : public AbstractModel
                {
                public:
                    GrafanaAccountInfo();
                    ~GrafanaAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户账号ID
                     * @return UserId 用户账号ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户账号ID
                     * @param _userId 用户账号ID
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
                     * 获取用户权限
                     * @return Role 用户权限
                     * 
                     */
                    std::vector<GrafanaAccountRole> GetRole() const;

                    /**
                     * 设置用户权限
                     * @param _role 用户权限
                     * 
                     */
                    void SetRole(const std::vector<GrafanaAccountRole>& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Notes 备注
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置备注
                     * @param _notes 备注
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateAt 创建时间
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置创建时间
                     * @param _createAt 创建时间
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户主账号 UIN
                     * @return Uin 用户主账号 UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户主账号 UIN
                     * @param _uin 用户主账号 UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 用户账号ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户权限
                     */
                    std::vector<GrafanaAccountRole> m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户主账号 UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAACCOUNTINFO_H_
