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
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p>
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
                     * 获取<p>location</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location <p>location</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>location</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location <p>location</p>
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
                     * 获取<p>catalogtype</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogType <p>catalogtype</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogType() const;

                    /**
                     * 设置<p>catalogtype</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogType <p>catalogtype</p>
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
                     * 获取<p>uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uri <p>uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uri <p>uri</p>
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
                     * 获取<p>warehouse url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarehouseUrl <p>warehouse url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarehouseUrl() const;

                    /**
                     * 设置<p>warehouse url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warehouseUrl <p>warehouse url</p>
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
                     * 获取<p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentication <p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置<p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authentication <p>认证方式</p>
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
                     * 获取<p>资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefs <p>资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceRefLatest> GetResourceRefs() const;

                    /**
                     * 设置<p>资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefs <p>资源</p>
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
                     * 获取<p>hive warehouse uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HiveUri <p>hive warehouse uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHiveUri() const;

                    /**
                     * 设置<p>hive warehouse uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hiveUri <p>hive warehouse uri</p>
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
                     * 获取<p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置<p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>高级参数</p>
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

                    /**
                     * 获取<p>hive cata 类型</p>
                     * @return HiveCatalogType <p>hive cata 类型</p>
                     * 
                     */
                    uint64_t GetHiveCatalogType() const;

                    /**
                     * 设置<p>hive cata 类型</p>
                     * @param _hiveCatalogType <p>hive cata 类型</p>
                     * 
                     */
                    void SetHiveCatalogType(const uint64_t& _hiveCatalogType);

                    /**
                     * 判断参数 HiveCatalogType 是否已赋值
                     * @return HiveCatalogType 是否已赋值
                     * 
                     */
                    bool HiveCatalogTypeHasBeenSet() const;

                private:

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>location</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>catalogtype</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogType;
                    bool m_catalogTypeHasBeenSet;

                    /**
                     * <p>uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * <p>warehouse url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warehouseUrl;
                    bool m_warehouseUrlHasBeenSet;

                    /**
                     * <p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * <p>资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceRefLatest> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * <p>hive warehouse uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hiveUri;
                    bool m_hiveUriHasBeenSet;

                    /**
                     * <p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>hive cata 类型</p>
                     */
                    uint64_t m_hiveCatalogType;
                    bool m_hiveCatalogTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_WAREHOUSE_H_
