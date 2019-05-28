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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVCREATEINFO_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EnvData.h>
#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>
#include <tencentcloud/batch/v20170312/model/InputMapping.h>
#include <tencentcloud/batch/v20170312/model/Authentication.h>
#include <tencentcloud/batch/v20170312/model/Notification.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算环境创建信息。
                */
                class ComputeEnvCreateInfo : public AbstractModel
                {
                public:
                    ComputeEnvCreateInfo();
                    ~ComputeEnvCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算环境 ID
                     * @return EnvId 计算环境 ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境 ID
                     * @param EnvId 计算环境 ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取计算环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvName 计算环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置计算环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvName 计算环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取计算环境描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvDescription 计算环境描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnvDescription() const;

                    /**
                     * 设置计算环境描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvDescription 计算环境描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvDescription(const std::string& _envDescription);

                    /**
                     * 判断参数 EnvDescription 是否已赋值
                     * @return EnvDescription 是否已赋值
                     */
                    bool EnvDescriptionHasBeenSet() const;

                    /**
                     * 获取计算环境类型，仅支持“MANAGED”类型
                     * @return EnvType 计算环境类型，仅支持“MANAGED”类型
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置计算环境类型，仅支持“MANAGED”类型
                     * @param EnvType 计算环境类型，仅支持“MANAGED”类型
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取计算环境参数
                     * @return EnvData 计算环境参数
                     */
                    EnvData GetEnvData() const;

                    /**
                     * 设置计算环境参数
                     * @param EnvData 计算环境参数
                     */
                    void SetEnvData(const EnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     */
                    bool EnvDataHasBeenSet() const;

                    /**
                     * 获取数据盘挂载选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountDataDisks 数据盘挂载选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MountDataDisk> GetMountDataDisks() const;

                    /**
                     * 设置数据盘挂载选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MountDataDisks 数据盘挂载选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMountDataDisks(const std::vector<MountDataDisk>& _mountDataDisks);

                    /**
                     * 判断参数 MountDataDisks 是否已赋值
                     * @return MountDataDisks 是否已赋值
                     */
                    bool MountDataDisksHasBeenSet() const;

                    /**
                     * 获取输入映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputMappings 输入映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InputMapping> GetInputMappings() const;

                    /**
                     * 设置输入映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InputMappings 输入映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInputMappings(const std::vector<InputMapping>& _inputMappings);

                    /**
                     * 判断参数 InputMappings 是否已赋值
                     * @return InputMappings 是否已赋值
                     */
                    bool InputMappingsHasBeenSet() const;

                    /**
                     * 获取授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentications 授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Authentication> GetAuthentications() const;

                    /**
                     * 设置授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Authentications 授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthentications(const std::vector<Authentication>& _authentications);

                    /**
                     * 判断参数 Authentications 是否已赋值
                     * @return Authentications 是否已赋值
                     */
                    bool AuthenticationsHasBeenSet() const;

                    /**
                     * 获取通知信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notifications 通知信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Notification> GetNotifications() const;

                    /**
                     * 设置通知信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Notifications 通知信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotifications(const std::vector<Notification>& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取计算节点期望个数
                     * @return DesiredComputeNodeCount 计算节点期望个数
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置计算节点期望个数
                     * @param DesiredComputeNodeCount 计算节点期望个数
                     */
                    void SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                private:

                    /**
                     * 计算环境 ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 计算环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 计算环境描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envDescription;
                    bool m_envDescriptionHasBeenSet;

                    /**
                     * 计算环境类型，仅支持“MANAGED”类型
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 计算环境参数
                     */
                    EnvData m_envData;
                    bool m_envDataHasBeenSet;

                    /**
                     * 数据盘挂载选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MountDataDisk> m_mountDataDisks;
                    bool m_mountDataDisksHasBeenSet;

                    /**
                     * 输入映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InputMapping> m_inputMappings;
                    bool m_inputMappingsHasBeenSet;

                    /**
                     * 授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Authentication> m_authentications;
                    bool m_authenticationsHasBeenSet;

                    /**
                     * 通知信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Notification> m_notifications;
                    bool m_notificationsHasBeenSet;

                    /**
                     * 计算节点期望个数
                     */
                    uint64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVCREATEINFO_H_
