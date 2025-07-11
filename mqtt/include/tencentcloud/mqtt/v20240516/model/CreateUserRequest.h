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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateUser请求参数结构体
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
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
                     * 获取用户名，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * @return Username 用户名，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     * @param _username 用户名，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
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
                     * 获取密码，该字段为空时候则后端会默认生成。用户自定义密码时，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 64 个字符。
                     * @return Password 密码，该字段为空时候则后端会默认生成。用户自定义密码时，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 64 个字符。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，该字段为空时候则后端会默认生成。用户自定义密码时，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 64 个字符。
                     * @param _password 密码，该字段为空时候则后端会默认生成。用户自定义密码时，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 64 个字符。
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
                     * 获取备注，长度不超过128个字符。
                     * @return Remark 备注，长度不超过128个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，长度不超过128个字符。
                     * @param _remark 备注，长度不超过128个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 32 个字符
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 密码，该字段为空时候则后端会默认生成。用户自定义密码时，不能为空，只支持数字 大小写字母 分隔符("_","-")，不能超过 64 个字符。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 备注，长度不超过128个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEUSERREQUEST_H_
