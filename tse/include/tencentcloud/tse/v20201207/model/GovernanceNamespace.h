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
                     * 获取<p>命名空间名称。</p>
                     * @return Name <p>命名空间名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>命名空间名称。</p>
                     * @param _name <p>命名空间名称。</p>
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
                     * 获取<p>命名空间描述信息。</p>
                     * @return Comment <p>命名空间描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>命名空间描述信息。</p>
                     * @param _comment <p>命名空间描述信息。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
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
                     * 获取<p>修改时间。</p>
                     * @return ModifyTime <p>修改时间。</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间。</p>
                     * @param _modifyTime <p>修改时间。</p>
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
                     * 获取<p>命名空间下总服务数据量</p>
                     * @return TotalServiceCount <p>命名空间下总服务数据量</p>
                     * 
                     */
                    int64_t GetTotalServiceCount() const;

                    /**
                     * 设置<p>命名空间下总服务数据量</p>
                     * @param _totalServiceCount <p>命名空间下总服务数据量</p>
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
                     * 获取<p>命名空间下总健康实例数量</p>
                     * @return TotalHealthInstanceCount <p>命名空间下总健康实例数量</p>
                     * 
                     */
                    int64_t GetTotalHealthInstanceCount() const;

                    /**
                     * 设置<p>命名空间下总健康实例数量</p>
                     * @param _totalHealthInstanceCount <p>命名空间下总健康实例数量</p>
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
                     * 获取<p>命名空间下总实例数量</p>
                     * @return TotalInstanceCount <p>命名空间下总实例数量</p>
                     * 
                     */
                    int64_t GetTotalInstanceCount() const;

                    /**
                     * 设置<p>命名空间下总实例数量</p>
                     * @param _totalInstanceCount <p>命名空间下总实例数量</p>
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
                     * 获取<p>命名空间ID</p>
                     * @return Id <p>命名空间ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>命名空间ID</p>
                     * @param _id <p>命名空间ID</p>
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
                     * 获取<p>是否可以编辑</p>
                     * @return Editable <p>是否可以编辑</p>
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置<p>是否可以编辑</p>
                     * @param _editable <p>是否可以编辑</p>
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
                     * 获取<p>可以操作此命名空间的用户ID列表</p>
                     * @return UserIds <p>可以操作此命名空间的用户ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>可以操作此命名空间的用户ID列表</p>
                     * @param _userIds <p>可以操作此命名空间的用户ID列表</p>
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
                     * 获取<p>可以操作此命名空间的用户组ID列表</p>
                     * @return GroupIds <p>可以操作此命名空间的用户组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>可以操作此命名空间的用户组ID列表</p>
                     * @param _groupIds <p>可以操作此命名空间的用户组ID列表</p>
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
                     * 获取<p>移除可以操作此命名空间的用户ID列表</p>
                     * @return RemoveUserIds <p>移除可以操作此命名空间的用户ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置<p>移除可以操作此命名空间的用户ID列表</p>
                     * @param _removeUserIds <p>移除可以操作此命名空间的用户ID列表</p>
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
                     * 获取<p>移除可以操作此命名空间的用户组ID列表</p>
                     * @return RemoveGroupIds <p>移除可以操作此命名空间的用户组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置<p>移除可以操作此命名空间的用户组ID列表</p>
                     * @param _removeGroupIds <p>移除可以操作此命名空间的用户组ID列表</p>
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
                     * 获取<p>该命名空间下的服务对哪些命名空间可见</p>
                     * @return ServiceExportTo <p>该命名空间下的服务对哪些命名空间可见</p>
                     * 
                     */
                    std::vector<std::string> GetServiceExportTo() const;

                    /**
                     * 设置<p>该命名空间下的服务对哪些命名空间可见</p>
                     * @param _serviceExportTo <p>该命名空间下的服务对哪些命名空间可见</p>
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
                     * 获取<p>是否开启同步到全局注册中心</p>
                     * @return SyncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
                     * 
                     */
                    bool GetSyncToGlobalRegistry() const;

                    /**
                     * 设置<p>是否开启同步到全局注册中心</p>
                     * @param _syncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
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
                     * 获取<p>元数据</p>
                     * @return Metadatas <p>元数据</p>
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置<p>元数据</p>
                     * @param _metadatas <p>元数据</p>
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
                     * <p>命名空间名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>命名空间描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间。</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>命名空间下总服务数据量</p>
                     */
                    int64_t m_totalServiceCount;
                    bool m_totalServiceCountHasBeenSet;

                    /**
                     * <p>命名空间下总健康实例数量</p>
                     */
                    int64_t m_totalHealthInstanceCount;
                    bool m_totalHealthInstanceCountHasBeenSet;

                    /**
                     * <p>命名空间下总实例数量</p>
                     */
                    int64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * <p>命名空间ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>是否可以编辑</p>
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * <p>可以操作此命名空间的用户ID列表</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>可以操作此命名空间的用户组ID列表</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>移除可以操作此命名空间的用户ID列表</p>
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * <p>移除可以操作此命名空间的用户组ID列表</p>
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * <p>该命名空间下的服务对哪些命名空间可见</p>
                     */
                    std::vector<std::string> m_serviceExportTo;
                    bool m_serviceExportToHasBeenSet;

                    /**
                     * <p>是否开启同步到全局注册中心</p>
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                    /**
                     * <p>元数据</p>
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACE_H_
