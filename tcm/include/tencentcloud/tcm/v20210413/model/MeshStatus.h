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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_MESHSTATUS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_MESHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/PrometheusStatus.h>
#include <tencentcloud/tcm/v20210413/model/ActiveOperation.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Mesh当前状态
                */
                class MeshStatus : public AbstractModel
                {
                public:
                    MeshStatus();
                    ~MeshStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务数量
                     * @return ServiceCount 服务数量
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置服务数量
                     * @param _serviceCount 服务数量
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取灰度升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanaryVersion 灰度升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCanaryVersion() const;

                    /**
                     * 设置灰度升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canaryVersion 灰度升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanaryVersion(const std::string& _canaryVersion);

                    /**
                     * 判断参数 CanaryVersion 是否已赋值
                     * @return CanaryVersion 是否已赋值
                     * 
                     */
                    bool CanaryVersionHasBeenSet() const;

                    /**
                     * 获取已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prometheus 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusStatus> GetPrometheus() const;

                    /**
                     * 设置已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prometheus 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrometheus(const std::vector<PrometheusStatus>& _prometheus);

                    /**
                     * 判断参数 Prometheus 是否已赋值
                     * @return Prometheus 是否已赋值
                     * 
                     */
                    bool PrometheusHasBeenSet() const;

                    /**
                     * 获取状态附带信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateMessage 状态附带信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateMessage() const;

                    /**
                     * 设置状态附带信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateMessage 状态附带信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateMessage(const std::string& _stateMessage);

                    /**
                     * 判断参数 StateMessage 是否已赋值
                     * @return StateMessage 是否已赋值
                     * 
                     */
                    bool StateMessageHasBeenSet() const;

                    /**
                     * 获取正在执行的异步操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveOperationList 正在执行的异步操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ActiveOperation> GetActiveOperationList() const;

                    /**
                     * 设置正在执行的异步操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeOperationList 正在执行的异步操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveOperationList(const std::vector<ActiveOperation>& _activeOperationList);

                    /**
                     * 判断参数 ActiveOperationList 是否已赋值
                     * @return ActiveOperationList 是否已赋值
                     * 
                     */
                    bool ActiveOperationListHasBeenSet() const;

                    /**
                     * 获取获取TPS信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TPS 获取TPS信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrometheusStatus GetTPS() const;

                    /**
                     * 设置获取TPS信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tPS 获取TPS信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTPS(const PrometheusStatus& _tPS);

                    /**
                     * 判断参数 TPS 是否已赋值
                     * @return TPS 是否已赋值
                     * 
                     */
                    bool TPSHasBeenSet() const;

                private:

                    /**
                     * 服务数量
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 灰度升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_canaryVersion;
                    bool m_canaryVersionHasBeenSet;

                    /**
                     * 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusStatus> m_prometheus;
                    bool m_prometheusHasBeenSet;

                    /**
                     * 状态附带信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateMessage;
                    bool m_stateMessageHasBeenSet;

                    /**
                     * 正在执行的异步操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ActiveOperation> m_activeOperationList;
                    bool m_activeOperationListHasBeenSet;

                    /**
                     * 获取TPS信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrometheusStatus m_tPS;
                    bool m_tPSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_MESHSTATUS_H_
