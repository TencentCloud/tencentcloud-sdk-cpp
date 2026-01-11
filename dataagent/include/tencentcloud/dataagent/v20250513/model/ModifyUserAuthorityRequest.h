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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYUSERAUTHORITYREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYUSERAUTHORITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * ModifyUserAuthority请求参数结构体
                */
                class ModifyUserAuthorityRequest : public AbstractModel
                {
                public:
                    ModifyUserAuthorityRequest();
                    ~ModifyUserAuthorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作用范围：1仅自己使用，2指定用户，0全员
                     * @return UseScope 作用范围：1仅自己使用，2指定用户，0全员
                     * 
                     */
                    int64_t GetUseScope() const;

                    /**
                     * 设置作用范围：1仅自己使用，2指定用户，0全员
                     * @param _useScope 作用范围：1仅自己使用，2指定用户，0全员
                     * 
                     */
                    void SetUseScope(const int64_t& _useScope);

                    /**
                     * 判断参数 UseScope 是否已赋值
                     * @return UseScope 是否已赋值
                     * 
                     */
                    bool UseScopeHasBeenSet() const;

                    /**
                     * 获取可使用的用户列表，UseScope=0/1,取值为[]
                     * @return AuthorityUins 可使用的用户列表，UseScope=0/1,取值为[]
                     * 
                     */
                    std::vector<std::string> GetAuthorityUins() const;

                    /**
                     * 设置可使用的用户列表，UseScope=0/1,取值为[]
                     * @param _authorityUins 可使用的用户列表，UseScope=0/1,取值为[]
                     * 
                     */
                    void SetAuthorityUins(const std::vector<std::string>& _authorityUins);

                    /**
                     * 判断参数 AuthorityUins 是否已赋值
                     * @return AuthorityUins 是否已赋值
                     * 
                     */
                    bool AuthorityUinsHasBeenSet() const;

                private:

                    /**
                     * 作用范围：1仅自己使用，2指定用户，0全员
                     */
                    int64_t m_useScope;
                    bool m_useScopeHasBeenSet;

                    /**
                     * 可使用的用户列表，UseScope=0/1,取值为[]
                     */
                    std::vector<std::string> m_authorityUins;
                    bool m_authorityUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYUSERAUTHORITYREQUEST_H_
