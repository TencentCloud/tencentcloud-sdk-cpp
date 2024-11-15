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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_WORKSPACESTATUSINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_WORKSPACESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
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
                     * 获取工作空间 ID
                     * @return Id 工作空间 ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置工作空间 ID
                     * @param _id 工作空间 ID
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
                     * 获取工作空间名称
                     * @return Name 工作空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称
                     * @param _name 工作空间名称
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
                     * 获取工作空间标识
                     * @return SpaceKey 工作空间标识
                     * 
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置工作空间标识
                     * @param _spaceKey 工作空间标识
                     * 
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     * 
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取工作空间状态
                     * @return Status 工作空间状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置工作空间状态
                     * @param _status 工作空间状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CPU数量
                     * @return Cpu CPU数量
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU数量
                     * @param _cpu CPU数量
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取工作空间图标
                     * @return Icon 工作空间图标
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置工作空间图标
                     * @param _icon 工作空间图标
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取工作空间状态, 异常原因
                     * @return StatusReason 工作空间状态, 异常原因
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置工作空间状态, 异常原因
                     * @param _statusReason 工作空间状态, 异常原因
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

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
                     * 获取工作空间类型
                     * @return WorkspaceType 工作空间类型
                     * 
                     */
                    std::string GetWorkspaceType() const;

                    /**
                     * 设置工作空间类型
                     * @param _workspaceType 工作空间类型
                     * 
                     */
                    void SetWorkspaceType(const std::string& _workspaceType);

                    /**
                     * 判断参数 WorkspaceType 是否已赋值
                     * @return WorkspaceType 是否已赋值
                     * 
                     */
                    bool WorkspaceTypeHasBeenSet() const;

                    /**
                     * 获取Git 仓库 HTTPS 地址
                     * @return VersionControlUrl Git 仓库 HTTPS 地址
                     * 
                     */
                    std::string GetVersionControlUrl() const;

                    /**
                     * 设置Git 仓库 HTTPS 地址
                     * @param _versionControlUrl Git 仓库 HTTPS 地址
                     * 
                     */
                    void SetVersionControlUrl(const std::string& _versionControlUrl);

                    /**
                     * 判断参数 VersionControlUrl 是否已赋值
                     * @return VersionControlUrl 是否已赋值
                     * 
                     */
                    bool VersionControlUrlHasBeenSet() const;

                    /**
                     * 获取Git 仓库引用。指定分支使用 /refs/heads/{分支名}, 指定 Tag 用 /refs/tags/{Tag名}
                     * @return VersionControlRef Git 仓库引用。指定分支使用 /refs/heads/{分支名}, 指定 Tag 用 /refs/tags/{Tag名}
                     * 
                     */
                    std::string GetVersionControlRef() const;

                    /**
                     * 设置Git 仓库引用。指定分支使用 /refs/heads/{分支名}, 指定 Tag 用 /refs/tags/{Tag名}
                     * @param _versionControlRef Git 仓库引用。指定分支使用 /refs/heads/{分支名}, 指定 Tag 用 /refs/tags/{Tag名}
                     * 
                     */
                    void SetVersionControlRef(const std::string& _versionControlRef);

                    /**
                     * 判断参数 VersionControlRef 是否已赋值
                     * @return VersionControlRef 是否已赋值
                     * 
                     */
                    bool VersionControlRefHasBeenSet() const;

                    /**
                     * 获取最后操作时间
                     * @return LastOpsDate 最后操作时间
                     * 
                     */
                    std::string GetLastOpsDate() const;

                    /**
                     * 设置最后操作时间
                     * @param _lastOpsDate 最后操作时间
                     * 
                     */
                    void SetLastOpsDate(const std::string& _lastOpsDate);

                    /**
                     * 判断参数 LastOpsDate 是否已赋值
                     * @return LastOpsDate 是否已赋值
                     * 
                     */
                    bool LastOpsDateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                private:

                    /**
                     * 工作空间 ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作空间标识
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * 工作空间状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CPU数量
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 工作空间图标
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 工作空间状态, 异常原因
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * 工作空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间类型
                     */
                    std::string m_workspaceType;
                    bool m_workspaceTypeHasBeenSet;

                    /**
                     * Git 仓库 HTTPS 地址
                     */
                    std::string m_versionControlUrl;
                    bool m_versionControlUrlHasBeenSet;

                    /**
                     * Git 仓库引用。指定分支使用 /refs/heads/{分支名}, 指定 Tag 用 /refs/tags/{Tag名}
                     */
                    std::string m_versionControlRef;
                    bool m_versionControlRefHasBeenSet;

                    /**
                     * 最后操作时间
                     */
                    std::string m_lastOpsDate;
                    bool m_lastOpsDateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_WORKSPACESTATUSINFO_H_
