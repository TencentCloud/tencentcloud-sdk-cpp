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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFOV2_H_
