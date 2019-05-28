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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
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
                     * 获取实例 ID，形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @return InstanceId 实例 ID，形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @param InstanceId 实例 ID，形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取AccountName
                     * @return UserName AccountName
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置AccountName
                     * @param UserName AccountName
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     * @return Host 可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     * @param Host 可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     * @return Password 账号密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置账号密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     * @param Password 账号密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取是否创建为只读账号，0：否， 1：该账号的sql请求优先选择备机执行，备机不可用时选择主机执行，2：优先选择备机执行，备机不可用时操作失败，3：只从备机读取。
                     * @return ReadOnly 是否创建为只读账号，0：否， 1：该账号的sql请求优先选择备机执行，备机不可用时选择主机执行，2：优先选择备机执行，备机不可用时操作失败，3：只从备机读取。
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置是否创建为只读账号，0：否， 1：该账号的sql请求优先选择备机执行，备机不可用时选择主机执行，2：优先选择备机执行，备机不可用时操作失败，3：只从备机读取。
                     * @param ReadOnly 是否创建为只读账号，0：否， 1：该账号的sql请求优先选择备机执行，备机不可用时选择主机执行，2：优先选择备机执行，备机不可用时操作失败，3：只从备机读取。
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取账号备注，可以包含中文、英文字符、常见符号和数字，长度为0~256字符
                     * @return Description 账号备注，可以包含中文、英文字符、常见符号和数字，长度为0~256字符
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置账号备注，可以包含中文、英文字符、常见符号和数字，长度为0~256字符
                     * @param Description 账号备注，可以包含中文、英文字符、常见符号和数字，长度为0~256字符
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取如果备机延迟超过本参数设置值，系统将认为备机发生故障
建议该参数值大于10。当ReadOnly选择1、2时该参数生效。
                     * @return DelayThresh 如果备机延迟超过本参数设置值，系统将认为备机发生故障
建议该参数值大于10。当ReadOnly选择1、2时该参数生效。
                     */
                    int64_t GetDelayThresh() const;

                    /**
                     * 设置如果备机延迟超过本参数设置值，系统将认为备机发生故障
建议该参数值大于10。当ReadOnly选择1、2时该参数生效。
                     * @param DelayThresh 如果备机延迟超过本参数设置值，系统将认为备机发生故障
建议该参数值大于10。当ReadOnly选择1、2时该参数生效。
                     */
                    void SetDelayThresh(const int64_t& _delayThresh);

                    /**
                     * 判断参数 DelayThresh 是否已赋值
                     * @return DelayThresh 是否已赋值
                     */
                    bool DelayThreshHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * AccountName
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 可以登录的主机，与mysql 账号的 host 格式一致，可以支持通配符，例如 %，10.%，10.20.%。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否创建为只读账号，0：否， 1：该账号的sql请求优先选择备机执行，备机不可用时选择主机执行，2：优先选择备机执行，备机不可用时操作失败，3：只从备机读取。
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 账号备注，可以包含中文、英文字符、常见符号和数字，长度为0~256字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 如果备机延迟超过本参数设置值，系统将认为备机发生故障
建议该参数值大于10。当ReadOnly选择1、2时该参数生效。
                     */
                    int64_t m_delayThresh;
                    bool m_delayThreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTREQUEST_H_
