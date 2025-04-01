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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTARTDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTARTDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RestartDBInstance请求参数结构体
                */
                class RestartDBInstanceRequest : public AbstractModel
                {
                public:
                    RestartDBInstanceRequest();
                    ~RestartDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 数据库实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 数据库实例ID，形如mssql-njj2mtpl
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
                     * 获取重启设置，0-立刻重启，1-维护时间窗口内重启，默认0
                     * @return WaitSwitch 重启设置，0-立刻重启，1-维护时间窗口内重启，默认0
                     * 
                     */
                    uint64_t GetWaitSwitch() const;

                    /**
                     * 设置重启设置，0-立刻重启，1-维护时间窗口内重启，默认0
                     * @param _waitSwitch 重启设置，0-立刻重启，1-维护时间窗口内重启，默认0
                     * 
                     */
                    void SetWaitSwitch(const uint64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                private:

                    /**
                     * 数据库实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 重启设置，0-立刻重启，1-维护时间窗口内重启，默认0
                     */
                    uint64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTARTDBINSTANCEREQUEST_H_
