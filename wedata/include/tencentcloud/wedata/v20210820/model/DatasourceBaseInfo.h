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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据源对象
                */
                class DatasourceBaseInfo : public AbstractModel
                {
                public:
                    DatasourceBaseInfo();
                    ~DatasourceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseNames 若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDatabaseNames() const;

                    /**
                     * 设置若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseNames 若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseNames(const std::vector<std::string>& _databaseNames);

                    /**
                     * 判断参数 DatabaseNames 是否已赋值
                     * @return DatabaseNames 是否已赋值
                     * 
                     */
                    bool DatabaseNamesHasBeenSet() const;

                    /**
                     * 获取数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 数据源描述信息
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
                     * 获取数据源ID
                     * @return ID 数据源ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置数据源ID
                     * @param _iD 数据源ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instance 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取数据源名称，在相同SpaceName下，数据源名称不能为空
                     * @return Name 数据源名称，在相同SpaceName下，数据源名称不能为空
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称，在相同SpaceName下，数据源名称不能为空
                     * @param _name 数据源名称，在相同SpaceName下，数据源名称不能为空
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
                     * 获取数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取数据源版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 数据源版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置数据源版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 数据源版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取数据源附带参数信息Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamsString 数据源附带参数信息Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamsString() const;

                    /**
                     * 设置数据源附带参数信息Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramsString 数据源附带参数信息Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamsString(const std::string& _paramsString);

                    /**
                     * 判断参数 ParamsString 是否已赋值
                     * @return ParamsString 是否已赋值
                     * 
                     */
                    bool ParamsStringHasBeenSet() const;

                    /**
                     * 获取区分数据源类型自定义源还是系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 区分数据源类型自定义源还是系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置区分数据源类型自定义源还是系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category 区分数据源类型自定义源还是系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_databaseNames;
                    bool m_databaseNamesHasBeenSet;

                    /**
                     * 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 数据源名称，在相同SpaceName下，数据源名称不能为空
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据源版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 数据源附带参数信息Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramsString;
                    bool m_paramsStringHasBeenSet;

                    /**
                     * 区分数据源类型自定义源还是系统源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_
