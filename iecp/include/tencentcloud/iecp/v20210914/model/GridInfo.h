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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_GRIDINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_GRIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * Grid信息
                */
                class GridInfo : public AbstractModel
                {
                public:
                    GridInfo();
                    ~GridInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DeployGridId
                     * @return Id DeployGridId
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置DeployGridId
                     * @param _id DeployGridId
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取Key
                     * @return GridUniqKey Key
                     * 
                     */
                    std::string GetGridUniqKey() const;

                    /**
                     * 设置Key
                     * @param _gridUniqKey Key
                     * 
                     */
                    void SetGridUniqKey(const std::string& _gridUniqKey);

                    /**
                     * 判断参数 GridUniqKey 是否已赋值
                     * @return GridUniqKey 是否已赋值
                     * 
                     */
                    bool GridUniqKeyHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取工作负载类型
                     * @return WorkloadKind 工作负载类型
                     * 
                     */
                    std::string GetWorkloadKind() const;

                    /**
                     * 设置工作负载类型
                     * @param _workloadKind 工作负载类型
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
                     * 获取启动时间
                     * @return StartTime 启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param _startTime 启动时间
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
                     * 获取副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 副本数
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
                     * 获取创建人
                     * @return Publisher 创建人
                     * 
                     */
                    std::string GetPublisher() const;

                    /**
                     * 设置创建人
                     * @param _publisher 创建人
                     * 
                     */
                    void SetPublisher(const std::string& _publisher);

                    /**
                     * 判断参数 Publisher 是否已赋值
                     * @return Publisher 是否已赋值
                     * 
                     */
                    bool PublisherHasBeenSet() const;

                    /**
                     * 获取版本信息
                     * @return Version 版本信息
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本信息
                     * @param _version 版本信息
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * DeployGridId
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Key
                     */
                    std::string m_gridUniqKey;
                    bool m_gridUniqKeyHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作负载类型
                     */
                    std::string m_workloadKind;
                    bool m_workloadKindHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_publisher;
                    bool m_publisherHasBeenSet;

                    /**
                     * 版本信息
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_GRIDINFO_H_
