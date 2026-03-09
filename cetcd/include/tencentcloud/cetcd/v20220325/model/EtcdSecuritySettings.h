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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDSECURITYSETTINGS_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDSECURITYSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd安全相关设置
                */
                class EtcdSecuritySettings : public AbstractModel
                {
                public:
                    EtcdSecuritySettings();
                    ~EtcdSecuritySettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用https
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https 是否启用https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHttps() const;

                    /**
                     * 设置是否启用https
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _https 是否启用https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttps(const bool& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     * 
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取启用客户端证书认证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertAuth 启用客户端证书认证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetClientCertAuth() const;

                    /**
                     * 设置启用客户端证书认证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientCertAuth 启用客户端证书认证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientCertAuth(const bool& _clientCertAuth);

                    /**
                     * 判断参数 ClientCertAuth 是否已赋值
                     * @return ClientCertAuth 是否已赋值
                     * 
                     */
                    bool ClientCertAuthHasBeenSet() const;

                private:

                    /**
                     * 是否启用https
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 启用客户端证书认证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_clientCertAuth;
                    bool m_clientCertAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDSECURITYSETTINGS_H_
