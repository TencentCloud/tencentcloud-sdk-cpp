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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYEDRESOURCES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYEDRESOURCES_H_

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
                * 资源详情
                */
                class DeployedResources : public AbstractModel
                {
                public:
                    DeployedResources();
                    ~DeployedResources() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书ID
                     * @return CertificateId 证书ID
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书ID
                     * @param CertificateId 证书ID
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Count 数量
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置数量
                     * @param Count 数量
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取资源标识:clb,cdn,live,waf,antiddos
                     * @return Type 资源标识:clb,cdn,live,waf,antiddos
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源标识:clb,cdn,live,waf,antiddos
                     * @param Type 资源标识:clb,cdn,live,waf,antiddos
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取关联资源ID或关联域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceIds 关联资源ID或关联域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置关联资源ID或关联域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceIds 关联资源ID或关联域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 资源标识:clb,cdn,live,waf,antiddos
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 关联资源ID或关联域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYEDRESOURCES_H_
