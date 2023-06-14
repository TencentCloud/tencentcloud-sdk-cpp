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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 帐号列表信息数据。
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一ID。
                     * @return Id 唯一ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一ID。
                     * @param _id 唯一ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一Uuid
                     * @return Uuid 云镜客户端唯一Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一Uuid
                     * @param _uuid 云镜客户端唯一Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机内网IP。
                     * @return MachineIp 主机内网IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP。
                     * @param _machineIp 主机内网IP。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名称。
                     * @return MachineName 主机名称。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称。
                     * @param _machineName 主机名称。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取帐号名。
                     * @return Username 帐号名。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置帐号名。
                     * @param _username 帐号名。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取帐号所属组。
                     * @return Groups 帐号所属组。
                     * 
                     */
                    std::string GetGroups() const;

                    /**
                     * 设置帐号所属组。
                     * @param _groups 帐号所属组。
                     * 
                     */
                    void SetGroups(const std::string& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取帐号类型。
<li>ORDINARY：普通帐号</li>
<li>SUPPER：超级管理员帐号</li>
                     * @return Privilege 帐号类型。
<li>ORDINARY：普通帐号</li>
<li>SUPPER：超级管理员帐号</li>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置帐号类型。
<li>ORDINARY：普通帐号</li>
<li>SUPPER：超级管理员帐号</li>
                     * @param _privilege 帐号类型。
<li>ORDINARY：普通帐号</li>
<li>SUPPER：超级管理员帐号</li>
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取帐号创建时间。
                     * @return AccountCreateTime 帐号创建时间。
                     * 
                     */
                    std::string GetAccountCreateTime() const;

                    /**
                     * 设置帐号创建时间。
                     * @param _accountCreateTime 帐号创建时间。
                     * 
                     */
                    void SetAccountCreateTime(const std::string& _accountCreateTime);

                    /**
                     * 判断参数 AccountCreateTime 是否已赋值
                     * @return AccountCreateTime 是否已赋值
                     * 
                     */
                    bool AccountCreateTimeHasBeenSet() const;

                    /**
                     * 获取帐号最后登录时间。
                     * @return LastLoginTime 帐号最后登录时间。
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置帐号最后登录时间。
                     * @param _lastLoginTime 帐号最后登录时间。
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端唯一Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机内网IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名称。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 帐号名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 帐号所属组。
                     */
                    std::string m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 帐号类型。
<li>ORDINARY：普通帐号</li>
<li>SUPPER：超级管理员帐号</li>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 帐号创建时间。
                     */
                    std::string m_accountCreateTime;
                    bool m_accountCreateTimeHasBeenSet;

                    /**
                     * 帐号最后登录时间。
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_ACCOUNT_H_
