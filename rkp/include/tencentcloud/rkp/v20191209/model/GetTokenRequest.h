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

#ifndef TENCENTCLOUD_RKP_V20191209_MODEL_GETTOKENREQUEST_H_
#define TENCENTCLOUD_RKP_V20191209_MODEL_GETTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            namespace Model
            {
                /**
                * GetToken请求参数结构体
                */
                class GetTokenRequest : public AbstractModel
                {
                public:
                    GetTokenRequest();
                    ~GetTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务ID
                     * @return BusinessId 业务ID
                     * 
                     */
                    int64_t GetBusinessId() const;

                    /**
                     * 设置业务ID
                     * @param _businessId 业务ID
                     * 
                     */
                    void SetBusinessId(const int64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取业务子场景
                     * @return Scene 业务子场景
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置业务子场景
                     * @param _scene 业务子场景
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取业务侧账号体系下的用户ID
                     * @return BusinessUserId 业务侧账号体系下的用户ID
                     * 
                     */
                    std::string GetBusinessUserId() const;

                    /**
                     * 设置业务侧账号体系下的用户ID
                     * @param _businessUserId 业务侧账号体系下的用户ID
                     * 
                     */
                    void SetBusinessUserId(const std::string& _businessUserId);

                    /**
                     * 判断参数 BusinessUserId 是否已赋值
                     * @return BusinessUserId 是否已赋值
                     * 
                     */
                    bool BusinessUserIdHasBeenSet() const;

                    /**
                     * 获取用户侧的IP
                     * @return AppClientIp 用户侧的IP
                     * 
                     */
                    std::string GetAppClientIp() const;

                    /**
                     * 设置用户侧的IP
                     * @param _appClientIp 用户侧的IP
                     * 
                     */
                    void SetAppClientIp(const std::string& _appClientIp);

                    /**
                     * 判断参数 AppClientIp 是否已赋值
                     * @return AppClientIp 是否已赋值
                     * 
                     */
                    bool AppClientIpHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取上一个token
                     * @return OldToken 上一个token
                     * 
                     */
                    std::string GetOldToken() const;

                    /**
                     * 设置上一个token
                     * @param _oldToken 上一个token
                     * 
                     */
                    void SetOldToken(const std::string& _oldToken);

                    /**
                     * 判断参数 OldToken 是否已赋值
                     * @return OldToken 是否已赋值
                     * 
                     */
                    bool OldTokenHasBeenSet() const;

                private:

                    /**
                     * 业务ID
                     */
                    int64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 业务子场景
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 业务侧账号体系下的用户ID
                     */
                    std::string m_businessUserId;
                    bool m_businessUserIdHasBeenSet;

                    /**
                     * 用户侧的IP
                     */
                    std::string m_appClientIp;
                    bool m_appClientIpHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 上一个token
                     */
                    std::string m_oldToken;
                    bool m_oldTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_MODEL_GETTOKENREQUEST_H_
