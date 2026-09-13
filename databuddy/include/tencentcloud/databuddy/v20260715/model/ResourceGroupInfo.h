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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RESOURCEGROUPINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RESOURCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 资源组信息
                */
                class ResourceGroupInfo : public AbstractModel
                {
                public:
                    ResourceGroupInfo();
                    ~ResourceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取资源组状态
COMPUTE_RESOURCE_STATUS_UNSPECIFIED 未指定
COMPUTE_RESOURCE_STATUS_PENDING_CREATE 待创建
COMPUTE_RESOURCE_STATUS_CREATING 创建中
COMPUTE_RESOURCE_STATUS_RUNNING 运行中
COMPUTE_RESOURCE_STATUS_STOPPED 已停止
COMPUTE_RESOURCE_STATUS_STOPPING 停止中
COMPUTE_RESOURCE_STATUS_STARTING 启动中
COMPUTE_RESOURCE_STATUS_UPDATING 更新中
COMPUTE_RESOURCE_STATUS_DELETING 删除中
COMPUTE_RESOURCE_STATUS_DELETED 已删除
COMPUTE_RESOURCE_STATUS_FAILED  失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupStatus 资源组状态
COMPUTE_RESOURCE_STATUS_UNSPECIFIED 未指定
COMPUTE_RESOURCE_STATUS_PENDING_CREATE 待创建
COMPUTE_RESOURCE_STATUS_CREATING 创建中
COMPUTE_RESOURCE_STATUS_RUNNING 运行中
COMPUTE_RESOURCE_STATUS_STOPPED 已停止
COMPUTE_RESOURCE_STATUS_STOPPING 停止中
COMPUTE_RESOURCE_STATUS_STARTING 启动中
COMPUTE_RESOURCE_STATUS_UPDATING 更新中
COMPUTE_RESOURCE_STATUS_DELETING 删除中
COMPUTE_RESOURCE_STATUS_DELETED 已删除
COMPUTE_RESOURCE_STATUS_FAILED  失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupStatus() const;

                    /**
                     * 设置资源组状态
COMPUTE_RESOURCE_STATUS_UNSPECIFIED 未指定
COMPUTE_RESOURCE_STATUS_PENDING_CREATE 待创建
COMPUTE_RESOURCE_STATUS_CREATING 创建中
COMPUTE_RESOURCE_STATUS_RUNNING 运行中
COMPUTE_RESOURCE_STATUS_STOPPED 已停止
COMPUTE_RESOURCE_STATUS_STOPPING 停止中
COMPUTE_RESOURCE_STATUS_STARTING 启动中
COMPUTE_RESOURCE_STATUS_UPDATING 更新中
COMPUTE_RESOURCE_STATUS_DELETING 删除中
COMPUTE_RESOURCE_STATUS_DELETED 已删除
COMPUTE_RESOURCE_STATUS_FAILED  失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupStatus 资源组状态
COMPUTE_RESOURCE_STATUS_UNSPECIFIED 未指定
COMPUTE_RESOURCE_STATUS_PENDING_CREATE 待创建
COMPUTE_RESOURCE_STATUS_CREATING 创建中
COMPUTE_RESOURCE_STATUS_RUNNING 运行中
COMPUTE_RESOURCE_STATUS_STOPPED 已停止
COMPUTE_RESOURCE_STATUS_STOPPING 停止中
COMPUTE_RESOURCE_STATUS_STARTING 启动中
COMPUTE_RESOURCE_STATUS_UPDATING 更新中
COMPUTE_RESOURCE_STATUS_DELETING 删除中
COMPUTE_RESOURCE_STATUS_DELETED 已删除
COMPUTE_RESOURCE_STATUS_FAILED  失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupStatus(const std::string& _resourceGroupStatus);

                    /**
                     * 判断参数 ResourceGroupStatus 是否已赋值
                     * @return ResourceGroupStatus 是否已赋值
                     * 
                     */
                    bool ResourceGroupStatusHasBeenSet() const;

                private:

                    /**
                     * 资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 资源组状态
COMPUTE_RESOURCE_STATUS_UNSPECIFIED 未指定
COMPUTE_RESOURCE_STATUS_PENDING_CREATE 待创建
COMPUTE_RESOURCE_STATUS_CREATING 创建中
COMPUTE_RESOURCE_STATUS_RUNNING 运行中
COMPUTE_RESOURCE_STATUS_STOPPED 已停止
COMPUTE_RESOURCE_STATUS_STOPPING 停止中
COMPUTE_RESOURCE_STATUS_STARTING 启动中
COMPUTE_RESOURCE_STATUS_UPDATING 更新中
COMPUTE_RESOURCE_STATUS_DELETING 删除中
COMPUTE_RESOURCE_STATUS_DELETED 已删除
COMPUTE_RESOURCE_STATUS_FAILED  失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupStatus;
                    bool m_resourceGroupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RESOURCEGROUPINFO_H_
