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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHORIZATIONREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHORIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyModelServiceAuthorization请求参数结构体
                */
                class ModifyModelServiceAuthorizationRequest : public AbstractModel
                {
                public:
                    ModifyModelServiceAuthorizationRequest();
                    ~ModifyModelServiceAuthorizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务组Id
                     * @return ServiceGroupId 服务组Id
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务组Id
                     * @param _serviceGroupId 服务组Id
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
                     * 获取是否开启鉴权,true表示开启
                     * @return AuthorizationEnable 是否开启鉴权,true表示开启
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置是否开启鉴权,true表示开启
                     * @param _authorizationEnable 是否开启鉴权,true表示开启
                     * 
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     * 
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                private:

                    /**
                     * 服务组Id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 是否开启鉴权,true表示开启
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEAUTHORIZATIONREQUEST_H_
