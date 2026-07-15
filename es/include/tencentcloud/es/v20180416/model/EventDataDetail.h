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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_EVENTDATADETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_EVENTDATADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 事件详情
                */
                class EventDataDetail : public AbstractModel
                {
                public:
                    EventDataDetail();
                    ~EventDataDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件名称</p>
                     * @return EventName <p>事件名称</p>
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置<p>事件名称</p>
                     * @param _eventName <p>事件名称</p>
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取<p>事件重要程度;0: 一般  1: 重要</p>
                     * @return EventImportance <p>事件重要程度;0: 一般  1: 重要</p>
                     * 
                     */
                    int64_t GetEventImportance() const;

                    /**
                     * 设置<p>事件重要程度;0: 一般  1: 重要</p>
                     * @param _eventImportance <p>事件重要程度;0: 一般  1: 重要</p>
                     * 
                     */
                    void SetEventImportance(const int64_t& _eventImportance);

                    /**
                     * 判断参数 EventImportance 是否已赋值
                     * @return EventImportance 是否已赋值
                     * 
                     */
                    bool EventImportanceHasBeenSet() const;

                    /**
                     * 获取<p>事件内容</p>
                     * @return EventContent <p>事件内容</p>
                     * 
                     */
                    std::string GetEventContent() const;

                    /**
                     * 设置<p>事件内容</p>
                     * @param _eventContent <p>事件内容</p>
                     * 
                     */
                    void SetEventContent(const std::string& _eventContent);

                    /**
                     * 判断参数 EventContent 是否已赋值
                     * @return EventContent 是否已赋值
                     * 
                     */
                    bool EventContentHasBeenSet() const;

                    /**
                     * 获取<p>ES集群id</p>
                     * @return InstanceId <p>ES集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES集群id</p>
                     * @param _instanceId <p>ES集群id</p>
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
                     * 获取<p>集群名称</p>
                     * @return InstanceName <p>集群名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _instanceName <p>集群名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>节点Id</p>
                     * @return NodeId <p>节点Id</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点Id</p>
                     * @param _nodeId <p>节点Id</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return NodeRole <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeRole <p>节点类型</p>
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取<p>事件状态,0:待处理，1:处理中，2:处理完成</p>
                     * @return EventStatus <p>事件状态,0:待处理，1:处理中，2:处理完成</p>
                     * 
                     */
                    int64_t GetEventStatus() const;

                    /**
                     * 设置<p>事件状态,0:待处理，1:处理中，2:处理完成</p>
                     * @param _eventStatus <p>事件状态,0:待处理，1:处理中，2:处理完成</p>
                     * 
                     */
                    void SetEventStatus(const int64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取<p>事件类型;1：硬件异常；2：用户变更；3：智能运维</p>
                     * @return EventType <p>事件类型;1：硬件异常；2：用户变更；3：智能运维</p>
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置<p>事件类型;1：硬件异常；2：用户变更；3：智能运维</p>
                     * @param _eventType <p>事件类型;1：硬件异常；2：用户变更；3：智能运维</p>
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>事件任务id</p>
                     * @return EventTaskId <p>事件任务id</p>
                     * 
                     */
                    int64_t GetEventTaskId() const;

                    /**
                     * 设置<p>事件任务id</p>
                     * @param _eventTaskId <p>事件任务id</p>
                     * 
                     */
                    void SetEventTaskId(const int64_t& _eventTaskId);

                    /**
                     * 判断参数 EventTaskId 是否已赋值
                     * @return EventTaskId 是否已赋值
                     * 
                     */
                    bool EventTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>节点隔离状态，0:未隔离；1:已隔离</p>
                     * @return EventIsolationStatus <p>节点隔离状态，0:未隔离；1:已隔离</p>
                     * 
                     */
                    int64_t GetEventIsolationStatus() const;

                    /**
                     * 设置<p>节点隔离状态，0:未隔离；1:已隔离</p>
                     * @param _eventIsolationStatus <p>节点隔离状态，0:未隔离；1:已隔离</p>
                     * 
                     */
                    void SetEventIsolationStatus(const int64_t& _eventIsolationStatus);

                    /**
                     * 判断参数 EventIsolationStatus 是否已赋值
                     * @return EventIsolationStatus 是否已赋值
                     * 
                     */
                    bool EventIsolationStatusHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>子事件异常类型</p>
                     * @return SubEventType <p>子事件异常类型</p>
                     * 
                     */
                    int64_t GetSubEventType() const;

                    /**
                     * 设置<p>子事件异常类型</p>
                     * @param _subEventType <p>子事件异常类型</p>
                     * 
                     */
                    void SetSubEventType(const int64_t& _subEventType);

                    /**
                     * 判断参数 SubEventType 是否已赋值
                     * @return SubEventType 是否已赋值
                     * 
                     */
                    bool SubEventTypeHasBeenSet() const;

                    /**
                     * 获取<p>cvm维修任务Id</p>
                     * @return CvmRepairId <p>cvm维修任务Id</p>
                     * 
                     */
                    std::string GetCvmRepairId() const;

                    /**
                     * 设置<p>cvm维修任务Id</p>
                     * @param _cvmRepairId <p>cvm维修任务Id</p>
                     * 
                     */
                    void SetCvmRepairId(const std::string& _cvmRepairId);

                    /**
                     * 判断参数 CvmRepairId 是否已赋值
                     * @return CvmRepairId 是否已赋值
                     * 
                     */
                    bool CvmRepairIdHasBeenSet() const;

                    /**
                     * 获取<p>处理类型</p>
                     * @return ProcessType <p>处理类型</p>
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置<p>处理类型</p>
                     * @param _processType <p>处理类型</p>
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取<p>子事件名称</p>
                     * @return SubEventName <p>子事件名称</p>
                     * 
                     */
                    std::string GetSubEventName() const;

                    /**
                     * 设置<p>子事件名称</p>
                     * @param _subEventName <p>子事件名称</p>
                     * 
                     */
                    void SetSubEventName(const std::string& _subEventName);

                    /**
                     * 判断参数 SubEventName 是否已赋值
                     * @return SubEventName 是否已赋值
                     * 
                     */
                    bool SubEventNameHasBeenSet() const;

                private:

                    /**
                     * <p>事件名称</p>
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * <p>事件重要程度;0: 一般  1: 重要</p>
                     */
                    int64_t m_eventImportance;
                    bool m_eventImportanceHasBeenSet;

                    /**
                     * <p>事件内容</p>
                     */
                    std::string m_eventContent;
                    bool m_eventContentHasBeenSet;

                    /**
                     * <p>ES集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>节点Id</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * <p>事件状态,0:待处理，1:处理中，2:处理完成</p>
                     */
                    int64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * <p>事件类型;1：硬件异常；2：用户变更；3：智能运维</p>
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>事件任务id</p>
                     */
                    int64_t m_eventTaskId;
                    bool m_eventTaskIdHasBeenSet;

                    /**
                     * <p>节点隔离状态，0:未隔离；1:已隔离</p>
                     */
                    int64_t m_eventIsolationStatus;
                    bool m_eventIsolationStatusHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>子事件异常类型</p>
                     */
                    int64_t m_subEventType;
                    bool m_subEventTypeHasBeenSet;

                    /**
                     * <p>cvm维修任务Id</p>
                     */
                    std::string m_cvmRepairId;
                    bool m_cvmRepairIdHasBeenSet;

                    /**
                     * <p>处理类型</p>
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>子事件名称</p>
                     */
                    std::string m_subEventName;
                    bool m_subEventNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_EVENTDATADETAIL_H_
