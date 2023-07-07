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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATESERVICEACCOUNTRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATESERVICEACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateServiceAccount返回参数结构体
                */
                class CreateServiceAccountResponse : public AbstractModel
                {
                public:
                    CreateServiceAccountResponse();
                    ~CreateServiceAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务级账号名（会自动加上前缀tcr$）
                     * @return Name 服务级账号名（会自动加上前缀tcr$）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取服务级账号密码，仅展示一次，请注意留存
                     * @return Password 服务级账号密码，仅展示一次，请注意留存
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取服务级账号失效时间（时间戳）
                     * @return ExpiresAt 服务级账号失效时间（时间戳）
                     * 
                     */
                    int64_t GetExpiresAt() const;

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取服务级账号创建时间
                     * @return CreateTime 服务级账号创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 服务级账号名（会自动加上前缀tcr$）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务级账号密码，仅展示一次，请注意留存
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 服务级账号失效时间（时间戳）
                     */
                    int64_t m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * 服务级账号创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATESERVICEACCOUNTRESPONSE_H_
