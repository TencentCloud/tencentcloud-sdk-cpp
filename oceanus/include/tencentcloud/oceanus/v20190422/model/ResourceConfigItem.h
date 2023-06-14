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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCECONFIGITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceLoc.h>
#include <tencentcloud/oceanus/v20190422/model/RefJobStatusCountItem.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 描述资源配置的返回参数
                */
                class ResourceConfigItem : public AbstractModel
                {
                public:
                    ResourceConfigItem();
                    ~ResourceConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源所属地域
                     * @return Region 资源所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源所属地域
                     * @param _region 资源所属地域
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
                     * 获取资源所属AppId
                     * @return AppId 资源所属AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置资源所属AppId
                     * @param _appId 资源所属AppId
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
                     * 获取主账号Uin
                     * @return OwnerUin 主账号Uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号Uin
                     * @param _ownerUin 主账号Uin
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
                     * 获取子账号Uin
                     * @return CreatorUin 子账号Uin
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置子账号Uin
                     * @param _creatorUin 子账号Uin
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
                     * 获取资源位置描述
                     * @return ResourceLoc 资源位置描述
                     * 
                     */
                    ResourceLoc GetResourceLoc() const;

                    /**
                     * 设置资源位置描述
                     * @param _resourceLoc 资源位置描述
                     * 
                     */
                    void SetResourceLoc(const ResourceLoc& _resourceLoc);

                    /**
                     * 判断参数 ResourceLoc 是否已赋值
                     * @return ResourceLoc 是否已赋值
                     * 
                     */
                    bool ResourceLocHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return CreateTime 资源创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间
                     * @param _createTime 资源创建时间
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
                     * 获取资源版本
                     * @return Version 资源版本
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置资源版本
                     * @param _version 资源版本
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取资源描述
                     * @return Remark 资源描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置资源描述
                     * @param _remark 资源描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取资源状态：0: 资源同步中，1:资源已就绪
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源状态：0: 资源同步中，1:资源已就绪
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源状态：0: 资源同步中，1:资源已就绪
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源状态：0: 资源同步中，1:资源已就绪
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取关联作业个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefJobCount 关联作业个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRefJobCount() const;

                    /**
                     * 设置关联作业个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refJobCount 关联作业个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefJobCount(const int64_t& _refJobCount);

                    /**
                     * 判断参数 RefJobCount 是否已赋值
                     * @return RefJobCount 是否已赋值
                     * 
                     */
                    bool RefJobCountHasBeenSet() const;

                    /**
                     * 获取分状态统计关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefJobStatusCountSet 分状态统计关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RefJobStatusCountItem> GetRefJobStatusCountSet() const;

                    /**
                     * 设置分状态统计关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refJobStatusCountSet 分状态统计关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefJobStatusCountSet(const std::vector<RefJobStatusCountItem>& _refJobStatusCountSet);

                    /**
                     * 判断参数 RefJobStatusCountSet 是否已赋值
                     * @return RefJobStatusCountSet 是否已赋值
                     * 
                     */
                    bool RefJobStatusCountSetHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资源所属AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号Uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 子账号Uin
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 资源位置描述
                     */
                    ResourceLoc m_resourceLoc;
                    bool m_resourceLocHasBeenSet;

                    /**
                     * 资源创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 资源版本
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 资源描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资源状态：0: 资源同步中，1:资源已就绪
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联作业个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refJobCount;
                    bool m_refJobCountHasBeenSet;

                    /**
                     * 分状态统计关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RefJobStatusCountItem> m_refJobStatusCountSet;
                    bool m_refJobStatusCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCECONFIGITEM_H_
