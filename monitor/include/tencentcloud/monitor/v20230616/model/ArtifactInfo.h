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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_ARTIFACTINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_ARTIFACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 产物实体
                */
                class ArtifactInfo : public AbstractModel
                {
                public:
                    ArtifactInfo();
                    ~ArtifactInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产物 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArtifactId <p>产物 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArtifactId() const;

                    /**
                     * 设置<p>产物 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _artifactId <p>产物 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArtifactId(const std::string& _artifactId);

                    /**
                     * 判断参数 ArtifactId 是否已赋值
                     * @return ArtifactId 是否已赋值
                     * 
                     */
                    bool ArtifactIdHasBeenSet() const;

                    /**
                     * 获取<p>产物名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>产物名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>产物名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>产物名称</p>
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
                     * 获取<p>物理类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MimeType <p>物理类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置<p>物理类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mimeType <p>物理类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMimeType(const std::string& _mimeType);

                    /**
                     * 判断参数 MimeType 是否已赋值
                     * @return MimeType 是否已赋值
                     * 
                     */
                    bool MimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>文件大小(字节)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SizeBytes <p>文件大小(字节)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSizeBytes() const;

                    /**
                     * 设置<p>文件大小(字节)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sizeBytes <p>文件大小(字节)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSizeBytes(const int64_t& _sizeBytes);

                    /**
                     * 判断参数 SizeBytes 是否已赋值
                     * @return SizeBytes 是否已赋值
                     * 
                     */
                    bool SizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>是否公共</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsGlobal <p>是否公共</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置<p>是否公共</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isGlobal <p>是否公共</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取<p>创建时间 Unix 秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt <p>创建时间 Unix 秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间 Unix 秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt <p>创建时间 Unix 秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt <p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置<p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt <p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>产生该制品的 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId <p>产生该制品的 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>产生该制品的 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId <p>产生该制品的 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>产生该制品的 Skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillId <p>产生该制品的 Skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>产生该制品的 Skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skillId <p>产生该制品的 Skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取<p>用于解析调用下载接口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoragePath <p>用于解析调用下载接口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 设置<p>用于解析调用下载接口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storagePath <p>用于解析调用下载接口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoragePath(const std::string& _storagePath);

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                private:

                    /**
                     * <p>产物 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_artifactId;
                    bool m_artifactIdHasBeenSet;

                    /**
                     * <p>产物名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>物理类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                    /**
                     * <p>文件大小(字节)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sizeBytes;
                    bool m_sizeBytesHasBeenSet;

                    /**
                     * <p>是否公共</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>创建时间 Unix 秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>产生该制品的 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>产生该制品的 Skill ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>用于解析调用下载接口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ARTIFACTINFO_H_
