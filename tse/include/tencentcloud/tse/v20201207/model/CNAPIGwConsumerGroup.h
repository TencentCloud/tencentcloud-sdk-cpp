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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 消费者组结构
                */
                class CNAPIGwConsumerGroup : public AbstractModel
                {
                public:
                    CNAPIGwConsumerGroup();
                    ~CNAPIGwConsumerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分组id</p>
                     * @return ConsumerGroupId <p>分组id</p>
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置<p>分组id</p>
                     * @param _consumerGroupId <p>分组id</p>
                     * 
                     */
                    void SetConsumerGroupId(const std::string& _consumerGroupId);

                    /**
                     * 判断参数 ConsumerGroupId 是否已赋值
                     * @return ConsumerGroupId 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>状态Disable/Enable</p>
                     * @return Status <p>状态Disable/Enable</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态Disable/Enable</p>
                     * @param _status <p>状态Disable/Enable</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * @return ModifyTime <p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * @param _modifyTime <p>更新时间 yyyy-MM-dd hh:mm:ss</p>
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
                     * 获取<p>绑定的消费者数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindCount <p>绑定的消费者数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBindCount() const;

                    /**
                     * 设置<p>绑定的消费者数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindCount <p>绑定的消费者数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindCount(const uint64_t& _bindCount);

                    /**
                     * 判断参数 BindCount 是否已赋值
                     * @return BindCount 是否已赋值
                     * 
                     */
                    bool BindCountHasBeenSet() const;

                    /**
                     * 获取<p>同步状态</p><p>枚举值：</p><ul><li>Fail： 失败</li></ul>
                     * @return SyncStatus <p>同步状态</p><p>枚举值：</p><ul><li>Fail： 失败</li></ul>
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置<p>同步状态</p><p>枚举值：</p><ul><li>Fail： 失败</li></ul>
                     * @param _syncStatus <p>同步状态</p><p>枚举值：</p><ul><li>Fail： 失败</li></ul>
                     * 
                     */
                    void SetSyncStatus(const std::string& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>Public： 公有</li></ul>
                     * @return SourceType <p>资源类型</p><p>枚举值：</p><ul><li>Public： 公有</li></ul>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>Public： 公有</li></ul>
                     * @param _sourceType <p>资源类型</p><p>枚举值：</p><ul><li>Public： 公有</li></ul>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>同步版本</p>
                     * @return SyncedVersion <p>同步版本</p>
                     * 
                     */
                    std::string GetSyncedVersion() const;

                    /**
                     * 设置<p>同步版本</p>
                     * @param _syncedVersion <p>同步版本</p>
                     * 
                     */
                    void SetSyncedVersion(const std::string& _syncedVersion);

                    /**
                     * 判断参数 SyncedVersion 是否已赋值
                     * @return SyncedVersion 是否已赋值
                     * 
                     */
                    bool SyncedVersionHasBeenSet() const;

                private:

                    /**
                     * <p>分组id</p>
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>状态Disable/Enable</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>绑定的消费者数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bindCount;
                    bool m_bindCountHasBeenSet;

                    /**
                     * <p>同步状态</p><p>枚举值：</p><ul><li>Fail： 失败</li></ul>
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>Public： 公有</li></ul>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>同步版本</p>
                     */
                    std::string m_syncedVersion;
                    bool m_syncedVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERGROUP_H_
