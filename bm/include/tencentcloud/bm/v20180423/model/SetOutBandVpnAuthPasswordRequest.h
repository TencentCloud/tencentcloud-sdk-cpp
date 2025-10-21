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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_SETOUTBANDVPNAUTHPASSWORDREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_SETOUTBANDVPNAUTHPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * SetOutBandVpnAuthPassword请求参数结构体
                */
                class SetOutBandVpnAuthPasswordRequest : public AbstractModel
                {
                public:
                    SetOutBandVpnAuthPasswordRequest();
                    ~SetOutBandVpnAuthPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置的Vpn认证密码
                     * @return Password 设置的Vpn认证密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设置的Vpn认证密码
                     * @param _password 设置的Vpn认证密码
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
                     * 获取操作字段，取值为：Create（创建）或Update（修改）
                     * @return Operate 操作字段，取值为：Create（创建）或Update（修改）
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作字段，取值为：Create（创建）或Update（修改）
                     * @param _operate 操作字段，取值为：Create（创建）或Update（修改）
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 设置的Vpn认证密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 操作字段，取值为：Create（创建）或Update（修改）
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_SETOUTBANDVPNAUTHPASSWORDREQUEST_H_
