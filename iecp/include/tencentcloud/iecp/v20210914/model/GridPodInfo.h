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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_GRIDPODINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_GRIDPODINFO_H_

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
                * GridPod信息
                */
                class GridPodInfo : public AbstractModel
                {
                public:
                    GridPodInfo();
                    ~GridPodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod名称
                     * @return Name Pod名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod名称
                     * @param _name Pod名称
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
                     * 获取命名空间
                     * @return NameSpace 命名空间
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置命名空间
                     * @param _nameSpace 命名空间
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取状态(Pending｜Running｜Succeeded｜Failed｜Unknown)
                     * @return Status 状态(Pending｜Running｜Succeeded｜Failed｜Unknown)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态(Pending｜Running｜Succeeded｜Failed｜Unknown)
                     * @param _status 状态(Pending｜Running｜Succeeded｜Failed｜Unknown)
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
                     * 获取节点名
                     * @return NodeName 节点名
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名
                     * @param _nodeName 节点名
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点IP
                     * @return NodeIP 节点IP
                     * 
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 设置节点IP
                     * @param _nodeIP 节点IP
                     * 
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取Pod的IP
                     * @return PodIP Pod的IP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod的IP
                     * @param _podIP Pod的IP
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 启动时间
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
                     * 获取运行时长（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunSec 运行时长（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunSec() const;

                    /**
                     * 设置运行时长（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runSec 运行时长（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunSec(const int64_t& _runSec);

                    /**
                     * 判断参数 RunSec 是否已赋值
                     * @return RunSec 是否已赋值
                     * 
                     */
                    bool RunSecHasBeenSet() const;

                    /**
                     * 获取重启次数
                     * @return RestartCount 重启次数
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
                     * @param _restartCount 重启次数
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取集群名称ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterID 集群名称ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群名称ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterID 集群名称ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                private:

                    /**
                     * Pod名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 状态(Pending｜Running｜Succeeded｜Failed｜Unknown)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点名
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点IP
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                    /**
                     * Pod的IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行时长（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runSec;
                    bool m_runSecHasBeenSet;

                    /**
                     * 重启次数
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 集群名称ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_GRIDPODINFO_H_
