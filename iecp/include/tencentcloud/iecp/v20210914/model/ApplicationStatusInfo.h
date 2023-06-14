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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONSTATUSINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationDeployMode.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 应用状态
                */
                class ApplicationStatusInfo : public AbstractModel
                {
                public:
                    ApplicationStatusInfo();
                    ~ApplicationStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 应用名称
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
                     * 获取应用版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 应用版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置应用版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 应用版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取应用状态(1:待部署 2:部署中 3:运行中 4:待更新 5:更新中 6:待删除 7:删除中 8:已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 应用状态(1:待部署 2:部署中 3:运行中 4:待更新 5:更新中 6:待删除 7:删除中 8:已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置应用状态(1:待部署 2:部署中 3:运行中 4:待更新 5:更新中 6:待删除 7:删除中 8:已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 应用状态(1:待部署 2:部署中 3:运行中 4:待更新 5:更新中 6:待删除 7:删除中 8:已删除
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManageUrl 管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManageUrl() const;

                    /**
                     * 设置管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manageUrl 管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManageUrl(const std::string& _manageUrl);

                    /**
                     * 判断参数 ManageUrl 是否已赋值
                     * @return ManageUrl 是否已赋值
                     * 
                     */
                    bool ManageUrlHasBeenSet() const;

                    /**
                     * 获取负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkloadKind 负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkloadKind() const;

                    /**
                     * 设置负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workloadKind 负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkloadKind(const std::string& _workloadKind);

                    /**
                     * 判断参数 WorkloadKind 是否已赋值
                     * @return WorkloadKind 是否已赋值
                     * 
                     */
                    bool WorkloadKindHasBeenSet() const;

                    /**
                     * 获取应用部署模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployMode 应用部署模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ApplicationDeployMode GetDeployMode() const;

                    /**
                     * 设置应用部署模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployMode 应用部署模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployMode(const ApplicationDeployMode& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取期望Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 期望Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置期望Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 期望Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取运行Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableReplicas 运行Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvailableReplicas() const;

                    /**
                     * 设置运行Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableReplicas 运行Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableReplicas(const int64_t& _availableReplicas);

                    /**
                     * 判断参数 AvailableReplicas 是否已赋值
                     * @return AvailableReplicas 是否已赋值
                     * 
                     */
                    bool AvailableReplicasHasBeenSet() const;

                private:

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 应用状态(1:待部署 2:部署中 3:运行中 4:待更新 5:更新中 6:待删除 7:删除中 8:已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manageUrl;
                    bool m_manageUrlHasBeenSet;

                    /**
                     * 负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workloadKind;
                    bool m_workloadKindHasBeenSet;

                    /**
                     * 应用部署模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplicationDeployMode m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 期望Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 运行Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_availableReplicas;
                    bool m_availableReplicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONSTATUSINFO_H_
