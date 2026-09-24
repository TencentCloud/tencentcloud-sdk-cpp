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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DORISCONNECTION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DORISCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NetWork.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc doris连接信息
                */
                class DorisConnection : public AbstractModel
                {
                public:
                    DorisConnection();
                    ~DorisConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>JDBC连接地址</p>
                     * @return JDBCUrl <p>JDBC连接地址</p>
                     * 
                     */
                    std::string GetJDBCUrl() const;

                    /**
                     * 设置<p>JDBC连接地址</p>
                     * @param _jDBCUrl <p>JDBC连接地址</p>
                     * 
                     */
                    void SetJDBCUrl(const std::string& _jDBCUrl);

                    /**
                     * 判断参数 JDBCUrl 是否已赋值
                     * @return JDBCUrl 是否已赋值
                     * 
                     */
                    bool JDBCUrlHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return User <p>账号</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _user <p>账号</p>
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _password <p>密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>网络信息</p>
                     * @return NetWork <p>网络信息</p>
                     * 
                     */
                    NetWork GetNetWork() const;

                    /**
                     * 设置<p>网络信息</p>
                     * @param _netWork <p>网络信息</p>
                     * 
                     */
                    void SetNetWork(const NetWork& _netWork);

                    /**
                     * 判断参数 NetWork 是否已赋值
                     * @return NetWork 是否已赋值
                     * 
                     */
                    bool NetWorkHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>JDBC连接地址</p>
                     */
                    std::string m_jDBCUrl;
                    bool m_jDBCUrlHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>网络信息</p>
                     */
                    NetWork m_netWork;
                    bool m_netWorkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DORISCONNECTION_H_
