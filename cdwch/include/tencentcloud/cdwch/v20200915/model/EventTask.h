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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_EVENTTASK_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_EVENTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 事件任务
                */
                class EventTask : public AbstractModel
                {
                public:
                    EventTask();
                    ~EventTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取事件任务的id	
                     * @return EventTaskId 事件任务的id	
                     * 
                     */
                    int64_t GetEventTaskId() const;

                    /**
                     * 设置事件任务的id	
                     * @param _eventTaskId 事件任务的id	
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
                     * 获取处理人uin
                     * @return HandleUser 处理人uin
                     * 
                     */
                    std::string GetHandleUser() const;

                    /**
                     * 设置处理人uin
                     * @param _handleUser 处理人uin
                     * 
                     */
                    void SetHandleUser(const std::string& _handleUser);

                    /**
                     * 判断参数 HandleUser 是否已赋值
                     * @return HandleUser 是否已赋值
                     * 
                     */
                    bool HandleUserHasBeenSet() const;

                    /**
                     * 获取事件名称	
                     * @return EventCode 事件名称	
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件名称	
                     * @param _eventCode 事件名称	
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取CVM相关事件的维修id
                     * @return RepairId CVM相关事件的维修id
                     * 
                     */
                    std::string GetRepairId() const;

                    /**
                     * 设置CVM相关事件的维修id
                     * @param _repairId CVM相关事件的维修id
                     * 
                     */
                    void SetRepairId(const std::string& _repairId);

                    /**
                     * 判断参数 RepairId 是否已赋值
                     * @return RepairId 是否已赋值
                     * 
                     */
                    bool RepairIdHasBeenSet() const;

                    /**
                     * 获取事件名称描述	
                     * @return EventNameDescribe 事件名称描述	
                     * 
                     */
                    std::string GetEventNameDescribe() const;

                    /**
                     * 设置事件名称描述	
                     * @param _eventNameDescribe 事件名称描述	
                     * 
                     */
                    void SetEventNameDescribe(const std::string& _eventNameDescribe);

                    /**
                     * 判断参数 EventNameDescribe 是否已赋值
                     * @return EventNameDescribe 是否已赋值
                     * 
                     */
                    bool EventNameDescribeHasBeenSet() const;

                    /**
                     * 获取事件等级（0-低；1-中；2-高；3-严重）	
                     * @return EventPriority 事件等级（0-低；1-中；2-高；3-严重）	
                     * 
                     */
                    int64_t GetEventPriority() const;

                    /**
                     * 设置事件等级（0-低；1-中；2-高；3-严重）	
                     * @param _eventPriority 事件等级（0-低；1-中；2-高；3-严重）	
                     * 
                     */
                    void SetEventPriority(const int64_t& _eventPriority);

                    /**
                     * 判断参数 EventPriority 是否已赋值
                     * @return EventPriority 是否已赋值
                     * 
                     */
                    bool EventPriorityHasBeenSet() const;

                    /**
                     * 获取事件详情	
                     * @return EventDetail 事件详情	
                     * 
                     */
                    std::string GetEventDetail() const;

                    /**
                     * 设置事件详情	
                     * @param _eventDetail 事件详情	
                     * 
                     */
                    void SetEventDetail(const std::string& _eventDetail);

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     * 
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取影响集群节点	
                     * @return IP 影响集群节点	
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置影响集群节点	
                     * @param _iP 影响集群节点	
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取事件触发时间	
                     * @return CreateTime 事件触发时间	
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置事件触发时间	
                     * @param _createTime 事件触发时间	
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取事件状态(1-待处理;2-已预约;3-处理中;4-已完成;5-处理中;6-自动处理中;-1-已忽略;-2-已删除)	
                     * @return Status 事件状态(1-待处理;2-已预约;3-处理中;4-已完成;5-处理中;6-自动处理中;-1-已忽略;-2-已删除)	
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置事件状态(1-待处理;2-已预约;3-处理中;4-已完成;5-处理中;6-自动处理中;-1-已忽略;-2-已删除)	
                     * @param _status 事件状态(1-待处理;2-已预约;3-处理中;4-已完成;5-处理中;6-自动处理中;-1-已忽略;-2-已删除)	
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否需要授权维修：1-不需要，2-需要
                     * @return NeedAuthorization 是否需要授权维修：1-不需要，2-需要
                     * 
                     */
                    int64_t GetNeedAuthorization() const;

                    /**
                     * 设置是否需要授权维修：1-不需要，2-需要
                     * @param _needAuthorization 是否需要授权维修：1-不需要，2-需要
                     * 
                     */
                    void SetNeedAuthorization(const int64_t& _needAuthorization);

                    /**
                     * 判断参数 NeedAuthorization 是否已赋值
                     * @return NeedAuthorization 是否已赋值
                     * 
                     */
                    bool NeedAuthorizationHasBeenSet() const;

                    /**
                     * 获取该事件涉及到的操作类型（OnlineMigrationForInstance-实例在线迁移,OnlineMaintenanceForInstance-实例在线维修,等）	
                     * @return OperationType 该事件涉及到的操作类型（OnlineMigrationForInstance-实例在线迁移,OnlineMaintenanceForInstance-实例在线维修,等）	
                     * 
                     */
                    std::vector<std::string> GetOperationType() const;

                    /**
                     * 设置该事件涉及到的操作类型（OnlineMigrationForInstance-实例在线迁移,OnlineMaintenanceForInstance-实例在线维修,等）	
                     * @param _operationType 该事件涉及到的操作类型（OnlineMigrationForInstance-实例在线迁移,OnlineMaintenanceForInstance-实例在线维修,等）	
                     * 
                     */
                    void SetOperationType(const std::vector<std::string>& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取完成时间
                     * @return FinishTime 完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置完成时间
                     * @param _finishTime 完成时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取操作指引
                     * @return OperationGuide 操作指引
                     * 
                     */
                    std::string GetOperationGuide() const;

                    /**
                     * 设置操作指引
                     * @param _operationGuide 操作指引
                     * 
                     */
                    void SetOperationGuide(const std::string& _operationGuide);

                    /**
                     * 判断参数 OperationGuide 是否已赋值
                     * @return OperationGuide 是否已赋值
                     * 
                     */
                    bool OperationGuideHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事件任务的id	
                     */
                    int64_t m_eventTaskId;
                    bool m_eventTaskIdHasBeenSet;

                    /**
                     * 处理人uin
                     */
                    std::string m_handleUser;
                    bool m_handleUserHasBeenSet;

                    /**
                     * 事件名称	
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * CVM相关事件的维修id
                     */
                    std::string m_repairId;
                    bool m_repairIdHasBeenSet;

                    /**
                     * 事件名称描述	
                     */
                    std::string m_eventNameDescribe;
                    bool m_eventNameDescribeHasBeenSet;

                    /**
                     * 事件等级（0-低；1-中；2-高；3-严重）	
                     */
                    int64_t m_eventPriority;
                    bool m_eventPriorityHasBeenSet;

                    /**
                     * 事件详情	
                     */
                    std::string m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * 影响集群节点	
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 事件触发时间	
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 事件状态(1-待处理;2-已预约;3-处理中;4-已完成;5-处理中;6-自动处理中;-1-已忽略;-2-已删除)	
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否需要授权维修：1-不需要，2-需要
                     */
                    int64_t m_needAuthorization;
                    bool m_needAuthorizationHasBeenSet;

                    /**
                     * 该事件涉及到的操作类型（OnlineMigrationForInstance-实例在线迁移,OnlineMaintenanceForInstance-实例在线维修,等）	
                     */
                    std::vector<std::string> m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 操作指引
                     */
                    std::string m_operationGuide;
                    bool m_operationGuideHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_EVENTTASK_H_
