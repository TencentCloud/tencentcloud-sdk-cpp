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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTRESPONSE_H_

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
                * CreateAccount返回参数结构体
                */
                class CreateAccountResponse : public AbstractModel
                {
                public:
                    CreateAccountResponse();
                    ~CreateAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，透传入参。
                     * @return InstanceId 实例ID，透传入参。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户名，透传入参。
                     * @return UserName 用户名，透传入参。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取允许访问的 host，透传入参。
                     * @return Host 允许访问的 host，透传入参。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取透传入参。
                     * @return ReadOnly 透传入参。
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * 实例ID，透传入参。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名，透传入参。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 允许访问的 host，透传入参。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 透传入参。
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTRESPONSE_H_
