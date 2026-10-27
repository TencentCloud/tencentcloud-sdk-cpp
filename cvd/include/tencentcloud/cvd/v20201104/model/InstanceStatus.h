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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_INSTANCESTATUS_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_INSTANCESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 实例状态
                */
                class InstanceStatus : public AbstractModel
                {
                public:
                    InstanceStatus();
                    ~InstanceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例状态
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中
DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm测资源已经不存在了
FAILED：表示资源创建失败.这个是业务层面的状态
ROLLBACKING：表示机器正在回滚中
RESETTING：表示机器正在重置中
USING：表示机器正在使用中
                     * @return Status 实例状态
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中
DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm测资源已经不存在了
FAILED：表示资源创建失败.这个是业务层面的状态
ROLLBACKING：表示机器正在回滚中
RESETTING：表示机器正在重置中
USING：表示机器正在使用中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中
DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm测资源已经不存在了
FAILED：表示资源创建失败.这个是业务层面的状态
ROLLBACKING：表示机器正在回滚中
RESETTING：表示机器正在重置中
USING：表示机器正在使用中
                     * @param _status 实例状态
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中
DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm测资源已经不存在了
FAILED：表示资源创建失败.这个是业务层面的状态
ROLLBACKING：表示机器正在回滚中
RESETTING：表示机器正在重置中
USING：表示机器正在使用中
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
                     * 获取只有在Status为RUNNING时候，当前值才有意义
取值范围：
0:Unknown
1:Connected 
2:Disconnected 
3:Terminated
4:PreparingSession
5:Active
6:Reconnecting
7:NonBrokeredSession
8:Other
9:Pending
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionState 只有在Status为RUNNING时候，当前值才有意义
取值范围：
0:Unknown
1:Connected 
2:Disconnected 
3:Terminated
4:PreparingSession
5:Active
6:Reconnecting
7:NonBrokeredSession
8:Other
9:Pending
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSessionState() const;

                    /**
                     * 设置只有在Status为RUNNING时候，当前值才有意义
取值范围：
0:Unknown
1:Connected 
2:Disconnected 
3:Terminated
4:PreparingSession
5:Active
6:Reconnecting
7:NonBrokeredSession
8:Other
9:Pending
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionState 只有在Status为RUNNING时候，当前值才有意义
取值范围：
0:Unknown
1:Connected 
2:Disconnected 
3:Terminated
4:PreparingSession
5:Active
6:Reconnecting
7:NonBrokeredSession
8:Other
9:Pending
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionState(const int64_t& _sessionState);

                    /**
                     * 判断参数 SessionState 是否已赋值
                     * @return SessionState 是否已赋值
                     * 
                     */
                    bool SessionStateHasBeenSet() const;

                    /**
                     * 获取此字段只有在Status为USING时，才有效。
字段意义：表示桌面当前session空闲时间（客户没有鼠标，键盘等操作），单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdleSeconds 此字段只有在Status为USING时，才有效。
字段意义：表示桌面当前session空闲时间（客户没有鼠标，键盘等操作），单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetIdleSeconds() const;

                    /**
                     * 设置此字段只有在Status为USING时，才有效。
字段意义：表示桌面当前session空闲时间（客户没有鼠标，键盘等操作），单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idleSeconds 此字段只有在Status为USING时，才有效。
字段意义：表示桌面当前session空闲时间（客户没有鼠标，键盘等操作），单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdleSeconds(const double& _idleSeconds);

                    /**
                     * 判断参数 IdleSeconds 是否已赋值
                     * @return IdleSeconds 是否已赋值
                     * 
                     */
                    bool IdleSecondsHasBeenSet() const;

                    /**
                     * 获取当前状态改变的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusChangeTime 当前状态改变的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatusChangeTime() const;

                    /**
                     * 设置当前状态改变的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusChangeTime 当前状态改变的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusChangeTime(const int64_t& _statusChangeTime);

                    /**
                     * 判断参数 StatusChangeTime 是否已赋值
                     * @return StatusChangeTime 是否已赋值
                     * 
                     */
                    bool StatusChangeTimeHasBeenSet() const;

                    /**
                     * 获取实例最近一次操作类型
                     * @return LatestOperation 实例最近一次操作类型
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置实例最近一次操作类型
                     * @param _latestOperation 实例最近一次操作类型
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取实例最近一次操作状态
                     * @return LatestOperationState 实例最近一次操作状态
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置实例最近一次操作状态
                     * @param _latestOperationState 实例最近一次操作状态
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例状态
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关机
STARTING：表示开机中
STOPPING：表示关机中
REBOOTING：表示重启中
SHUTDOWN：表示停止待销毁
TERMINATING：表示销毁中
DELETED：表示资源已经销毁，这个状态是业务层面的状态，cvm如果销毁了，在cvm测资源已经不存在了
FAILED：表示资源创建失败.这个是业务层面的状态
ROLLBACKING：表示机器正在回滚中
RESETTING：表示机器正在重置中
USING：表示机器正在使用中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 只有在Status为RUNNING时候，当前值才有意义
取值范围：
0:Unknown
1:Connected 
2:Disconnected 
3:Terminated
4:PreparingSession
5:Active
6:Reconnecting
7:NonBrokeredSession
8:Other
9:Pending
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sessionState;
                    bool m_sessionStateHasBeenSet;

                    /**
                     * 此字段只有在Status为USING时，才有效。
字段意义：表示桌面当前session空闲时间（客户没有鼠标，键盘等操作），单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_idleSeconds;
                    bool m_idleSecondsHasBeenSet;

                    /**
                     * 当前状态改变的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statusChangeTime;
                    bool m_statusChangeTimeHasBeenSet;

                    /**
                     * 实例最近一次操作类型
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 实例最近一次操作状态
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_INSTANCESTATUS_H_
