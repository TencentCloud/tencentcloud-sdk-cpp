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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESSOACCOUNTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESSOACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSSOAccount请求参数结构体
                */
                class CreateSSOAccountRequest : public AbstractModel
                {
                public:
                    CreateSSOAccountRequest();
                    ~CreateSSOAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Grafana 实例 ID，例如：grafana-abcdefgh
                     * @return InstanceId Grafana 实例 ID，例如：grafana-abcdefgh
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Grafana 实例 ID，例如：grafana-abcdefgh
                     * @param _instanceId Grafana 实例 ID，例如：grafana-abcdefgh
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
                     * 获取用户账号 ID ，例如：10000000
                     * @return UserId 用户账号 ID ，例如：10000000
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户账号 ID ，例如：10000000
                     * @param _userId 用户账号 ID ，例如：10000000
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
                     * 获取权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)
                     * @return Role 权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)
                     * 
                     */
                    std::vector<GrafanaAccountRole> GetRole() const;

                    /**
                     * 设置权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)
                     * @param _role 权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)
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

                private:

                    /**
                     * Grafana 实例 ID，例如：grafana-abcdefgh
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户账号 ID ，例如：10000000
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)
                     */
                    std::vector<GrafanaAccountRole> m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESSOACCOUNTREQUEST_H_
