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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXSNAPSHOT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXSNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱快照
                */
                class SandboxSnapshot : public AbstractModel
                {
                public:
                    SandboxSnapshot();
                    ~SandboxSnapshot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>沙箱快照 ID</p>
                     * @return SnapshotId <p>沙箱快照 ID</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>沙箱快照 ID</p>
                     * @param _snapshotId <p>沙箱快照 ID</p>
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>沙箱快照名称</p>
                     * @return SnapshotName <p>沙箱快照名称</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>沙箱快照名称</p>
                     * @param _snapshotName <p>沙箱快照名称</p>
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取<p>源沙箱实例 ID，沙箱快照由其派生</p>
                     * @return SourceInstanceId <p>源沙箱实例 ID，沙箱快照由其派生</p>
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置<p>源沙箱实例 ID，沙箱快照由其派生</p>
                     * @param _sourceInstanceId <p>源沙箱实例 ID，沙箱快照由其派生</p>
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>制作快照时是否包含内存状态</p>
                     * @return MemoryIncluded <p>制作快照时是否包含内存状态</p>
                     * 
                     */
                    bool GetMemoryIncluded() const;

                    /**
                     * 设置<p>制作快照时是否包含内存状态</p>
                     * @param _memoryIncluded <p>制作快照时是否包含内存状态</p>
                     * 
                     */
                    void SetMemoryIncluded(const bool& _memoryIncluded);

                    /**
                     * 判断参数 MemoryIncluded 是否已赋值
                     * @return MemoryIncluded 是否已赋值
                     * 
                     */
                    bool MemoryIncludedHasBeenSet() const;

                    /**
                     * 获取<p>沙箱快照状态</p><p>枚举值：</p><ul><li>ACTIVE： 可用</li><li>DELETING： 删除中</li><li>DELETED： 已删除</li></ul>
                     * @return Status <p>沙箱快照状态</p><p>枚举值：</p><ul><li>ACTIVE： 可用</li><li>DELETING： 删除中</li><li>DELETED： 已删除</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>沙箱快照状态</p><p>枚举值：</p><ul><li>ACTIVE： 可用</li><li>DELETING： 删除中</li><li>DELETED： 已删除</li></ul>
                     * @param _status <p>沙箱快照状态</p><p>枚举值：</p><ul><li>ACTIVE： 可用</li><li>DELETING： 删除中</li><li>DELETED： 已删除</li></ul>
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
                     * 获取<p>用于说明沙箱快照处于该状态的原因</p>
                     * @return StatusReason <p>用于说明沙箱快照处于该状态的原因</p>
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置<p>用于说明沙箱快照处于该状态的原因</p>
                     * @param _statusReason <p>用于说明沙箱快照处于该状态的原因</p>
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
                     * 获取<p>云资源标签</p>
                     * @return Tags <p>云资源标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>云资源标签</p>
                     * @param _tags <p>云资源标签</p>
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
                     * 获取<p>创建时间</p><p>参数格式：ISO8601</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：ISO8601</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：ISO8601</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：ISO8601</p>
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
                     * 获取<p>更新时间</p><p>参数格式：ISO8601</p>
                     * @return UpdateTime <p>更新时间</p><p>参数格式：ISO8601</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：ISO8601</p>
                     * @param _updateTime <p>更新时间</p><p>参数格式：ISO8601</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱快照 ID</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>沙箱快照名称</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>源沙箱实例 ID，沙箱快照由其派生</p>
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * <p>制作快照时是否包含内存状态</p>
                     */
                    bool m_memoryIncluded;
                    bool m_memoryIncludedHasBeenSet;

                    /**
                     * <p>沙箱快照状态</p><p>枚举值：</p><ul><li>ACTIVE： 可用</li><li>DELETING： 删除中</li><li>DELETED： 已删除</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>用于说明沙箱快照处于该状态的原因</p>
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * <p>云资源标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：ISO8601</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：ISO8601</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXSNAPSHOT_H_
