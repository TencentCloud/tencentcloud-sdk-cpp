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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewaySecretKey请求参数结构体
                */
                class DescribeCloudNativeAPIGatewaySecretKeyRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewaySecretKeyRequest();
                    ~DescribeCloudNativeAPIGatewaySecretKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥id</p>
                     * @return SecretKeyId <p>密钥id</p>
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置<p>密钥id</p>
                     * @param _secretKeyId <p>密钥id</p>
                     * 
                     */
                    void SetSecretKeyId(const std::string& _secretKeyId);

                    /**
                     * 判断参数 SecretKeyId 是否已赋值
                     * @return SecretKeyId 是否已赋值
                     * 
                     */
                    bool SecretKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * @return IncludeCreationInfo <p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * 
                     */
                    bool GetIncludeCreationInfo() const;

                    /**
                     * 设置<p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * @param _includeCreationInfo <p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * 
                     */
                    void SetIncludeCreationInfo(const bool& _includeCreationInfo);

                    /**
                     * 判断参数 IncludeCreationInfo 是否已赋值
                     * @return IncludeCreationInfo 是否已赋值
                     * 
                     */
                    bool IncludeCreationInfoHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>密钥id</p>
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                    /**
                     * <p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     */
                    bool m_includeCreationInfo;
                    bool m_includeCreationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYREQUEST_H_
