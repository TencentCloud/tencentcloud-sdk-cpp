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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 集成节点详情
                */
                class IntegrationNodeDetail : public AbstractModel
                {
                public:
                    IntegrationNodeDetail();
                    ~IntegrationNodeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集成节点名称
                     * @return Name 集成节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集成节点名称
                     * @param _name 集成节点名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取集成节点类型
                     * @return NodeType 集成节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置集成节点类型
                     * @param _nodeType 集成节点类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点数据源类型
                     * @return DataSourceType 节点数据源类型
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置节点数据源类型
                     * @param _dataSourceType 节点数据源类型
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取节点配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 节点配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置节点配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config 节点配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfig(const std::vector<RecordField>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取节点扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtConfig 节点扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置节点扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extConfig 节点扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Schema 节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeSchema> GetSchema() const;

                    /**
                     * 设置节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schema 节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchema(const std::vector<IntegrationNodeSchema>& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeMapping 节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntegrationNodeMapping GetNodeMapping() const;

                    /**
                     * 设置节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeMapping 节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeMapping(const IntegrationNodeMapping& _nodeMapping);

                    /**
                     * 判断参数 NodeMapping 是否已赋值
                     * @return NodeMapping 是否已赋值
                     * 
                     */
                    bool NodeMappingHasBeenSet() const;

                    /**
                     * 获取owner uin
                     * @return OwnerUin owner uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置owner uin
                     * @param _ownerUin owner uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 集成节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集成节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 节点配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 节点扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * 节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeSchema> m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntegrationNodeMapping m_nodeMapping;
                    bool m_nodeMappingHasBeenSet;

                    /**
                     * owner uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEDETAIL_H_
