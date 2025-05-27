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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_WAREHOUSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_WAREHOUSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceRefLatest.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * Setats Warehouse结构
                */
                class Warehouse : public AbstractModel
                {
                public:
                    Warehouse();
                    ~Warehouse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取location
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location location
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置location
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location location
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取catalogtype
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogType catalogtype
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogType() const;

                    /**
                     * 设置catalogtype
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogType catalogtype
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogType(const std::string& _catalogType);

                    /**
                     * 判断参数 CatalogType 是否已赋值
                     * @return CatalogType 是否已赋值
                     * 
                     */
                    bool CatalogTypeHasBeenSet() const;

                    /**
                     * 获取uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uri uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uri uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取warehouse url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarehouseUrl warehouse url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarehouseUrl() const;

                    /**
                     * 设置warehouse url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warehouseUrl warehouse url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarehouseUrl(const std::string& _warehouseUrl);

                    /**
                     * 判断参数 WarehouseUrl 是否已赋值
                     * @return WarehouseUrl 是否已赋值
                     * 
                     */
                    bool WarehouseUrlHasBeenSet() const;

                    /**
                     * 获取认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentication 认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authentication 认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthentication(const std::string& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     * 
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefs 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceRefLatest> GetResourceRefs() const;

                    /**
                     * 设置资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefs 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRefs(const std::vector<ResourceRefLatest>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     * 
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取hive warehouse uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HiveUri hive warehouse uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHiveUri() const;

                    /**
                     * 设置hive warehouse uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hiveUri hive warehouse uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHiveUri(const std::string& _hiveUri);

                    /**
                     * 判断参数 HiveUri 是否已赋值
                     * @return HiveUri 是否已赋值
                     * 
                     */
                    bool HiveUriHasBeenSet() const;

                    /**
                     * 获取高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * location
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * catalogtype
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogType;
                    bool m_catalogTypeHasBeenSet;

                    /**
                     * uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * warehouse url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warehouseUrl;
                    bool m_warehouseUrlHasBeenSet;

                    /**
                     * 认证方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * 资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceRefLatest> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * hive warehouse uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hiveUri;
                    bool m_hiveUriHasBeenSet;

                    /**
                     * 高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_WAREHOUSE_H_
