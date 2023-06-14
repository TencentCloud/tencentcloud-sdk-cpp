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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEBINDINGREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEBINDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateBinding请求参数结构体
                */
                class CreateBindingRequest : public AbstractModel
                {
                public:
                    CreateBindingRequest();
                    ~CreateBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端用户在IoT Video上的唯一标识ID
                     * @return AccessId 终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置终端用户在IoT Video上的唯一标识ID
                     * @param _accessId 终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取用户角色，owner：主人，guest：访客
                     * @return Role 用户角色，owner：主人，guest：访客
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置用户角色，owner：主人，guest：访客
                     * @param _role 用户角色，owner：主人，guest：访客
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取是否踢掉之前的主人，true：踢掉；false：不踢掉。当role为guest时，可以不填
                     * @return ForceBind 是否踢掉之前的主人，true：踢掉；false：不踢掉。当role为guest时，可以不填
                     * 
                     */
                    bool GetForceBind() const;

                    /**
                     * 设置是否踢掉之前的主人，true：踢掉；false：不踢掉。当role为guest时，可以不填
                     * @param _forceBind 是否踢掉之前的主人，true：踢掉；false：不踢掉。当role为guest时，可以不填
                     * 
                     */
                    void SetForceBind(const bool& _forceBind);

                    /**
                     * 判断参数 ForceBind 是否已赋值
                     * @return ForceBind 是否已赋值
                     * 
                     */
                    bool ForceBindHasBeenSet() const;

                    /**
                     * 获取设备昵称，最多不超过64个字符
                     * @return Nick 设备昵称，最多不超过64个字符
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置设备昵称，最多不超过64个字符
                     * @param _nick 设备昵称，最多不超过64个字符
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取绑定过程中的会话token，由设备通过SDK接口确认是否允许绑定的token，用于增加设备被绑定的安全性
                     * @return BindToken 绑定过程中的会话token，由设备通过SDK接口确认是否允许绑定的token，用于增加设备被绑定的安全性
                     * 
                     */
                    std::string GetBindToken() const;

                    /**
                     * 设置绑定过程中的会话token，由设备通过SDK接口确认是否允许绑定的token，用于增加设备被绑定的安全性
                     * @param _bindToken 绑定过程中的会话token，由设备通过SDK接口确认是否允许绑定的token，用于增加设备被绑定的安全性
                     * 
                     */
                    void SetBindToken(const std::string& _bindToken);

                    /**
                     * 判断参数 BindToken 是否已赋值
                     * @return BindToken 是否已赋值
                     * 
                     */
                    bool BindTokenHasBeenSet() const;

                private:

                    /**
                     * 终端用户在IoT Video上的唯一标识ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 用户角色，owner：主人，guest：访客
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否踢掉之前的主人，true：踢掉；false：不踢掉。当role为guest时，可以不填
                     */
                    bool m_forceBind;
                    bool m_forceBindHasBeenSet;

                    /**
                     * 设备昵称，最多不超过64个字符
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 绑定过程中的会话token，由设备通过SDK接口确认是否允许绑定的token，用于增加设备被绑定的安全性
                     */
                    std::string m_bindToken;
                    bool m_bindTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEBINDINGREQUEST_H_
