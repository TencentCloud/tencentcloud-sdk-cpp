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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MOUNTLIMITINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MOUNTLIMITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 挂载限制
                */
                class MountLimitInfo : public AbstractModel
                {
                public:
                    MountLimitInfo();
                    ~MountLimitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据源类型英文名</p>
                     * @return Type <p>数据源类型英文名</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据源类型英文名</p>
                     * @param _type <p>数据源类型英文名</p>
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
                     * 获取<p>数据源所属存储实例ID</p>
                     * @return StorageId <p>数据源所属存储实例ID</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>数据源所属存储实例ID</p>
                     * @param _storageId <p>数据源所属存储实例ID</p>
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
                     * 获取<p>数据源所属存储实例名称</p>
                     * @return StorageName <p>数据源所属存储实例名称</p>
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置<p>数据源所属存储实例名称</p>
                     * @param _storageName <p>数据源所属存储实例名称</p>
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
                     * 获取<p>限制开关是否开启，只有开启时才有限制</p>
                     * @return LimitMount <p>限制开关是否开启，只有开启时才有限制</p>
                     * 
                     */
                    bool GetLimitMount() const;

                    /**
                     * 设置<p>限制开关是否开启，只有开启时才有限制</p>
                     * @param _limitMount <p>限制开关是否开启，只有开启时才有限制</p>
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
                     * 获取<p>创建者uin</p>
                     * @return Creator <p>创建者uin</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建者uin</p>
                     * @param _creator <p>创建者uin</p>
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
                     * 获取<p>创建者名称</p>
                     * @return CreatorName <p>创建者名称</p>
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置<p>创建者名称</p>
                     * @param _creatorName <p>创建者名称</p>
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
                     * 获取<p>创建时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     * @return CreateTime <p>创建时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     * @param _createTime <p>创建时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
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
                     * 获取<p>更新时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     * @return UpdateTime <p>更新时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     * @param _updateTime <p>更新时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
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
                     * 获取<p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraConf <p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageExtraConf GetExtraConf() const;

                    /**
                     * 设置<p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraConf <p>额外配置</p>
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
                     * <p>数据源类型英文名</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据源所属存储实例ID</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>数据源所属存储实例名称</p>
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * <p>限制开关是否开启，只有开启时才有限制</p>
                     */
                    bool m_limitMount;
                    bool m_limitMountHasBeenSet;

                    /**
                     * <p>创建者uin</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建者名称</p>
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * <p>创建时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间, 格式为yyyy-mm-ddThh:mm:ssZ</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageExtraConf m_extraConf;
                    bool m_extraConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MOUNTLIMITINFO_H_
