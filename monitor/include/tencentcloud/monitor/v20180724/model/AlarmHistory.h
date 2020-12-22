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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORY_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/InstanceGroups.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警历史数据
                */
                class AlarmHistory : public AbstractModel
                {
                public:
                    AlarmHistory();
                    ~AlarmHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警历史Id
                     * @return AlarmId 告警历史Id
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警历史Id
                     * @param AlarmId 告警历史Id
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param MonitorType 监控类型
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return Namespace 策略类型
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置策略类型
                     * @param Namespace 策略类型
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取告警对象
                     * @return AlarmObject 告警对象
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置告警对象
                     * @param AlarmObject 告警对象
                     */
                    void SetAlarmObject(const std::string& _alarmObject);

                    /**
                     * 判断参数 AlarmObject 是否已赋值
                     * @return AlarmObject 是否已赋值
                     */
                    bool AlarmObjectHasBeenSet() const;

                    /**
                     * 获取告警内容
                     * @return Content 告警内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置告警内容
                     * @param Content 告警内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取时间戳，首次出现时间
                     * @return FirstOccurTime 时间戳，首次出现时间
                     */
                    int64_t GetFirstOccurTime() const;

                    /**
                     * 设置时间戳，首次出现时间
                     * @param FirstOccurTime 时间戳，首次出现时间
                     */
                    void SetFirstOccurTime(const int64_t& _firstOccurTime);

                    /**
                     * 判断参数 FirstOccurTime 是否已赋值
                     * @return FirstOccurTime 是否已赋值
                     */
                    bool FirstOccurTimeHasBeenSet() const;

                    /**
                     * 获取时间戳，最后出现时间
                     * @return LastOccurTime 时间戳，最后出现时间
                     */
                    int64_t GetLastOccurTime() const;

                    /**
                     * 设置时间戳，最后出现时间
                     * @param LastOccurTime 时间戳，最后出现时间
                     */
                    void SetLastOccurTime(const int64_t& _lastOccurTime);

                    /**
                     * 判断参数 LastOccurTime 是否已赋值
                     * @return LastOccurTime 是否已赋值
                     */
                    bool LastOccurTimeHasBeenSet() const;

                    /**
                     * 获取告警状态，ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足
                     * @return AlarmStatus 告警状态，ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足
                     */
                    std::string GetAlarmStatus() const;

                    /**
                     * 设置告警状态，ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足
                     * @param AlarmStatus 告警状态，ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足
                     */
                    void SetAlarmStatus(const std::string& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取告警策略 Id
                     * @return PolicyId 告警策略 Id
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 Id
                     * @param PolicyId 告警策略 Id
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param PolicyName 策略名称
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取基础产品告警的告警对象所属网络
                     * @return VPC 基础产品告警的告警对象所属网络
                     */
                    std::string GetVPC() const;

                    /**
                     * 设置基础产品告警的告警对象所属网络
                     * @param VPC 基础产品告警的告警对象所属网络
                     */
                    void SetVPC(const std::string& _vPC);

                    /**
                     * 判断参数 VPC 是否已赋值
                     * @return VPC 是否已赋值
                     */
                    bool VPCHasBeenSet() const;

                    /**
                     * 获取项目 Id
                     * @return ProjectId 项目 Id
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 Id
                     * @param ProjectId 项目 Id
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名字
                     * @return ProjectName 项目名字
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名字
                     * @param ProjectName 项目名字
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取告警对象所属实例组
                     * @return InstanceGroup 告警对象所属实例组
                     */
                    std::vector<InstanceGroups> GetInstanceGroup() const;

                    /**
                     * 设置告警对象所属实例组
                     * @param InstanceGroup 告警对象所属实例组
                     */
                    void SetInstanceGroup(const std::vector<InstanceGroups>& _instanceGroup);

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     */
                    bool InstanceGroupHasBeenSet() const;

                    /**
                     * 获取接收人列表
                     * @return ReceiverUids 接收人列表
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置接收人列表
                     * @param ReceiverUids 接收人列表
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取接收组列表
                     * @return ReceiverGroups 接收组列表
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置接收组列表
                     * @param ReceiverGroups 接收组列表
                     */
                    void SetReceiverGroups(const std::vector<int64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取告警渠道列表 SMS=短信 EMAIL=邮件 CALL=电话 WECHAT=微信
                     * @return NoticeWays 告警渠道列表 SMS=短信 EMAIL=邮件 CALL=电话 WECHAT=微信
                     */
                    std::vector<std::string> GetNoticeWays() const;

                    /**
                     * 设置告警渠道列表 SMS=短信 EMAIL=邮件 CALL=电话 WECHAT=微信
                     * @param NoticeWays 告警渠道列表 SMS=短信 EMAIL=邮件 CALL=电话 WECHAT=微信
                     */
                    void SetNoticeWays(const std::vector<std::string>& _noticeWays);

                    /**
                     * 判断参数 NoticeWays 是否已赋值
                     * @return NoticeWays 是否已赋值
                     */
                    bool NoticeWaysHasBeenSet() const;

                    /**
                     * 获取兼容告警1.0策略组 Id
                     * @return OriginId 兼容告警1.0策略组 Id
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置兼容告警1.0策略组 Id
                     * @param OriginId 兼容告警1.0策略组 Id
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取告警类型
                     * @return AlarmType 告警类型
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置告警类型
                     * @param AlarmType 告警类型
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取事件Id
                     * @return EventId 事件Id
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件Id
                     * @param EventId 事件Id
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取策略是否存在 0=不存在 1=存在
                     * @return PolicyExists 策略是否存在 0=不存在 1=存在
                     */
                    int64_t GetPolicyExists() const;

                    /**
                     * 设置策略是否存在 0=不存在 1=存在
                     * @param PolicyExists 策略是否存在 0=不存在 1=存在
                     */
                    void SetPolicyExists(const int64_t& _policyExists);

                    /**
                     * 判断参数 PolicyExists 是否已赋值
                     * @return PolicyExists 是否已赋值
                     */
                    bool PolicyExistsHasBeenSet() const;

                private:

                    /**
                     * 告警历史Id
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 告警对象
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * 告警内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 时间戳，首次出现时间
                     */
                    int64_t m_firstOccurTime;
                    bool m_firstOccurTimeHasBeenSet;

                    /**
                     * 时间戳，最后出现时间
                     */
                    int64_t m_lastOccurTime;
                    bool m_lastOccurTimeHasBeenSet;

                    /**
                     * 告警状态，ALARM=未恢复 OK=已恢复 NO_CONF=已失效 NO_DATA=数据不足
                     */
                    std::string m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * 告警策略 Id
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 基础产品告警的告警对象所属网络
                     */
                    std::string m_vPC;
                    bool m_vPCHasBeenSet;

                    /**
                     * 项目 Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名字
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 告警对象所属实例组
                     */
                    std::vector<InstanceGroups> m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                    /**
                     * 接收人列表
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * 接收组列表
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * 告警渠道列表 SMS=短信 EMAIL=邮件 CALL=电话 WECHAT=微信
                     */
                    std::vector<std::string> m_noticeWays;
                    bool m_noticeWaysHasBeenSet;

                    /**
                     * 兼容告警1.0策略组 Id
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 告警类型
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 事件Id
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 策略是否存在 0=不存在 1=存在
                     */
                    int64_t m_policyExists;
                    bool m_policyExistsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORY_H_
