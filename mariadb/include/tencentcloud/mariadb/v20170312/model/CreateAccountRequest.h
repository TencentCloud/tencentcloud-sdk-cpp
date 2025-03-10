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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAccount请求参数结构体
                */
                class CreateAccountRequest : public AbstractModel
                {
                public:
                    CreateAccountRequest();
                    ~CreateAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @param _instanceId 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
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
                     * 获取账号名，账号名需要1-32个字符，由字母、数字或特殊字符组成；以字母开头；特殊字符为_-
                     * @return UserName 账号名，账号名需要1-32个字符，由字母、数字或特殊字符组成；以字母开头；特殊字符为_-
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置账号名，账号名需要1-32个字符，由字母、数字或特殊字符组成；以字母开头；特殊字符为_-
                     * @param _userName 账号名，账号名需要1-32个字符，由字母、数字或特殊字符组成；以字母开头；特殊字符为_-
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
                     * 获取可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     * @return Host 可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     * @param _host 可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号密码，密码需要 8\~32 个字符，不能以 '/' 开头，并且至少包含字母、数字和特殊字符 ()~!@#$%^&*-+=_|{}[]:<>,.?/ 中的两项
                     * @return Password 账号密码，密码需要 8\~32 个字符，不能以 '/' 开头，并且至少包含字母、数字和特殊字符 ()~!@#$%^&*-+=_|{}[]:<>,.?/ 中的两项
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置账号密码，密码需要 8\~32 个字符，不能以 '/' 开头，并且至少包含字母、数字和特殊字符 ()~!@#$%^&*-+=_|{}[]:<>,.?/ 中的两项
                     * @param _password 账号密码，密码需要 8\~32 个字符，不能以 '/' 开头，并且至少包含字母、数字和特殊字符 ()~!@#$%^&*-+=_|{}[]:<>,.?/ 中的两项
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
                     * 获取是否创建为只读账号，0：否； 1：只读账号，该账号的sql请求优先选择备机执行，备机延迟时选择主机执行；2：只读账号，优先选择备机执行，备机延迟时操作报错；3：只读账号，优先选择备机执行，忽略备机延迟只读备机；
                     * @return ReadOnly 是否创建为只读账号，0：否； 1：只读账号，该账号的sql请求优先选择备机执行，备机延迟时选择主机执行；2：只读账号，优先选择备机执行，备机延迟时操作报错；3：只读账号，优先选择备机执行，忽略备机延迟只读备机；
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置是否创建为只读账号，0：否； 1：只读账号，该账号的sql请求优先选择备机执行，备机延迟时选择主机执行；2：只读账号，优先选择备机执行，备机延迟时操作报错；3：只读账号，优先选择备机执行，忽略备机延迟只读备机；
                     * @param _readOnly 是否创建为只读账号，0：否； 1：只读账号，该账号的sql请求优先选择备机执行，备机延迟时选择主机执行；2：只读账号，优先选择备机执行，备机延迟时操作报错；3：只读账号，优先选择备机执行，忽略备机延迟只读备机；
                     * 
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取账号备注，可以包含中文、英文字符、常见符号和数字，最多256个字符
                     * @return Description 账号备注，可以包含中文、英文字符、常见符号和数字，最多256个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置账号备注，可以包含中文、英文字符、常见符号和数字，最多256个字符
                     * @param _description 账号备注，可以包含中文、英文字符、常见符号和数字，最多256个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取根据传入时间判断备机不可用
                     * @return DelayThresh 根据传入时间判断备机不可用
                     * 
                     */
                    int64_t GetDelayThresh() const;

                    /**
                     * 设置根据传入时间判断备机不可用
                     * @param _delayThresh 根据传入时间判断备机不可用
                     * 
                     */
                    void SetDelayThresh(const int64_t& _delayThresh);

                    /**
                     * 判断参数 DelayThresh 是否已赋值
                     * @return DelayThresh 是否已赋值
                     * 
                     */
                    bool DelayThreshHasBeenSet() const;

                    /**
                     * 获取针对只读账号，设置策略是否固定备机，0：不固定备机，即备机不满足条件与客户端不断开连接，Proxy选择其他可用备机，1：备机不满足条件断开连接，确保一个连接固定备机。
                     * @return SlaveConst 针对只读账号，设置策略是否固定备机，0：不固定备机，即备机不满足条件与客户端不断开连接，Proxy选择其他可用备机，1：备机不满足条件断开连接，确保一个连接固定备机。
                     * 
                     */
                    int64_t GetSlaveConst() const;

                    /**
                     * 设置针对只读账号，设置策略是否固定备机，0：不固定备机，即备机不满足条件与客户端不断开连接，Proxy选择其他可用备机，1：备机不满足条件断开连接，确保一个连接固定备机。
                     * @param _slaveConst 针对只读账号，设置策略是否固定备机，0：不固定备机，即备机不满足条件与客户端不断开连接，Proxy选择其他可用备机，1：备机不满足条件断开连接，确保一个连接固定备机。
                     * 
                     */
                    void SetSlaveConst(const int64_t& _slaveConst);

                    /**
                     * 判断参数 SlaveConst 是否已赋值
                     * @return SlaveConst 是否已赋值
                     * 
                     */
                    bool SlaveConstHasBeenSet() const;

                    /**
                     * 获取用户最大连接数限制参数。不传或者传0表示为不限制，对应max_user_connections参数，目前10.1内核版本不支持设置。
                     * @return MaxUserConnections 用户最大连接数限制参数。不传或者传0表示为不限制，对应max_user_connections参数，目前10.1内核版本不支持设置。
                     * 
                     */
                    uint64_t GetMaxUserConnections() const;

                    /**
                     * 设置用户最大连接数限制参数。不传或者传0表示为不限制，对应max_user_connections参数，目前10.1内核版本不支持设置。
                     * @param _maxUserConnections 用户最大连接数限制参数。不传或者传0表示为不限制，对应max_user_connections参数，目前10.1内核版本不支持设置。
                     * 
                     */
                    void SetMaxUserConnections(const uint64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                    /**
                     * 获取使用GetPublicKey返回的RSA2048公钥加密后的密码
                     * @return EncryptedPassword 使用GetPublicKey返回的RSA2048公钥加密后的密码
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置使用GetPublicKey返回的RSA2048公钥加密后的密码
                     * @param _encryptedPassword 使用GetPublicKey返回的RSA2048公钥加密后的密码
                     * 
                     */
                    void SetEncryptedPassword(const std::string& _encryptedPassword);

                    /**
                     * 判断参数 EncryptedPassword 是否已赋值
                     * @return EncryptedPassword 是否已赋值
                     * 
                     */
                    bool EncryptedPasswordHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 账号名，账号名需要1-32个字符，由字母、数字或特殊字符组成；以字母开头；特殊字符为_-
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号密码，密码需要 8\~32 个字符，不能以 '/' 开头，并且至少包含字母、数字和特殊字符 ()~!@#$%^&*-+=_|{}[]:<>,.?/ 中的两项
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否创建为只读账号，0：否； 1：只读账号，该账号的sql请求优先选择备机执行，备机延迟时选择主机执行；2：只读账号，优先选择备机执行，备机延迟时操作报错；3：只读账号，优先选择备机执行，忽略备机延迟只读备机；
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 账号备注，可以包含中文、英文字符、常见符号和数字，最多256个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 根据传入时间判断备机不可用
                     */
                    int64_t m_delayThresh;
                    bool m_delayThreshHasBeenSet;

                    /**
                     * 针对只读账号，设置策略是否固定备机，0：不固定备机，即备机不满足条件与客户端不断开连接，Proxy选择其他可用备机，1：备机不满足条件断开连接，确保一个连接固定备机。
                     */
                    int64_t m_slaveConst;
                    bool m_slaveConstHasBeenSet;

                    /**
                     * 用户最大连接数限制参数。不传或者传0表示为不限制，对应max_user_connections参数，目前10.1内核版本不支持设置。
                     */
                    uint64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                    /**
                     * 使用GetPublicKey返回的RSA2048公钥加密后的密码
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
