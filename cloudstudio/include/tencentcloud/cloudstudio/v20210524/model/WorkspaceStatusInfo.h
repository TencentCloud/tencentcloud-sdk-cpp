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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACESTATUSINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/UserInfoRsp.h>
#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceShareInfo.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 获取用户工作空间返回信息
                */
                class WorkspaceStatusInfo : public AbstractModel
                {
                public:
                    WorkspaceStatusInfo();
                    ~WorkspaceStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取空间ID
                     * @return Id 空间ID
                     */
                    int64_t GetId() const;

                    /**
                     * 设置空间ID
                     * @param Id 空间ID
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取空间名称
                     * @return Name 空间名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置空间名称
                     * @param Name 空间名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取所属人
                     * @return Owner 所属人
                     */
                    UserInfoRsp GetOwner() const;

                    /**
                     * 设置所属人
                     * @param Owner 所属人
                     */
                    void SetOwner(const UserInfoRsp& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取空间标识
                     * @return SpaceKey 空间标识
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置空间标识
                     * @param SpaceKey 空间标识
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param Status 状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOpsDate 最后操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastOpsDate() const;

                    /**
                     * 设置最后操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastOpsDate 最后操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastOpsDate(const std::string& _lastOpsDate);

                    /**
                     * 判断参数 LastOpsDate 是否已赋值
                     * @return LastOpsDate 是否已赋值
                     */
                    bool LastOpsDateHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取共享状态
                     * @return Share 共享状态
                     */
                    WorkspaceShareInfo GetShare() const;

                    /**
                     * 设置共享状态
                     * @param Share 共享状态
                     */
                    void SetShare(const WorkspaceShareInfo& _share);

                    /**
                     * 判断参数 Share 是否已赋值
                     * @return Share 是否已赋值
                     */
                    bool ShareHasBeenSet() const;

                    /**
                     * 获取空间类型
                     * @return WorkspaceType 空间类型
                     */
                    std::string GetWorkspaceType() const;

                    /**
                     * 设置空间类型
                     * @param WorkspaceType 空间类型
                     */
                    void SetWorkspaceType(const std::string& _workspaceType);

                    /**
                     * 判断参数 WorkspaceType 是否已赋值
                     * @return WorkspaceType 是否已赋值
                     */
                    bool WorkspaceTypeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取空间版本
                     * @return WorkspaceVersion 空间版本
                     */
                    int64_t GetWorkspaceVersion() const;

                    /**
                     * 设置空间版本
                     * @param WorkspaceVersion 空间版本
                     */
                    void SetWorkspaceVersion(const int64_t& _workspaceVersion);

                    /**
                     * 判断参数 WorkspaceVersion 是否已赋值
                     * @return WorkspaceVersion 是否已赋值
                     */
                    bool WorkspaceVersionHasBeenSet() const;

                    /**
                     * 获取图标地址
                     * @return ImageIcon 图标地址
                     */
                    std::string GetImageIcon() const;

                    /**
                     * 设置图标地址
                     * @param ImageIcon 图标地址
                     */
                    void SetImageIcon(const std::string& _imageIcon);

                    /**
                     * 判断参数 ImageIcon 是否已赋值
                     * @return ImageIcon 是否已赋值
                     */
                    bool ImageIconHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateDate 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateDate 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取版本控制地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlUrl 版本控制地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionControlUrl() const;

                    /**
                     * 设置版本控制地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionControlUrl 版本控制地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionControlUrl(const std::string& _versionControlUrl);

                    /**
                     * 判断参数 VersionControlUrl 是否已赋值
                     * @return VersionControlUrl 是否已赋值
                     */
                    bool VersionControlUrlHasBeenSet() const;

                    /**
                     * 获取版本控制描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlDesc 版本控制描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionControlDesc() const;

                    /**
                     * 设置版本控制描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionControlDesc 版本控制描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionControlDesc(const std::string& _versionControlDesc);

                    /**
                     * 判断参数 VersionControlDesc 是否已赋值
                     * @return VersionControlDesc 是否已赋值
                     */
                    bool VersionControlDescHasBeenSet() const;

                    /**
                     * 获取版本控制引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlRef 版本控制引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionControlRef() const;

                    /**
                     * 设置版本控制引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionControlRef 版本控制引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionControlRef(const std::string& _versionControlRef);

                    /**
                     * 判断参数 VersionControlRef 是否已赋值
                     * @return VersionControlRef 是否已赋值
                     */
                    bool VersionControlRefHasBeenSet() const;

                    /**
                     * 获取版本控制引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlRefType 版本控制引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionControlRefType() const;

                    /**
                     * 设置版本控制引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionControlRefType 版本控制引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionControlRefType(const std::string& _versionControlRefType);

                    /**
                     * 判断参数 VersionControlRefType 是否已赋值
                     * @return VersionControlRefType 是否已赋值
                     */
                    bool VersionControlRefTypeHasBeenSet() const;

                    /**
                     * 获取版本控制类型
                     * @return VersionControlType 版本控制类型
                     */
                    std::string GetVersionControlType() const;

                    /**
                     * 设置版本控制类型
                     * @param VersionControlType 版本控制类型
                     */
                    void SetVersionControlType(const std::string& _versionControlType);

                    /**
                     * 判断参数 VersionControlType 是否已赋值
                     * @return VersionControlType 是否已赋值
                     */
                    bool VersionControlTypeHasBeenSet() const;

                    /**
                     * 获取模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplateId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取快照ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotUid 快照ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSnapshotUid() const;

                    /**
                     * 设置快照ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SnapshotUid 快照ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSnapshotUid(const std::string& _snapshotUid);

                    /**
                     * 判断参数 SnapshotUid 是否已赋值
                     * @return SnapshotUid 是否已赋值
                     */
                    bool SnapshotUidHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecDesc 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecDesc() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecDesc 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecDesc(const std::string& _specDesc);

                    /**
                     * 判断参数 SpecDesc 是否已赋值
                     * @return SpecDesc 是否已赋值
                     */
                    bool SpecDescHasBeenSet() const;

                    /**
                     * 获取CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cpu CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Memory 内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * 空间ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所属人
                     */
                    UserInfoRsp m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 空间标识
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOpsDate;
                    bool m_lastOpsDateHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 共享状态
                     */
                    WorkspaceShareInfo m_share;
                    bool m_shareHasBeenSet;

                    /**
                     * 空间类型
                     */
                    std::string m_workspaceType;
                    bool m_workspaceTypeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 空间版本
                     */
                    int64_t m_workspaceVersion;
                    bool m_workspaceVersionHasBeenSet;

                    /**
                     * 图标地址
                     */
                    std::string m_imageIcon;
                    bool m_imageIconHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 版本控制地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlUrl;
                    bool m_versionControlUrlHasBeenSet;

                    /**
                     * 版本控制描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlDesc;
                    bool m_versionControlDescHasBeenSet;

                    /**
                     * 版本控制引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlRef;
                    bool m_versionControlRefHasBeenSet;

                    /**
                     * 版本控制引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlRefType;
                    bool m_versionControlRefTypeHasBeenSet;

                    /**
                     * 版本控制类型
                     */
                    std::string m_versionControlType;
                    bool m_versionControlTypeHasBeenSet;

                    /**
                     * 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 快照ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotUid;
                    bool m_snapshotUidHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specDesc;
                    bool m_specDescHasBeenSet;

                    /**
                     * CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACESTATUSINFO_H_
