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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 治理中心命名空间
                */
                class GovernanceNamespace : public AbstractModel
                {
                public:
                    GovernanceNamespace();
                    ~GovernanceNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称。
                     * @return Name 命名空间名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名称。
                     * @param _name 命名空间名称。
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
                     * 获取命名空间描述信息。
                     * @return Comment 命名空间描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置命名空间描述信息。
                     * @param _comment 命名空间描述信息。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取修改时间。
                     * @return ModifyTime 修改时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间。
                     * @param _modifyTime 修改时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取命名空间下总服务数据量
                     * @return TotalServiceCount 命名空间下总服务数据量
                     * 
                     */
                    int64_t GetTotalServiceCount() const;

                    /**
                     * 设置命名空间下总服务数据量
                     * @param _totalServiceCount 命名空间下总服务数据量
                     * 
                     */
                    void SetTotalServiceCount(const int64_t& _totalServiceCount);

                    /**
                     * 判断参数 TotalServiceCount 是否已赋值
                     * @return TotalServiceCount 是否已赋值
                     * 
                     */
                    bool TotalServiceCountHasBeenSet() const;

                    /**
                     * 获取命名空间下总健康实例数量
                     * @return TotalHealthInstanceCount 命名空间下总健康实例数量
                     * 
                     */
                    int64_t GetTotalHealthInstanceCount() const;

                    /**
                     * 设置命名空间下总健康实例数量
                     * @param _totalHealthInstanceCount 命名空间下总健康实例数量
                     * 
                     */
                    void SetTotalHealthInstanceCount(const int64_t& _totalHealthInstanceCount);

                    /**
                     * 判断参数 TotalHealthInstanceCount 是否已赋值
                     * @return TotalHealthInstanceCount 是否已赋值
                     * 
                     */
                    bool TotalHealthInstanceCountHasBeenSet() const;

                    /**
                     * 获取命名空间下总实例数量
                     * @return TotalInstanceCount 命名空间下总实例数量
                     * 
                     */
                    int64_t GetTotalInstanceCount() const;

                    /**
                     * 设置命名空间下总实例数量
                     * @param _totalInstanceCount 命名空间下总实例数量
                     * 
                     */
                    void SetTotalInstanceCount(const int64_t& _totalInstanceCount);

                    /**
                     * 判断参数 TotalInstanceCount 是否已赋值
                     * @return TotalInstanceCount 是否已赋值
                     * 
                     */
                    bool TotalInstanceCountHasBeenSet() const;

                    /**
                     * 获取命名空间ID
                     * @return Id 命名空间ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置命名空间ID
                     * @param _id 命名空间ID
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
                     * 获取是否可以编辑
                     * @return Editable 是否可以编辑
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置是否可以编辑
                     * @param _editable 是否可以编辑
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取可以操作此命名空间的用户ID列表
                     * @return UserIds 可以操作此命名空间的用户ID列表
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置可以操作此命名空间的用户ID列表
                     * @param _userIds 可以操作此命名空间的用户ID列表
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取可以操作此命名空间的用户组ID列表
                     * @return GroupIds 可以操作此命名空间的用户组ID列表
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置可以操作此命名空间的用户组ID列表
                     * @param _groupIds 可以操作此命名空间的用户组ID列表
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取移除可以操作此命名空间的用户ID列表
                     * @return RemoveUserIds 移除可以操作此命名空间的用户ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置移除可以操作此命名空间的用户ID列表
                     * @param _removeUserIds 移除可以操作此命名空间的用户ID列表
                     * 
                     */
                    void SetRemoveUserIds(const std::vector<std::string>& _removeUserIds);

                    /**
                     * 判断参数 RemoveUserIds 是否已赋值
                     * @return RemoveUserIds 是否已赋值
                     * 
                     */
                    bool RemoveUserIdsHasBeenSet() const;

                    /**
                     * 获取移除可以操作此命名空间的用户组ID列表
                     * @return RemoveGroupIds 移除可以操作此命名空间的用户组ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置移除可以操作此命名空间的用户组ID列表
                     * @param _removeGroupIds 移除可以操作此命名空间的用户组ID列表
                     * 
                     */
                    void SetRemoveGroupIds(const std::vector<std::string>& _removeGroupIds);

                    /**
                     * 判断参数 RemoveGroupIds 是否已赋值
                     * @return RemoveGroupIds 是否已赋值
                     * 
                     */
                    bool RemoveGroupIdsHasBeenSet() const;

                    /**
                     * 获取该命名空间下的服务对哪些命名空间可见
                     * @return ServiceExportTo 该命名空间下的服务对哪些命名空间可见
                     * 
                     */
                    std::vector<std::string> GetServiceExportTo() const;

                    /**
                     * 设置该命名空间下的服务对哪些命名空间可见
                     * @param _serviceExportTo 该命名空间下的服务对哪些命名空间可见
                     * 
                     */
                    void SetServiceExportTo(const std::vector<std::string>& _serviceExportTo);

                    /**
                     * 判断参数 ServiceExportTo 是否已赋值
                     * @return ServiceExportTo 是否已赋值
                     * 
                     */
                    bool ServiceExportToHasBeenSet() const;

                    /**
                     * 获取是否开启同步到全局注册中心	
                     * @return SyncToGlobalRegistry 是否开启同步到全局注册中心	
                     * 
                     */
                    bool GetSyncToGlobalRegistry() const;

                    /**
                     * 设置是否开启同步到全局注册中心	
                     * @param _syncToGlobalRegistry 是否开启同步到全局注册中心	
                     * 
                     */
                    void SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry);

                    /**
                     * 判断参数 SyncToGlobalRegistry 是否已赋值
                     * @return SyncToGlobalRegistry 是否已赋值
                     * 
                     */
                    bool SyncToGlobalRegistryHasBeenSet() const;

                    /**
                     * 获取元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadatas 元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadatas 元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 命名空间下总服务数据量
                     */
                    int64_t m_totalServiceCount;
                    bool m_totalServiceCountHasBeenSet;

                    /**
                     * 命名空间下总健康实例数量
                     */
                    int64_t m_totalHealthInstanceCount;
                    bool m_totalHealthInstanceCountHasBeenSet;

                    /**
                     * 命名空间下总实例数量
                     */
                    int64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否可以编辑
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 可以操作此命名空间的用户ID列表
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 可以操作此命名空间的用户组ID列表
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 移除可以操作此命名空间的用户ID列表
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * 移除可以操作此命名空间的用户组ID列表
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * 该命名空间下的服务对哪些命名空间可见
                     */
                    std::vector<std::string> m_serviceExportTo;
                    bool m_serviceExportToHasBeenSet;

                    /**
                     * 是否开启同步到全局注册中心	
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                    /**
                     * 元数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACE_H_
