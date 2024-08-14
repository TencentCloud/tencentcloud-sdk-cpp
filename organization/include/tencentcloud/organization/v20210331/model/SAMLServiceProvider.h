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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLSERVICEPROVIDER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLSERVICEPROVIDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * SAML服务提供商信息
                */
                class SAMLServiceProvider : public AbstractModel
                {
                public:
                    SAMLServiceProvider();
                    ~SAMLServiceProvider() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取https://tencentcloudsso.com/saml/sp/z-sjw8ensa**
                     * @return EntityId https://tencentcloudsso.com/saml/sp/z-sjw8ensa**
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置https://tencentcloudsso.com/saml/sp/z-sjw8ensa**
                     * @param _entityId https://tencentcloudsso.com/saml/sp/z-sjw8ensa**
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取空间ID。
                     * @return ZoneId 空间ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间ID。
                     * @param _zoneId 空间ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取SP 元数据文档（Base64 编码）。
                     * @return EncodedMetadataDocument SP 元数据文档（Base64 编码）。
                     * 
                     */
                    std::string GetEncodedMetadataDocument() const;

                    /**
                     * 设置SP 元数据文档（Base64 编码）。
                     * @param _encodedMetadataDocument SP 元数据文档（Base64 编码）。
                     * 
                     */
                    void SetEncodedMetadataDocument(const std::string& _encodedMetadataDocument);

                    /**
                     * 判断参数 EncodedMetadataDocument 是否已赋值
                     * @return EncodedMetadataDocument 是否已赋值
                     * 
                     */
                    bool EncodedMetadataDocumentHasBeenSet() const;

                    /**
                     * 获取SP 的 ACS URL。
                     * @return AcsUrl SP 的 ACS URL。
                     * 
                     */
                    std::string GetAcsUrl() const;

                    /**
                     * 设置SP 的 ACS URL。
                     * @param _acsUrl SP 的 ACS URL。
                     * 
                     */
                    void SetAcsUrl(const std::string& _acsUrl);

                    /**
                     * 判断参数 AcsUrl 是否已赋值
                     * @return AcsUrl 是否已赋值
                     * 
                     */
                    bool AcsUrlHasBeenSet() const;

                private:

                    /**
                     * https://tencentcloudsso.com/saml/sp/z-sjw8ensa**
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 空间ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * SP 元数据文档（Base64 编码）。
                     */
                    std::string m_encodedMetadataDocument;
                    bool m_encodedMetadataDocumentHasBeenSet;

                    /**
                     * SP 的 ACS URL。
                     */
                    std::string m_acsUrl;
                    bool m_acsUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLSERVICEPROVIDER_H_
