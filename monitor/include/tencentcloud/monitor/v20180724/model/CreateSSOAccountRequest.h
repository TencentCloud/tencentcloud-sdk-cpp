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
                     * 获取<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @return InstanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @param _instanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
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
                     * 获取<p>用户账号 ID ，例如：10000000</p>
                     * @return UserId <p>用户账号 ID ，例如：10000000</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户账号 ID ，例如：10000000</p>
                     * @param _userId <p>用户账号 ID ，例如：10000000</p>
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
                     * 获取<p>权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)</p>
                     * @return Role <p>权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)</p>
                     * 
                     */
                    std::vector<GrafanaAccountRole> GetRole() const;

                    /**
                     * 设置<p>权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)</p>
                     * @param _role <p>权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)</p>
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
                     * 获取<p>备注</p>
                     * @return Notes <p>备注</p>
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _notes <p>备注</p>
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
                     * <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户账号 ID ，例如：10000000</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>权限(只取数组中的第一个，其中 Organization 暂未使用，可不填)</p>
                     */
                    std::vector<GrafanaAccountRole> m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATESSOACCOUNTREQUEST_H_
