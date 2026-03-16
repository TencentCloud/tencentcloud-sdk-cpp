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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DATASOURCEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DATASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/MountConfigureInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/StorageExtraConf.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 数据源信息
                */
                class DataSourceInfo : public AbstractModel
                {
                public:
                    DataSourceInfo();
                    ~DataSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源ID
                     * @return Id 数据源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置数据源ID
                     * @param _id 数据源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return Name 数据源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称
                     * @param _name 数据源名称
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
                     * 获取创建者uin
                     * @return Creator 创建者uin
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者uin
                     * @param _creator 创建者uin
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建者名称
                     * @return CreatorName 创建者名称
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置创建者名称
                     * @param _creatorName 创建者名称
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取数据源类型英文名
                     * @return Type 数据源类型英文名
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型英文名
                     * @param _type 数据源类型英文名
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
                     * 获取数据源权限，取值有RW RO
                     * @return Permission 数据源权限，取值有RW RO
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置数据源权限，取值有RW RO
                     * @param _permission 数据源权限，取值有RW RO
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取数据源所属存储实例ID
                     * @return StorageId 数据源所属存储实例ID
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置数据源所属存储实例ID
                     * @param _storageId 数据源所属存储实例ID
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取数据源所属存储实例名称
                     * @return StorageName 数据源所属存储实例名称
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置数据源所属存储实例名称
                     * @param _storageName 数据源所属存储实例名称
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                    /**
                     * 获取数据源挂载配置
                     * @return MountConfigure 数据源挂载配置
                     * 
                     */
                    MountConfigureInfo GetMountConfigure() const;

                    /**
                     * 设置数据源挂载配置
                     * @param _mountConfigure 数据源挂载配置
                     * 
                     */
                    void SetMountConfigure(const MountConfigureInfo& _mountConfigure);

                    /**
                     * 判断参数 MountConfigure 是否已赋值
                     * @return MountConfigure 是否已赋值
                     * 
                     */
                    bool MountConfigureHasBeenSet() const;

                    /**
                     * 获取创建时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * @return CreateTime 创建时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * @param _createTime 创建时间, 格式为yyyy-mm-ddThh:mm:ssZ
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
                     * 获取更新时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * @return UpdateTime 更新时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * @param _updateTime 更新时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取限制开关是否开启，只有开启时才有限制
                     * @return LimitMount 限制开关是否开启，只有开启时才有限制
                     * 
                     */
                    bool GetLimitMount() const;

                    /**
                     * 设置限制开关是否开启，只有开启时才有限制
                     * @param _limitMount 限制开关是否开启，只有开启时才有限制
                     * 
                     */
                    void SetLimitMount(const bool& _limitMount);

                    /**
                     * 判断参数 LimitMount 是否已赋值
                     * @return LimitMount 是否已赋值
                     * 
                     */
                    bool LimitMountHasBeenSet() const;

                    /**
                     * 获取标签配置
                     * @return Tags 标签配置
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
                     * @param _tags 标签配置
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取额外配置,对应存储实例的额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraConf 额外配置,对应存储实例的额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageExtraConf GetExtraConf() const;

                    /**
                     * 设置额外配置,对应存储实例的额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraConf 额外配置,对应存储实例的额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraConf(const StorageExtraConf& _extraConf);

                    /**
                     * 判断参数 ExtraConf 是否已赋值
                     * @return ExtraConf 是否已赋值
                     * 
                     */
                    bool ExtraConfHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建者uin
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建者名称
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * 数据源类型英文名
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源权限，取值有RW RO
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 数据源所属存储实例ID
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 数据源所属存储实例名称
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * 数据源挂载配置
                     */
                    MountConfigureInfo m_mountConfigure;
                    bool m_mountConfigureHasBeenSet;

                    /**
                     * 创建时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间, 格式为yyyy-mm-ddThh:mm:ssZ
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 限制开关是否开启，只有开启时才有限制
                     */
                    bool m_limitMount;
                    bool m_limitMountHasBeenSet;

                    /**
                     * 标签配置
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 额外配置,对应存储实例的额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageExtraConf m_extraConf;
                    bool m_extraConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATASOURCEINFO_H_
