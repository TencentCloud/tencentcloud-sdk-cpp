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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ASSET_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 元数据基本对象
                */
                class Asset : public AbstractModel
                {
                public:
                    Asset();
                    ~Asset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取对象GUID值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Guid 对象GUID值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 设置对象GUID值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _guid 对象GUID值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGuid(const std::string& _guid);

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                    /**
                     * 获取数据目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalog 数据目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置数据目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalog 数据目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
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
                     * 获取对象owner
                     * @return Owner 对象owner
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置对象owner
                     * @param _owner 对象owner
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取对象owner账户
                     * @return OwnerAccount 对象owner账户
                     * 
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置对象owner账户
                     * @param _ownerAccount 对象owner账户
                     * 
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取权限
                     * @return PermValues 权限
                     * 
                     */
                    std::vector<KVPair> GetPermValues() const;

                    /**
                     * 设置权限
                     * @param _permValues 权限
                     * 
                     */
                    void SetPermValues(const std::vector<KVPair>& _permValues);

                    /**
                     * 判断参数 PermValues 是否已赋值
                     * @return PermValues 是否已赋值
                     * 
                     */
                    bool PermValuesHasBeenSet() const;

                    /**
                     * 获取附加属性
                     * @return Params 附加属性
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置附加属性
                     * @param _params 附加属性
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取附加业务属性
                     * @return BizParams 附加业务属性
                     * 
                     */
                    std::vector<KVPair> GetBizParams() const;

                    /**
                     * 设置附加业务属性
                     * @param _bizParams 附加业务属性
                     * 
                     */
                    void SetBizParams(const std::vector<KVPair>& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取数据版本
                     * @return DataVersion 数据版本
                     * 
                     */
                    int64_t GetDataVersion() const;

                    /**
                     * 设置数据版本
                     * @param _dataVersion 数据版本
                     * 
                     */
                    void SetDataVersion(const int64_t& _dataVersion);

                    /**
                     * 判断参数 DataVersion 是否已赋值
                     * @return DataVersion 是否已赋值
                     * 
                     */
                    bool DataVersionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedTime 修改时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifiedTime 修改时间
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取数据源主键
                     * @return DatasourceId 数据源主键
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源主键
                     * @param _datasourceId 数据源主键
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                private:

                    /**
                     * 主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 对象GUID值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                    /**
                     * 数据目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 对象owner
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 对象owner账户
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 权限
                     */
                    std::vector<KVPair> m_permValues;
                    bool m_permValuesHasBeenSet;

                    /**
                     * 附加属性
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 附加业务属性
                     */
                    std::vector<KVPair> m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * 数据版本
                     */
                    int64_t m_dataVersion;
                    bool m_dataVersionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 数据源主键
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ASSET_H_
