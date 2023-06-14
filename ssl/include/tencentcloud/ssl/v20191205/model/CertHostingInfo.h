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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTHOSTINGINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTHOSTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 云资源配置详情
                */
                class CertHostingInfo : public AbstractModel
                {
                public:
                    CertHostingInfo();
                    ~CertHostingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书ID
                     * @return CertId 证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
                     * @param _certId 证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取已替换的新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewCertId 已替换的新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRenewCertId() const;

                    /**
                     * 设置已替换的新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewCertId 已替换的新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewCertId(const std::string& _renewCertId);

                    /**
                     * 判断参数 RenewCertId 是否已赋值
                     * @return RenewCertId 是否已赋值
                     * 
                     */
                    bool RenewCertIdHasBeenSet() const;

                    /**
                     * 获取云资源托管 ，CDN或CLB：部分开启，CDN,CLB：已开启，null：未开启托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 云资源托管 ，CDN或CLB：部分开启，CDN,CLB：已开启，null：未开启托管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置云资源托管 ，CDN或CLB：部分开启，CDN,CLB：已开启，null：未开启托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 云资源托管 ，CDN或CLB：部分开启，CDN,CLB：已开启，null：未开启托管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 已替换的新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewCertId;
                    bool m_renewCertIdHasBeenSet;

                    /**
                     * 云资源托管 ，CDN或CLB：部分开启，CDN,CLB：已开启，null：未开启托管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTHOSTINGINFO_H_
