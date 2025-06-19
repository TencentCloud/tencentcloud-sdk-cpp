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
                     * 获取服务组 id
                     * @return ServiceGroupId 服务组 id
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务组 id
                     * @param _serviceGroupId 服务组 id
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
                     * 获取是否需要重置，如果为 true，重置 token 值
                     * @return NeedReset 是否需要重置，如果为 true，重置 token 值
                     * 
                     */
                    bool GetNeedReset() const;

                    /**
                     * 设置是否需要重置，如果为 true，重置 token 值
                     * @param _needReset 是否需要重置，如果为 true，重置 token 值
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
                     * 获取AuthToken 数据
                     * @return AuthToken AuthToken 数据
                     * 
                     */
                    AuthToken GetAuthToken() const;

                    /**
                     * 设置AuthToken 数据
                     * @param _authToken AuthToken 数据
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
                     * 服务组 id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 是否需要重置，如果为 true，重置 token 值
                     */
                    bool m_needReset;
                    bool m_needResetHasBeenSet;

                    /**
                     * AuthToken 数据
                     */
                    AuthToken m_authToken;
                    bool m_authTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHTOKENREQUEST_H_
