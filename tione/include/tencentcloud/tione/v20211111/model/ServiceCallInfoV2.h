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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFOV2_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFOV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * V2版本的服务调用信息
                */
                class ServiceCallInfoV2 : public AbstractModel
                {
                public:
                    ServiceCallInfoV2();
                    ~ServiceCallInfoV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceGroupId 服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceGroupId 服务组id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务的公网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetEndpoint 服务的公网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternetEndpoint() const;

                    /**
                     * 设置服务的公网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetEndpoint 服务的公网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetEndpoint(const std::string& _internetEndpoint);

                    /**
                     * 判断参数 InternetEndpoint 是否已赋值
                     * @return InternetEndpoint 是否已赋值
                     * 
                     */
                    bool InternetEndpointHasBeenSet() const;

                    /**
                     * 获取鉴权是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationEnable 鉴权是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置鉴权是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizationEnable 鉴权是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     * 
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                    /**
                     * 获取鉴权token，仅当AuthorizationEnable为true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthToken 鉴权token，仅当AuthorizationEnable为true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 设置鉴权token，仅当AuthorizationEnable为true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authToken 鉴权token，仅当AuthorizationEnable为true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthToken(const std::string& _authToken);

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     * 
                     */
                    bool AuthTokenHasBeenSet() const;

                    /**
                     * 获取LLM token 列表
                     * @return AuthTokens LLM token 列表
                     * 
                     */
                    std::vector<AuthToken> GetAuthTokens() const;

                    /**
                     * 设置LLM token 列表
                     * @param _authTokens LLM token 列表
                     * 
                     */
                    void SetAuthTokens(const std::vector<AuthToken>& _authTokens);

                    /**
                     * 判断参数 AuthTokens 是否已赋值
                     * @return AuthTokens 是否已赋值
                     * 
                     */
                    bool AuthTokensHasBeenSet() const;

                    /**
                     * 获取是否开启限流
                     * @return EnableLimit 是否开启限流
                     * 
                     */
                    bool GetEnableLimit() const;

                    /**
                     * 设置是否开启限流
                     * @param _enableLimit 是否开启限流
                     * 
                     */
                    void SetEnableLimit(const bool& _enableLimit);

                    /**
                     * 判断参数 EnableLimit 是否已赋值
                     * @return EnableLimit 是否已赋值
                     * 
                     */
                    bool EnableLimitHasBeenSet() const;

                    /**
                     * 获取访问grpc时需携带的虚拟Host
                     * @return GrpcHost 访问grpc时需携带的虚拟Host
                     * 
                     */
                    std::string GetGrpcHost() const;

                    /**
                     * 设置访问grpc时需携带的虚拟Host
                     * @param _grpcHost 访问grpc时需携带的虚拟Host
                     * 
                     */
                    void SetGrpcHost(const std::string& _grpcHost);

                    /**
                     * 判断参数 GrpcHost 是否已赋值
                     * @return GrpcHost 是否已赋值
                     * 
                     */
                    bool GrpcHostHasBeenSet() const;

                private:

                    /**
                     * 服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 服务的公网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetEndpoint;
                    bool m_internetEndpointHasBeenSet;

                    /**
                     * 鉴权是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * 鉴权token，仅当AuthorizationEnable为true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                    /**
                     * LLM token 列表
                     */
                    std::vector<AuthToken> m_authTokens;
                    bool m_authTokensHasBeenSet;

                    /**
                     * 是否开启限流
                     */
                    bool m_enableLimit;
                    bool m_enableLimitHasBeenSet;

                    /**
                     * 访问grpc时需携带的虚拟Host
                     */
                    std::string m_grpcHost;
                    bool m_grpcHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFOV2_H_
