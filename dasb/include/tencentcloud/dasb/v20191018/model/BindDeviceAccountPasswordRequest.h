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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICEACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICEACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * BindDeviceAccountPassword请求参数结构体
                */
                class BindDeviceAccountPasswordRequest : public AbstractModel
                {
                public:
                    BindDeviceAccountPasswordRequest();
                    ~BindDeviceAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机账号ID
                     * @return Id 主机账号ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置主机账号ID
                     * @param _id 主机账号ID
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
                     * 获取主机账号密码
                     * @return Password 主机账号密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置主机账号密码
                     * @param _password 主机账号密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 主机账号ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机账号密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICEACCOUNTPASSWORDREQUEST_H_
