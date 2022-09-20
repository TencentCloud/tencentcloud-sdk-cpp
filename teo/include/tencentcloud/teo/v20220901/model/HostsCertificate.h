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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTSCERTIFICATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTSCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 域名证书配置
                */
                class HostsCertificate : public AbstractModel
                {
                public:
                    HostsCertificate();
                    ~HostsCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host 域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Host 域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取服务端证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostCertInfo 服务端证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostCertInfo GetHostCertInfo() const;

                    /**
                     * 设置服务端证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostCertInfo 服务端证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostCertInfo(const HostCertInfo& _hostCertInfo);

                    /**
                     * 判断参数 HostCertInfo 是否已赋值
                     * @return HostCertInfo 是否已赋值
                     */
                    bool HostCertInfoHasBeenSet() const;

                private:

                    /**
                     * 域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 服务端证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostCertInfo m_hostCertInfo;
                    bool m_hostCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTSCERTIFICATE_H_
