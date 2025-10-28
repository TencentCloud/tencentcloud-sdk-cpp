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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
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
                     * 获取实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * @return DBInstanceId 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * @param _dBInstanceId 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取创建的账号名称。由字母（a-z, A-Z）、数字（0-9）、下划线（_）组成，以字母或（_）开头，最多63个字符。不能使用系统保留关键字，不能为postgres，且不能由pg_或tencentdb_开头
                     * @return UserName 创建的账号名称。由字母（a-z, A-Z）、数字（0-9）、下划线（_）组成，以字母或（_）开头，最多63个字符。不能使用系统保留关键字，不能为postgres，且不能由pg_或tencentdb_开头
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置创建的账号名称。由字母（a-z, A-Z）、数字（0-9）、下划线（_）组成，以字母或（_）开头，最多63个字符。不能使用系统保留关键字，不能为postgres，且不能由pg_或tencentdb_开头
                     * @param _userName 创建的账号名称。由字母（a-z, A-Z）、数字（0-9）、下划线（_）组成，以字母或（_）开头，最多63个字符。不能使用系统保留关键字，不能为postgres，且不能由pg_或tencentdb_开头
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
                     * 获取账号类型。当前支持normal、tencentDBSuper两个输入。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。
                     * @return Type 账号类型。当前支持normal、tencentDBSuper两个输入。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置账号类型。当前支持normal、tencentDBSuper两个输入。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。
                     * @param _type 账号类型。当前支持normal、tencentDBSuper两个输入。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取账号对应的密码。密码规则如下：
<li>长度8 ~ 32位，推荐使用12位以上的密码</li>
<li>不能以" / "开头</li>
<li>必须包含以下四项:</li>

小写字母 a ~ z           
大写字母 A ～ Z
数字 0 ～ 9
特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/

                     * @return Password 账号对应的密码。密码规则如下：
<li>长度8 ~ 32位，推荐使用12位以上的密码</li>
<li>不能以" / "开头</li>
<li>必须包含以下四项:</li>

小写字母 a ~ z           
大写字母 A ～ Z
数字 0 ～ 9
特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/

                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置账号对应的密码。密码规则如下：
<li>长度8 ~ 32位，推荐使用12位以上的密码</li>
<li>不能以" / "开头</li>
<li>必须包含以下四项:</li>

小写字母 a ~ z           
大写字母 A ～ Z
数字 0 ～ 9
特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/

                     * @param _password 账号对应的密码。密码规则如下：
<li>长度8 ~ 32位，推荐使用12位以上的密码</li>
<li>不能以" / "开头</li>
<li>必须包含以下四项:</li>

小写字母 a ~ z           
大写字母 A ～ Z
数字 0 ～ 9
特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/

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
                     * 获取账号备注。只允许英文字母、数字、下划线、中划线，以及全体汉字，限60个字符
                     * @return Remark 账号备注。只允许英文字母、数字、下划线、中划线，以及全体汉字，限60个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账号备注。只允许英文字母、数字、下划线、中划线，以及全体汉字，限60个字符
                     * @param _remark 账号备注。只允许英文字母、数字、下划线、中划线，以及全体汉字，限60个字符
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取账号是否开启CAM验证
                     * @return OpenCam 账号是否开启CAM验证
                     * 
                     */
                    bool GetOpenCam() const;

                    /**
                     * 设置账号是否开启CAM验证
                     * @param _openCam 账号是否开启CAM验证
                     * 
                     */
                    void SetOpenCam(const bool& _openCam);

                    /**
                     * 判断参数 OpenCam 是否已赋值
                     * @return OpenCam 是否已赋值
                     * 
                     */
                    bool OpenCamHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 创建的账号名称。由字母（a-z, A-Z）、数字（0-9）、下划线（_）组成，以字母或（_）开头，最多63个字符。不能使用系统保留关键字，不能为postgres，且不能由pg_或tencentdb_开头
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号类型。当前支持normal、tencentDBSuper两个输入。normal指代普通用户，tencentDBSuper为拥有pg_tencentdb_superuser角色的账号。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 账号对应的密码。密码规则如下：
<li>长度8 ~ 32位，推荐使用12位以上的密码</li>
<li>不能以" / "开头</li>
<li>必须包含以下四项:</li>

小写字母 a ~ z           
大写字母 A ～ Z
数字 0 ～ 9
特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/

                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 账号备注。只允许英文字母、数字、下划线、中划线，以及全体汉字，限60个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 账号是否开启CAM验证
                     */
                    bool m_openCam;
                    bool m_openCamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
