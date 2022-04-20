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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器运行时安全异常进程信息
                */
                class AbnormalProcessEventInfo : public AbstractModel
                {
                public:
                    AbnormalProcessEventInfo();
                    ~AbnormalProcessEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程目录
                     * @return ProcessPath 进程目录
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程目录
                     * @param ProcessPath 进程目录
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取事件类型，MALICE_PROCESS_START:恶意进程启动
                     * @return EventType 事件类型，MALICE_PROCESS_START:恶意进程启动
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型，MALICE_PROCESS_START:恶意进程启动
                     * @param EventType 事件类型，MALICE_PROCESS_START:恶意进程启动
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则
                     * @return MatchRuleName 命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则
                     * @param MatchRuleName 命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则
                     */
                    void SetMatchRuleName(const std::string& _matchRuleName);

                    /**
                     * 判断参数 MatchRuleName 是否已赋值
                     * @return MatchRuleName 是否已赋值
                     */
                    bool MatchRuleNameHasBeenSet() const;

                    /**
                     * 获取生成时间
                     * @return FoundTime 生成时间
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置生成时间
                     * @param FoundTime 生成时间
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param ContainerName 容器名
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取镜像名
                     * @return ImageName 镜像名
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名
                     * @param ImageName 镜像名
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取动作执行结果，    BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     * @return Behavior 动作执行结果，    BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     */
                    std::string GetBehavior() const;

                    /**
                     * 设置动作执行结果，    BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     * @param Behavior 动作执行结果，    BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     */
                    void SetBehavior(const std::string& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取状态，EVENT_UNDEAL:事件未处理
    EVENT_DEALED:事件已经处理
    EVENT_INGNORE：事件已经忽略
                     * @return Status 状态，EVENT_UNDEAL:事件未处理
    EVENT_DEALED:事件已经处理
    EVENT_INGNORE：事件已经忽略
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，EVENT_UNDEAL:事件未处理
    EVENT_DEALED:事件已经处理
    EVENT_INGNORE：事件已经忽略
                     * @param Status 状态，EVENT_UNDEAL:事件未处理
    EVENT_DEALED:事件已经处理
    EVENT_INGNORE：事件已经忽略
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件记录的唯一id
                     * @return Id 事件记录的唯一id
                     */
                    std::string GetId() const;

                    /**
                     * 设置事件记录的唯一id
                     * @param Id 事件记录的唯一id
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取镜像id，用于跳转
                     * @return ImageId 镜像id，用于跳转
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id，用于跳转
                     * @param ImageId 镜像id，用于跳转
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取容器id，用于跳转
                     * @return ContainerId 容器id，用于跳转
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id，用于跳转
                     * @param ContainerId 容器id，用于跳转
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取事件解决方案
                     * @return Solution 事件解决方案
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置事件解决方案
                     * @param Solution 事件解决方案
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取事件详细描述
                     * @return Description 事件详细描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件详细描述
                     * @param Description 事件详细描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取命中策略id
                     * @return MatchRuleId 命中策略id
                     */
                    std::string GetMatchRuleId() const;

                    /**
                     * 设置命中策略id
                     * @param MatchRuleId 命中策略id
                     */
                    void SetMatchRuleId(const std::string& _matchRuleId);

                    /**
                     * 判断参数 MatchRuleId 是否已赋值
                     * @return MatchRuleId 是否已赋值
                     */
                    bool MatchRuleIdHasBeenSet() const;

                    /**
                     * 获取命中规则行为：
RULE_MODE_RELEASE 放行
RULE_MODE_ALERT  告警
RULE_MODE_HOLDUP 拦截
                     * @return MatchAction 命中规则行为：
RULE_MODE_RELEASE 放行
RULE_MODE_ALERT  告警
RULE_MODE_HOLDUP 拦截
                     */
                    std::string GetMatchAction() const;

                    /**
                     * 设置命中规则行为：
RULE_MODE_RELEASE 放行
RULE_MODE_ALERT  告警
RULE_MODE_HOLDUP 拦截
                     * @param MatchAction 命中规则行为：
RULE_MODE_RELEASE 放行
RULE_MODE_ALERT  告警
RULE_MODE_HOLDUP 拦截
                     */
                    void SetMatchAction(const std::string& _matchAction);

                    /**
                     * 判断参数 MatchAction 是否已赋值
                     * @return MatchAction 是否已赋值
                     */
                    bool MatchActionHasBeenSet() const;

                    /**
                     * 获取命中规则进程信息
                     * @return MatchProcessPath 命中规则进程信息
                     */
                    std::string GetMatchProcessPath() const;

                    /**
                     * 设置命中规则进程信息
                     * @param MatchProcessPath 命中规则进程信息
                     */
                    void SetMatchProcessPath(const std::string& _matchProcessPath);

                    /**
                     * 判断参数 MatchProcessPath 是否已赋值
                     * @return MatchProcessPath 是否已赋值
                     */
                    bool MatchProcessPathHasBeenSet() const;

                    /**
                     * 获取规则是否存在
                     * @return RuleExist 规则是否存在
                     */
                    bool GetRuleExist() const;

                    /**
                     * 设置规则是否存在
                     * @param RuleExist 规则是否存在
                     */
                    void SetRuleExist(const bool& _ruleExist);

                    /**
                     * 判断参数 RuleExist 是否已赋值
                     * @return RuleExist 是否已赋值
                     */
                    bool RuleExistHasBeenSet() const;

                    /**
                     * 获取事件数量
                     * @return EventCount 事件数量
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置事件数量
                     * @param EventCount 事件数量
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取最近生成时间
                     * @return LatestFoundTime 最近生成时间
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置最近生成时间
                     * @param LatestFoundTime 最近生成时间
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取规则组Id
                     * @return RuleId 规则组Id
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则组Id
                     * @param RuleId 规则组Id
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字
                     * @return MatchGroupName 命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字
                     */
                    std::string GetMatchGroupName() const;

                    /**
                     * 设置命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字
                     * @param MatchGroupName 命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字
                     */
                    void SetMatchGroupName(const std::string& _matchGroupName);

                    /**
                     * 判断参数 MatchGroupName 是否已赋值
                     * @return MatchGroupName 是否已赋值
                     */
                    bool MatchGroupNameHasBeenSet() const;

                    /**
                     * 获取命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。
                     * @return MatchRuleLevel 命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。
                     */
                    std::string GetMatchRuleLevel() const;

                    /**
                     * 设置命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。
                     * @param MatchRuleLevel 命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。
                     */
                    void SetMatchRuleLevel(const std::string& _matchRuleLevel);

                    /**
                     * 判断参数 MatchRuleLevel 是否已赋值
                     * @return MatchRuleLevel 是否已赋值
                     */
                    bool MatchRuleLevelHasBeenSet() const;

                private:

                    /**
                     * 进程目录
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 事件类型，MALICE_PROCESS_START:恶意进程启动
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * 生成时间
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 镜像名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 动作执行结果，    BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     */
                    std::string m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * 状态，EVENT_UNDEAL:事件未处理
    EVENT_DEALED:事件已经处理
    EVENT_INGNORE：事件已经忽略
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件记录的唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 镜像id，用于跳转
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 容器id，用于跳转
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 事件解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 事件详细描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 命中策略id
                     */
                    std::string m_matchRuleId;
                    bool m_matchRuleIdHasBeenSet;

                    /**
                     * 命中规则行为：
RULE_MODE_RELEASE 放行
RULE_MODE_ALERT  告警
RULE_MODE_HOLDUP 拦截
                     */
                    std::string m_matchAction;
                    bool m_matchActionHasBeenSet;

                    /**
                     * 命中规则进程信息
                     */
                    std::string m_matchProcessPath;
                    bool m_matchProcessPathHasBeenSet;

                    /**
                     * 规则是否存在
                     */
                    bool m_ruleExist;
                    bool m_ruleExistHasBeenSet;

                    /**
                     * 事件数量
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 最近生成时间
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * 规则组Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字
                     */
                    std::string m_matchGroupName;
                    bool m_matchGroupNameHasBeenSet;

                    /**
                     * 命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。
                     */
                    std::string m_matchRuleLevel;
                    bool m_matchRuleLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_
