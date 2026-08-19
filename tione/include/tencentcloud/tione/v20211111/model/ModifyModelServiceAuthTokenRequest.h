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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHTOKENREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/AuthToken.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyModelServiceAuthToken请求参数结构体
                */
                class ModifyModelServiceAuthTokenRequest : public AbstractModel
                {
                public:
                    ModifyModelServiceAuthTokenRequest();
                    ~ModifyModelServiceAuthTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务组 id</p>
                     * @return ServiceGroupId <p>服务组 id</p>
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置<p>服务组 id</p>
                     * @param _serviceGroupId <p>服务组 id</p>
                     * 
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     * 
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>是否需要重置，如果为 true，重置 token 值</p>
                     * @return NeedReset <p>是否需要重置，如果为 true，重置 token 值</p>
                     * 
                     */
                    bool GetNeedReset() const;

                    /**
                     * 设置<p>是否需要重置，如果为 true，重置 token 值</p>
                     * @param _needReset <p>是否需要重置，如果为 true，重置 token 值</p>
                     * 
                     */
                    void SetNeedReset(const bool& _needReset);

                    /**
                     * 判断参数 NeedReset 是否已赋值
                     * @return NeedReset 是否已赋值
                     * 
                     */
                    bool NeedResetHasBeenSet() const;

                    /**
                     * 获取<p>AuthToken 数据</p>
                     * @return AuthToken <p>AuthToken 数据</p>
                     * 
                     */
                    AuthToken GetAuthToken() const;

                    /**
                     * 设置<p>AuthToken 数据</p>
                     * @param _authToken <p>AuthToken 数据</p>
                     * 
                     */
                    void SetAuthToken(const AuthToken& _authToken);

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     * 
                     */
                    bool AuthTokenHasBeenSet() const;

                private:

                    /**
                     * <p>服务组 id</p>
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>是否需要重置，如果为 true，重置 token 值</p>
                     */
                    bool m_needReset;
                    bool m_needResetHasBeenSet;

                    /**
                     * <p>AuthToken 数据</p>
                     */
                    AuthToken m_authToken;
                    bool m_authTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHTOKENREQUEST_H_
