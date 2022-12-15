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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTOPERATIONLOG_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTOPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 快照操作日志，已废弃。
                */
                class SnapshotOperationLog : public AbstractModel
                {
                public:
                    SnapshotOperationLog();
                    ~SnapshotOperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     * @return OperationState 操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     */
                    std::string GetOperationState() const;

                    /**
                     * 设置操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     * @param OperationState 操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     */
                    void SetOperationState(const std::string& _operationState);

                    /**
                     * 判断参数 OperationState 是否已赋值
                     * @return OperationState 是否已赋值
                     */
                    bool OperationStateHasBeenSet() const;

                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param StartTime 开始时间。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取操作者的UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作者的UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者的UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Operator 操作者的UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作的快照ID。
                     * @return SnapshotId 操作的快照ID。
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置操作的快照ID。
                     * @param SnapshotId 操作的快照ID。
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取操作类型。取值范围：
SNAP_OPERATION_DELETE：删除快照
SNAP_OPERATION_ROLLBACK：回滚快照
SNAP_OPERATION_MODIFY：修改快照属性
SNAP_OPERATION_CREATE：创建快照
SNAP_OPERATION_COPY：跨地域复制快照
ASP_OPERATION_CREATE_SNAP：由定期快照策略创建快照
ASP_OPERATION_DELETE_SNAP：由定期快照策略删除快照
                     * @return Operation 操作类型。取值范围：
SNAP_OPERATION_DELETE：删除快照
SNAP_OPERATION_ROLLBACK：回滚快照
SNAP_OPERATION_MODIFY：修改快照属性
SNAP_OPERATION_CREATE：创建快照
SNAP_OPERATION_COPY：跨地域复制快照
ASP_OPERATION_CREATE_SNAP：由定期快照策略创建快照
ASP_OPERATION_DELETE_SNAP：由定期快照策略删除快照
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型。取值范围：
SNAP_OPERATION_DELETE：删除快照
SNAP_OPERATION_ROLLBACK：回滚快照
SNAP_OPERATION_MODIFY：修改快照属性
SNAP_OPERATION_CREATE：创建快照
SNAP_OPERATION_COPY：跨地域复制快照
ASP_OPERATION_CREATE_SNAP：由定期快照策略创建快照
ASP_OPERATION_DELETE_SNAP：由定期快照策略删除快照
                     * @param Operation 操作类型。取值范围：
SNAP_OPERATION_DELETE：删除快照
SNAP_OPERATION_ROLLBACK：回滚快照
SNAP_OPERATION_MODIFY：修改快照属性
SNAP_OPERATION_CREATE：创建快照
SNAP_OPERATION_COPY：跨地域复制快照
ASP_OPERATION_CREATE_SNAP：由定期快照策略创建快照
ASP_OPERATION_DELETE_SNAP：由定期快照策略删除快照
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param EndTime 结束时间。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 操作的状态。取值范围：
SUCCESS :表示操作成功 
FAILED :表示操作失败 
PROCESSING :表示操作中。
                     */
                    std::string m_operationState;
                    bool m_operationStateHasBeenSet;

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 操作者的UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作的快照ID。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 操作类型。取值范围：
SNAP_OPERATION_DELETE：删除快照
SNAP_OPERATION_ROLLBACK：回滚快照
SNAP_OPERATION_MODIFY：修改快照属性
SNAP_OPERATION_CREATE：创建快照
SNAP_OPERATION_COPY：跨地域复制快照
ASP_OPERATION_CREATE_SNAP：由定期快照策略创建快照
ASP_OPERATION_DELETE_SNAP：由定期快照策略删除快照
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTOPERATIONLOG_H_
