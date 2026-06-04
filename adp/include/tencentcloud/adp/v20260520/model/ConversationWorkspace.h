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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWORKSPACE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWORKSPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workspace 工作空间信息
                */
                class ConversationWorkspace : public AbstractModel
                {
                public:
                    ConversationWorkspace();
                    ~ConversationWorkspace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工作空间 ID</p>
                     * @return WorkspaceId <p>工作空间 ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间 ID</p>
                     * @param _workspaceId <p>工作空间 ID</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>存储类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType <p>存储类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType <p>存储类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间 ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>存储类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWORKSPACE_H_
