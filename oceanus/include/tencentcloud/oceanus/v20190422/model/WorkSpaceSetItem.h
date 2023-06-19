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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_WORKSPACESETITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_WORKSPACESETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ClusterGroupSetItem.h>
#include <tencentcloud/oceanus/v20190422/model/RoleAuth.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 工作空间详情
                */
                class WorkSpaceSetItem : public AbstractModel
                {
                public:
                    WorkSpaceSetItem();
                    ~WorkSpaceSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间 SerialId
                     * @return SerialId 工作空间 SerialId
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _serialId 工作空间 SerialId
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取用户 APPID
                     * @return AppId 用户 APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户 APPID
                     * @param _appId 用户 APPID
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
                     * 获取主账号 UIN
                     * @return OwnerUin 主账号 UIN
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号 UIN
                     * @param _ownerUin 主账号 UIN
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建者 UIN
                     * @return CreatorUin 创建者 UIN
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者 UIN
                     * @param _creatorUin 创建者 UIN
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return WorkSpaceName 工作空间名称
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置工作空间名称
                     * @param _workSpaceName 工作空间名称
                     * 
                     */
                    void SetWorkSpaceName(const std::string& _workSpaceName);

                    /**
                     * 判断参数 WorkSpaceName 是否已赋值
                     * @return WorkSpaceName 是否已赋值
                     * 
                     */
                    bool WorkSpaceNameHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取1 未初始化 2 可用  -1 已删除
                     * @return Status 1 未初始化 2 可用  -1 已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1 未初始化 2 可用  -1 已删除
                     * @param _status 1 未初始化 2 可用  -1 已删除
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取工作空间描述
                     * @return Description 工作空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工作空间描述
                     * @param _description 工作空间描述
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
                     * 获取工作空间包含集群信息
                     * @return ClusterGroupSetItem 工作空间包含集群信息
                     * 
                     */
                    std::vector<ClusterGroupSetItem> GetClusterGroupSetItem() const;

                    /**
                     * 设置工作空间包含集群信息
                     * @param _clusterGroupSetItem 工作空间包含集群信息
                     * 
                     */
                    void SetClusterGroupSetItem(const std::vector<ClusterGroupSetItem>& _clusterGroupSetItem);

                    /**
                     * 判断参数 ClusterGroupSetItem 是否已赋值
                     * @return ClusterGroupSetItem 是否已赋值
                     * 
                     */
                    bool ClusterGroupSetItemHasBeenSet() const;

                    /**
                     * 获取工作空间角色的信息
                     * @return RoleAuth 工作空间角色的信息
                     * 
                     */
                    std::vector<RoleAuth> GetRoleAuth() const;

                    /**
                     * 设置工作空间角色的信息
                     * @param _roleAuth 工作空间角色的信息
                     * 
                     */
                    void SetRoleAuth(const std::vector<RoleAuth>& _roleAuth);

                    /**
                     * 判断参数 RoleAuth 是否已赋值
                     * @return RoleAuth 是否已赋值
                     * 
                     */
                    bool RoleAuthHasBeenSet() const;

                    /**
                     * 获取工作空间成员数量
                     * @return RoleAuthCount 工作空间成员数量
                     * 
                     */
                    int64_t GetRoleAuthCount() const;

                    /**
                     * 设置工作空间成员数量
                     * @param _roleAuthCount 工作空间成员数量
                     * 
                     */
                    void SetRoleAuthCount(const int64_t& _roleAuthCount);

                    /**
                     * 判断参数 RoleAuthCount 是否已赋值
                     * @return RoleAuthCount 是否已赋值
                     * 
                     */
                    bool RoleAuthCountHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobsCount 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobsCount() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobsCount 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobsCount(const int64_t& _jobsCount);

                    /**
                     * 判断参数 JobsCount 是否已赋值
                     * @return JobsCount 是否已赋值
                     * 
                     */
                    bool JobsCountHasBeenSet() const;

                private:

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * 用户 APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号 UIN
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者 UIN
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 1 未初始化 2 可用  -1 已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工作空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间包含集群信息
                     */
                    std::vector<ClusterGroupSetItem> m_clusterGroupSetItem;
                    bool m_clusterGroupSetItemHasBeenSet;

                    /**
                     * 工作空间角色的信息
                     */
                    std::vector<RoleAuth> m_roleAuth;
                    bool m_roleAuthHasBeenSet;

                    /**
                     * 工作空间成员数量
                     */
                    int64_t m_roleAuthCount;
                    bool m_roleAuthCountHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobsCount;
                    bool m_jobsCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_WORKSPACESETITEM_H_
