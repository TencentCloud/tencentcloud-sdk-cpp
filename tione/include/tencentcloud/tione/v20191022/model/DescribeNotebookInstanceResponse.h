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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCERESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>
#include <tencentcloud/tione/v20191022/model/ClsConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookInstance返回参数结构体
                */
                class DescribeNotebookInstanceResponse : public AbstractModel
                {
                public:
                    DescribeNotebookInstanceResponse();
                    ~DescribeNotebookInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
                     * @return NotebookInstanceName Notebook实例名称
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     * 
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取Notebook算力资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType Notebook算力资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取角色的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleArn 角色的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取外网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DirectInternetAccess 外网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDirectInternetAccess() const;

                    /**
                     * 判断参数 DirectInternetAccess 是否已赋值
                     * @return DirectInternetAccess 是否已赋值
                     * 
                     */
                    bool DirectInternetAccessHasBeenSet() const;

                    /**
                     * 获取Root用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootAccess Root用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRootAccess() const;

                    /**
                     * 判断参数 RootAccess 是否已赋值
                     * @return RootAccess 是否已赋值
                     * 
                     */
                    bool RootAccessHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取数据卷大小(GB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeSizeInGB 数据卷大小(GB)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     * 
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                    /**
                     * 获取创建失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason 创建失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取Notebook实例创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime Notebook实例创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Notebook实例最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedTime Notebook实例最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Notebook实例日志链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogUrl Notebook实例日志链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogUrl() const;

                    /**
                     * 判断参数 LogUrl 是否已赋值
                     * @return LogUrl 是否已赋值
                     * 
                     */
                    bool LogUrlHasBeenSet() const;

                    /**
                     * 获取Notebook实例状态

Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookInstanceStatus Notebook实例状态

Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotebookInstanceStatus() const;

                    /**
                     * 判断参数 NotebookInstanceStatus 是否已赋值
                     * @return NotebookInstanceStatus 是否已赋值
                     * 
                     */
                    bool NotebookInstanceStatusHasBeenSet() const;

                    /**
                     * 获取Notebook实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId Notebook实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取notebook生命周期脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleScriptsName notebook生命周期脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifecycleScriptsName() const;

                    /**
                     * 判断参数 LifecycleScriptsName 是否已赋值
                     * @return LifecycleScriptsName 是否已赋值
                     * 
                     */
                    bool LifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultCodeRepository() const;

                    /**
                     * 判断参数 DefaultCodeRepository 是否已赋值
                     * @return DefaultCodeRepository 是否已赋值
                     * 
                     */
                    bool DefaultCodeRepositoryHasBeenSet() const;

                    /**
                     * 获取其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepositories() const;

                    /**
                     * 判断参数 AdditionalCodeRepositories 是否已赋值
                     * @return AdditionalCodeRepositories 是否已赋值
                     * 
                     */
                    bool AdditionalCodeRepositoriesHasBeenSet() const;

                    /**
                     * 获取是否开启CLS日志服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsAccess 是否开启CLS日志服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClsAccess() const;

                    /**
                     * 判断参数 ClsAccess 是否已赋值
                     * @return ClsAccess 是否已赋值
                     * 
                     */
                    bool ClsAccessHasBeenSet() const;

                    /**
                     * 获取是否预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prepay 是否预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPrepay() const;

                    /**
                     * 判断参数 Prepay 是否已赋值
                     * @return Prepay 是否已赋值
                     * 
                     */
                    bool PrepayHasBeenSet() const;

                    /**
                     * 获取实例运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deadline 实例运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppingCondition 自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 判断参数 StoppingCondition 是否已赋值
                     * @return StoppingCondition 是否已赋值
                     * 
                     */
                    bool StoppingConditionHasBeenSet() const;

                    /**
                     * 获取Cls配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsConfig Cls配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClsConfig GetClsConfig() const;

                    /**
                     * 判断参数 ClsConfig 是否已赋值
                     * @return ClsConfig 是否已赋值
                     * 
                     */
                    bool ClsConfigHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * Notebook算力资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 角色的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 外网访问权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * Root用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据卷大小(GB)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 创建失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * Notebook实例创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Notebook实例最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * Notebook实例日志链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logUrl;
                    bool m_logUrlHasBeenSet;

                    /**
                     * Notebook实例状态

Pending: 创建中
Inservice: 运行中
Stopping: 停止中
Stopped: 已停止
Failed: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookInstanceStatus;
                    bool m_notebookInstanceStatusHasBeenSet;

                    /**
                     * Notebook实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * notebook生命周期脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifecycleScriptsName;
                    bool m_lifecycleScriptsNameHasBeenSet;

                    /**
                     * 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultCodeRepository;
                    bool m_defaultCodeRepositoryHasBeenSet;

                    /**
                     * 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_additionalCodeRepositories;
                    bool m_additionalCodeRepositoriesHasBeenSet;

                    /**
                     * 是否开启CLS日志服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clsAccess;
                    bool m_clsAccessHasBeenSet;

                    /**
                     * 是否预付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_prepay;
                    bool m_prepayHasBeenSet;

                    /**
                     * 实例运行截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 自动停止配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                    /**
                     * Cls配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClsConfig m_clsConfig;
                    bool m_clsConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCERESPONSE_H_
