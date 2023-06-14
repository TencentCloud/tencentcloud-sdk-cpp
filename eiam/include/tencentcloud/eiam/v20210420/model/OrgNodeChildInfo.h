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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 当前机构节点下的子节点列表
                */
                class OrgNodeChildInfo : public AbstractModel
                {
                public:
                    OrgNodeChildInfo();
                    ~OrgNodeChildInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机构节点展示名称，长度限制：64个字符。 默认与机构名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 机构节点展示名称，长度限制：64个字符。 默认与机构名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置机构节点展示名称，长度限制：64个字符。 默认与机构名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 机构节点展示名称，长度限制：64个字符。 默认与机构名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取机构节点最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedDate 机构节点最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置机构节点最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedDate 机构节点最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取用户自定义可选填的机构节点对外ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomizedOrgNodeId 用户自定义可选填的机构节点对外ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomizedOrgNodeId() const;

                    /**
                     * 设置用户自定义可选填的机构节点对外ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customizedOrgNodeId 用户自定义可选填的机构节点对外ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomizedOrgNodeId(const std::string& _customizedOrgNodeId);

                    /**
                     * 判断参数 CustomizedOrgNodeId 是否已赋值
                     * @return CustomizedOrgNodeId 是否已赋值
                     * 
                     */
                    bool CustomizedOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取当前机构节点的父节点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentOrgNodeId 当前机构节点的父节点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentOrgNodeId() const;

                    /**
                     * 设置当前机构节点的父节点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentOrgNodeId 当前机构节点的父节点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentOrgNodeId(const std::string& _parentOrgNodeId);

                    /**
                     * 判断参数 ParentOrgNodeId 是否已赋值
                     * @return ParentOrgNodeId 是否已赋值
                     * 
                     */
                    bool ParentOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取机构节点ID，是机构节点的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeId 机构节点ID，是机构节点的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置机构节点ID，是机构节点的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgNodeId 机构节点ID，是机构节点的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource 数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSource 数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取机构节点创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedDate 机构节点创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置机构节点创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdDate 机构节点创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取机构节点描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 机构节点描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置机构节点描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 机构节点描述。
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

                private:

                    /**
                     * 机构节点展示名称，长度限制：64个字符。 默认与机构名相同。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 机构节点最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * 用户自定义可选填的机构节点对外ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customizedOrgNodeId;
                    bool m_customizedOrgNodeIdHasBeenSet;

                    /**
                     * 当前机构节点的父节点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentOrgNodeId;
                    bool m_parentOrgNodeIdHasBeenSet;

                    /**
                     * 机构节点ID，是机构节点的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 数据来源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 机构节点创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * 机构节点描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDINFO_H_
