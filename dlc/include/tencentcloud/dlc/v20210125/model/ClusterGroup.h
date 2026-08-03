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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CLUSTERGROUP_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CLUSTERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 集群组响应
                */
                class ClusterGroup : public AbstractModel
                {
                public:
                    ClusterGroup();
                    ~ClusterGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群组 ID（系统生成）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 集群组 ID（系统生成）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置集群组 ID（系统生成）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 集群组 ID（系统生成）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 集群组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 集群组名称
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
                     * 获取集群组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 集群组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集群组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 集群组描述
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
                     * 获取配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取应用 ID（多租户）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 应用 ID（多租户）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置应用 ID（多租户）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 应用 ID（多租户）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取创建者主账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 创建者主账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置创建者主账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 创建者主账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建者子账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 创建者子账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置创建者子账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 创建者子账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否已软删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deleted 是否已软删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置是否已软删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleted 是否已软删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleted(const bool& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取删除时间（软删时写入，活跃记录为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteTime 删除时间（软删时写入，活跃记录为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置删除时间（软删时写入，活跃记录为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteTime 删除时间（软删时写入，活跃记录为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                private:

                    /**
                     * 集群组 ID（系统生成）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 集群组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集群组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 应用 ID（多租户）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建者主账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建者子账号 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否已软删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 删除时间（软删时写入，活跃记录为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CLUSTERGROUP_H_
