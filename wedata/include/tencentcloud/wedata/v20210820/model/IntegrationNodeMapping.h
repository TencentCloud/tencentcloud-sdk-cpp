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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEMAPPING_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchemaMapping.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 集成节点映射
                */
                class IntegrationNodeMapping : public AbstractModel
                {
                public:
                    IntegrationNodeMapping();
                    ~IntegrationNodeMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源节点id
                     * @return SourceId 源节点id
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置源节点id
                     * @param _sourceId 源节点id
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取目标节点id
                     * @return SinkId 目标节点id
                     * 
                     */
                    std::string GetSinkId() const;

                    /**
                     * 设置目标节点id
                     * @param _sinkId 目标节点id
                     * 
                     */
                    void SetSinkId(const std::string& _sinkId);

                    /**
                     * 判断参数 SinkId 是否已赋值
                     * @return SinkId 是否已赋值
                     * 
                     */
                    bool SinkIdHasBeenSet() const;

                    /**
                     * 获取源节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceSchema 源节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeSchema> GetSourceSchema() const;

                    /**
                     * 设置源节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceSchema 源节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceSchema(const std::vector<IntegrationNodeSchema>& _sourceSchema);

                    /**
                     * 判断参数 SourceSchema 是否已赋值
                     * @return SourceSchema 是否已赋值
                     * 
                     */
                    bool SourceSchemaHasBeenSet() const;

                    /**
                     * 获取节点schema映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaMappings 节点schema映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeSchemaMapping> GetSchemaMappings() const;

                    /**
                     * 设置节点schema映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaMappings 节点schema映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaMappings(const std::vector<IntegrationNodeSchemaMapping>& _schemaMappings);

                    /**
                     * 判断参数 SchemaMappings 是否已赋值
                     * @return SchemaMappings 是否已赋值
                     * 
                     */
                    bool SchemaMappingsHasBeenSet() const;

                    /**
                     * 获取节点映射扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtConfig 节点映射扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置节点映射扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extConfig 节点映射扩展信息
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

                private:

                    /**
                     * 源节点id
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 目标节点id
                     */
                    std::string m_sinkId;
                    bool m_sinkIdHasBeenSet;

                    /**
                     * 源节点schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeSchema> m_sourceSchema;
                    bool m_sourceSchemaHasBeenSet;

                    /**
                     * 节点schema映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeSchemaMapping> m_schemaMappings;
                    bool m_schemaMappingsHasBeenSet;

                    /**
                     * 节点映射扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEMAPPING_H_
