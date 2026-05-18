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
                     * 获取<p>若数据源列表为绑定数据库，则为db名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseNames <p>若数据源列表为绑定数据库，则为db名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDatabaseNames() const;

                    /**
                     * 设置<p>若数据源列表为绑定数据库，则为db名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseNames <p>若数据源列表为绑定数据库，则为db名称</p>
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
                     * 获取<p>数据源描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>数据源描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据源描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>数据源描述信息</p>
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
                     * 获取<p>数据源ID</p>
                     * @return ID <p>数据源ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>数据源ID</p>
                     * @param _iD <p>数据源ID</p>
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
                     * 获取<p>数据源引擎的实例ID，如CDB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance <p>数据源引擎的实例ID，如CDB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置<p>数据源引擎的实例ID，如CDB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instance <p>数据源引擎的实例ID，如CDB实例ID</p>
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
                     * 获取<p>数据源名称，在相同SpaceName下，数据源名称不能为空</p>
                     * @return Name <p>数据源名称，在相同SpaceName下，数据源名称不能为空</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据源名称，在相同SpaceName下，数据源名称不能为空</p>
                     * @param _name <p>数据源名称，在相同SpaceName下，数据源名称不能为空</p>
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
                     * 获取<p>数据源引擎所属区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>数据源引擎所属区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>数据源引擎所属区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>数据源引擎所属区域</p>
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
                     * 获取<p>数据源类型:枚举值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>数据源类型:枚举值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据源类型:枚举值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>数据源类型:枚举值</p>
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
                     * 获取<p>数据源所属的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>数据源所属的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>数据源所属的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>数据源所属的集群id</p>
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
                     * 获取<p>数据源版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>数据源版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>数据源版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>数据源版本信息</p>
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
                     * 获取<p>数据源附带参数信息Params json字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamsString <p>数据源附带参数信息Params json字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamsString() const;

                    /**
                     * 设置<p>数据源附带参数信息Params json字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramsString <p>数据源附带参数信息Params json字符串</p>
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
                     * 获取<p>区分数据源类型自定义源还是系统源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category <p>区分数据源类型自定义源还是系统源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>区分数据源类型自定义源还是系统源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category <p>区分数据源类型自定义源还是系统源</p>
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

                    /**
                     * 获取<p>数据实例ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip <p>数据实例ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>数据实例ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip <p>数据实例ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>数据实例port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port <p>数据实例port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>数据实例port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port <p>数据实例port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * <p>若数据源列表为绑定数据库，则为db名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_databaseNames;
                    bool m_databaseNamesHasBeenSet;

                    /**
                     * <p>数据源描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据源ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>数据源引擎的实例ID，如CDB实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * <p>数据源名称，在相同SpaceName下，数据源名称不能为空</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据源引擎所属区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>数据源类型:枚举值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据源所属的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>数据源版本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>数据源附带参数信息Params json字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramsString;
                    bool m_paramsStringHasBeenSet;

                    /**
                     * <p>区分数据源类型自定义源还是系统源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>数据实例ip</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>数据实例port</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_
