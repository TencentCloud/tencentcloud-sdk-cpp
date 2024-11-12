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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HISTORYACCOUNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HISTORYACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 账号变更历史数据。
                */
                class HistoryAccount : public AbstractModel
                {
                public:
                    HistoryAccount();
                    ~HistoryAccount() = default;
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
                     * 获取主机安全客户端唯一Uuid。
                     * @return Uuid 主机安全客户端唯一Uuid。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全客户端唯一Uuid。
                     * @param _uuid 主机安全客户端唯一Uuid。
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
                     * 获取主机名。
                     * @return MachineName 主机名。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名。
                     * @param _machineName 主机名。
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
                     * 获取账号名。
                     * @return Username 账号名。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置账号名。
                     * @param _username 账号名。
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
                     * 获取账号变更类型。
<li>CREATE：表示新增账号</li>
<li>MODIFY：表示修改账号</li>
<li>DELETE：表示删除账号</li>
                     * @return ModifyType 账号变更类型。
<li>CREATE：表示新增账号</li>
<li>MODIFY：表示修改账号</li>
<li>DELETE：表示删除账号</li>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置账号变更类型。
<li>CREATE：表示新增账号</li>
<li>MODIFY：表示修改账号</li>
<li>DELETE：表示删除账号</li>
                     * @param _modifyType 账号变更类型。
<li>CREATE：表示新增账号</li>
<li>MODIFY：表示修改账号</li>
<li>DELETE：表示删除账号</li>
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取变更时间。
                     * @return ModifyTime 变更时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置变更时间。
                     * @param _modifyTime 变更时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机安全客户端唯一Uuid。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机内网IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 账号名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 账号变更类型。
<li>CREATE：表示新增账号</li>
<li>MODIFY：表示修改账号</li>
<li>DELETE：表示删除账号</li>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 变更时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HISTORYACCOUNT_H_
