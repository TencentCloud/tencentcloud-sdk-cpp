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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFO_H_

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
                * 服务的调用信息，服务组下唯一
                */
                class ServiceCallInfo : public AbstractModel
                {
                public:
                    ServiceCallInfo();
                    ~ServiceCallInfo() = default;
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
                     * 获取内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInnerHttpAddr() const;

                    /**
                     * 设置内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpAddr(const std::string& _innerHttpAddr);

                    /**
                     * 判断参数 InnerHttpAddr 是否已赋值
                     * @return InnerHttpAddr 是否已赋值
                     * 
                     */
                    bool InnerHttpAddrHasBeenSet() const;

                    /**
                     * 获取内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInnerHttpsAddr() const;

                    /**
                     * 设置内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpsAddr(const std::string& _innerHttpsAddr);

                    /**
                     * 判断参数 InnerHttpsAddr 是否已赋值
                     * @return InnerHttpsAddr 是否已赋值
                     * 
                     */
                    bool InnerHttpsAddrHasBeenSet() const;

                    /**
                     * 获取内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OuterHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOuterHttpAddr() const;

                    /**
                     * 设置内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outerHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOuterHttpAddr(const std::string& _outerHttpAddr);

                    /**
                     * 判断参数 OuterHttpAddr 是否已赋值
                     * @return OuterHttpAddr 是否已赋值
                     * 
                     */
                    bool OuterHttpAddrHasBeenSet() const;

                    /**
                     * 获取内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OuterHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOuterHttpsAddr() const;

                    /**
                     * 设置内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outerHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOuterHttpsAddr(const std::string& _outerHttpsAddr);

                    /**
                     * 判断参数 OuterHttpsAddr 是否已赋值
                     * @return OuterHttpsAddr 是否已赋值
                     * 
                     */
                    bool OuterHttpsAddrHasBeenSet() const;

                    /**
                     * 获取调用key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppKey 调用key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置调用key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appKey 调用key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取调用secret
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppSecret 调用secret
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppSecret() const;

                    /**
                     * 设置调用secret
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appSecret 调用secret
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppSecret(const std::string& _appSecret);

                    /**
                     * 判断参数 AppSecret 是否已赋值
                     * @return AppSecret 是否已赋值
                     * 
                     */
                    bool AppSecretHasBeenSet() const;

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

                private:

                    /**
                     * 服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerHttpAddr;
                    bool m_innerHttpAddrHasBeenSet;

                    /**
                     * 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerHttpsAddr;
                    bool m_innerHttpsAddrHasBeenSet;

                    /**
                     * 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outerHttpAddr;
                    bool m_outerHttpAddrHasBeenSet;

                    /**
                     * 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outerHttpsAddr;
                    bool m_outerHttpsAddrHasBeenSet;

                    /**
                     * 调用key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * 调用secret
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appSecret;
                    bool m_appSecretHasBeenSet;

                    /**
                     * 鉴权是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICECALLINFO_H_
