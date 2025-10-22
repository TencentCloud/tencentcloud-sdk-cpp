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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DLCCLUSTERINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DLCCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * dlc集群信息
                */
                class DLCClusterInfo : public AbstractModel
                {
                public:
                    DLCClusterInfo();
                    ~DLCClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dlc资源名称（需要添加角色Uin到dlc中，否则可能获取不到资源）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeResources dlc资源名称（需要添加角色Uin到dlc中，否则可能获取不到资源）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetComputeResources() const;

                    /**
                     * 设置dlc资源名称（需要添加角色Uin到dlc中，否则可能获取不到资源）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeResources dlc资源名称（需要添加角色Uin到dlc中，否则可能获取不到资源）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeResources(const std::vector<std::string>& _computeResources);

                    /**
                     * 判断参数 ComputeResources 是否已赋值
                     * @return ComputeResources 是否已赋值
                     * 
                     */
                    bool ComputeResourcesHasBeenSet() const;

                    /**
                     * 获取dlc地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region dlc地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置dlc地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region dlc地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取指定DLC集群的默认数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultDatabase 指定DLC集群的默认数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultDatabase() const;

                    /**
                     * 设置指定DLC集群的默认数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultDatabase 指定DLC集群的默认数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultDatabase(const std::string& _defaultDatabase);

                    /**
                     * 判断参数 DefaultDatabase 是否已赋值
                     * @return DefaultDatabase 是否已赋值
                     * 
                     */
                    bool DefaultDatabaseHasBeenSet() const;

                    /**
                     * 获取集群配置标记（ 仅对标准模式的项目生效并且标准模式必填），枚举值：
- Prod  (生产环境)
- Dev  (开发环境)
                     * @return StandardModeEnvTag 集群配置标记（ 仅对标准模式的项目生效并且标准模式必填），枚举值：
- Prod  (生产环境)
- Dev  (开发环境)
                     * 
                     */
                    std::string GetStandardModeEnvTag() const;

                    /**
                     * 设置集群配置标记（ 仅对标准模式的项目生效并且标准模式必填），枚举值：
- Prod  (生产环境)
- Dev  (开发环境)
                     * @param _standardModeEnvTag 集群配置标记（ 仅对标准模式的项目生效并且标准模式必填），枚举值：
- Prod  (生产环境)
- Dev  (开发环境)
                     * 
                     */
                    void SetStandardModeEnvTag(const std::string& _standardModeEnvTag);

                    /**
                     * 判断参数 StandardModeEnvTag 是否已赋值
                     * @return StandardModeEnvTag 是否已赋值
                     * 
                     */
                    bool StandardModeEnvTagHasBeenSet() const;

                    /**
                     * 获取访问账号（ 仅对标准模式的项目生效并且标准模式必填），用于提交dlc任务的账号
建议使用指定子账号，给子账号设置对应库表的权限；任务负责人模式在负责人离职后容易造成任务失败；主账号模式在多个项目权限不同的情况下不易做权限控制。

枚举值：
- TASK_RUNNER （任务负责人）
- OWNER （主账号模式）
- SUB （子账号模式）
                     * @return AccessAccount 访问账号（ 仅对标准模式的项目生效并且标准模式必填），用于提交dlc任务的账号
建议使用指定子账号，给子账号设置对应库表的权限；任务负责人模式在负责人离职后容易造成任务失败；主账号模式在多个项目权限不同的情况下不易做权限控制。

枚举值：
- TASK_RUNNER （任务负责人）
- OWNER （主账号模式）
- SUB （子账号模式）
                     * 
                     */
                    std::string GetAccessAccount() const;

                    /**
                     * 设置访问账号（ 仅对标准模式的项目生效并且标准模式必填），用于提交dlc任务的账号
建议使用指定子账号，给子账号设置对应库表的权限；任务负责人模式在负责人离职后容易造成任务失败；主账号模式在多个项目权限不同的情况下不易做权限控制。

枚举值：
- TASK_RUNNER （任务负责人）
- OWNER （主账号模式）
- SUB （子账号模式）
                     * @param _accessAccount 访问账号（ 仅对标准模式的项目生效并且标准模式必填），用于提交dlc任务的账号
建议使用指定子账号，给子账号设置对应库表的权限；任务负责人模式在负责人离职后容易造成任务失败；主账号模式在多个项目权限不同的情况下不易做权限控制。

枚举值：
- TASK_RUNNER （任务负责人）
- OWNER （主账号模式）
- SUB （子账号模式）
                     * 
                     */
                    void SetAccessAccount(const std::string& _accessAccount);

                    /**
                     * 判断参数 AccessAccount 是否已赋值
                     * @return AccessAccount 是否已赋值
                     * 
                     */
                    bool AccessAccountHasBeenSet() const;

                    /**
                     * 获取子账号id（ 仅对标准模式的项目生效），AccessAccount为子账号模式时，需要指定子账号的id信息，其他模式不需要指定
                     * @return SubAccountUin 子账号id（ 仅对标准模式的项目生效），AccessAccount为子账号模式时，需要指定子账号的id信息，其他模式不需要指定
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置子账号id（ 仅对标准模式的项目生效），AccessAccount为子账号模式时，需要指定子账号的id信息，其他模式不需要指定
                     * @param _subAccountUin 子账号id（ 仅对标准模式的项目生效），AccessAccount为子账号模式时，需要指定子账号的id信息，其他模式不需要指定
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * dlc资源名称（需要添加角色Uin到dlc中，否则可能获取不到资源）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_computeResources;
                    bool m_computeResourcesHasBeenSet;

                    /**
                     * dlc地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 指定DLC集群的默认数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultDatabase;
                    bool m_defaultDatabaseHasBeenSet;

                    /**
                     * 集群配置标记（ 仅对标准模式的项目生效并且标准模式必填），枚举值：
- Prod  (生产环境)
- Dev  (开发环境)
                     */
                    std::string m_standardModeEnvTag;
                    bool m_standardModeEnvTagHasBeenSet;

                    /**
                     * 访问账号（ 仅对标准模式的项目生效并且标准模式必填），用于提交dlc任务的账号
建议使用指定子账号，给子账号设置对应库表的权限；任务负责人模式在负责人离职后容易造成任务失败；主账号模式在多个项目权限不同的情况下不易做权限控制。

枚举值：
- TASK_RUNNER （任务负责人）
- OWNER （主账号模式）
- SUB （子账号模式）
                     */
                    std::string m_accessAccount;
                    bool m_accessAccountHasBeenSet;

                    /**
                     * 子账号id（ 仅对标准模式的项目生效），AccessAccount为子账号模式时，需要指定子账号的id信息，其他模式不需要指定
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DLCCLUSTERINFO_H_
