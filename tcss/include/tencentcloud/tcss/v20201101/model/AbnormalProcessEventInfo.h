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
                     * 获取<p>进程目录</p>
                     * @return ProcessPath <p>进程目录</p>
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置<p>进程目录</p>
                     * @param _processPath <p>进程目录</p>
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取<p>事件类型，MALICE_PROCESS_START:恶意进程启动</p>
                     * @return EventType <p>事件类型，MALICE_PROCESS_START:恶意进程启动</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型，MALICE_PROCESS_START:恶意进程启动</p>
                     * @param _eventType <p>事件类型，MALICE_PROCESS_START:恶意进程启动</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则</p>
                     * @return MatchRuleName <p>命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则</p>
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置<p>命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则</p>
                     * @param _matchRuleName <p>命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则</p>
                     * 
                     */
                    void SetMatchRuleName(const std::string& _matchRuleName);

                    /**
                     * 判断参数 MatchRuleName 是否已赋值
                     * @return MatchRuleName 是否已赋值
                     * 
                     */
                    bool MatchRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>生成时间</p>
                     * @return FoundTime <p>生成时间</p>
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置<p>生成时间</p>
                     * @param _foundTime <p>生成时间</p>
                     * 
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>容器名</p>
                     * @return ContainerName <p>容器名</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名</p>
                     * @param _containerName <p>容器名</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像名</p>
                     * @return ImageName <p>镜像名</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像名</p>
                     * @param _imageName <p>镜像名</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>动作执行结果，    BEHAVIOR_NONE: 无<br>    BEHAVIOR_ALERT: 告警<br>    BEHAVIOR_RELEASE：放行<br>    BEHAVIOR_HOLDUP_FAILED:拦截失败<br>    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败</p>
                     * @return Behavior <p>动作执行结果，    BEHAVIOR_NONE: 无<br>    BEHAVIOR_ALERT: 告警<br>    BEHAVIOR_RELEASE：放行<br>    BEHAVIOR_HOLDUP_FAILED:拦截失败<br>    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败</p>
                     * 
                     */
                    std::string GetBehavior() const;

                    /**
                     * 设置<p>动作执行结果，    BEHAVIOR_NONE: 无<br>    BEHAVIOR_ALERT: 告警<br>    BEHAVIOR_RELEASE：放行<br>    BEHAVIOR_HOLDUP_FAILED:拦截失败<br>    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败</p>
                     * @param _behavior <p>动作执行结果，    BEHAVIOR_NONE: 无<br>    BEHAVIOR_ALERT: 告警<br>    BEHAVIOR_RELEASE：放行<br>    BEHAVIOR_HOLDUP_FAILED:拦截失败<br>    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败</p>
                     * 
                     */
                    void SetBehavior(const std::string& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取<p>状态，EVENT_UNDEAL:事件未处理<br>    EVENT_DEALED:事件已经处理<br>    EVENT_INGNORE：事件已经忽略</p>
                     * @return Status <p>状态，EVENT_UNDEAL:事件未处理<br>    EVENT_DEALED:事件已经处理<br>    EVENT_INGNORE：事件已经忽略</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态，EVENT_UNDEAL:事件未处理<br>    EVENT_DEALED:事件已经处理<br>    EVENT_INGNORE：事件已经忽略</p>
                     * @param _status <p>状态，EVENT_UNDEAL:事件未处理<br>    EVENT_DEALED:事件已经处理<br>    EVENT_INGNORE：事件已经忽略</p>
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
                     * 获取<p>事件记录的唯一id</p>
                     * @return Id <p>事件记录的唯一id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>事件记录的唯一id</p>
                     * @param _id <p>事件记录的唯一id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>镜像id，用于跳转</p>
                     * @return ImageId <p>镜像id，用于跳转</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id，用于跳转</p>
                     * @param _imageId <p>镜像id，用于跳转</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>容器id，用于跳转</p>
                     * @return ContainerId <p>容器id，用于跳转</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器id，用于跳转</p>
                     * @param _containerId <p>容器id，用于跳转</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>事件解决方案</p>
                     * @return Solution <p>事件解决方案</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>事件解决方案</p>
                     * @param _solution <p>事件解决方案</p>
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>事件详细描述</p>
                     * @return Description <p>事件详细描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>事件详细描述</p>
                     * @param _description <p>事件详细描述</p>
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
                     * 获取<p>命中策略id</p>
                     * @return MatchRuleId <p>命中策略id</p>
                     * 
                     */
                    std::string GetMatchRuleId() const;

                    /**
                     * 设置<p>命中策略id</p>
                     * @param _matchRuleId <p>命中策略id</p>
                     * 
                     */
                    void SetMatchRuleId(const std::string& _matchRuleId);

                    /**
                     * 判断参数 MatchRuleId 是否已赋值
                     * @return MatchRuleId 是否已赋值
                     * 
                     */
                    bool MatchRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>命中规则行为：<br>RULE_MODE_RELEASE 放行<br>RULE_MODE_ALERT  告警<br>RULE_MODE_HOLDUP 拦截</p>
                     * @return MatchAction <p>命中规则行为：<br>RULE_MODE_RELEASE 放行<br>RULE_MODE_ALERT  告警<br>RULE_MODE_HOLDUP 拦截</p>
                     * 
                     */
                    std::string GetMatchAction() const;

                    /**
                     * 设置<p>命中规则行为：<br>RULE_MODE_RELEASE 放行<br>RULE_MODE_ALERT  告警<br>RULE_MODE_HOLDUP 拦截</p>
                     * @param _matchAction <p>命中规则行为：<br>RULE_MODE_RELEASE 放行<br>RULE_MODE_ALERT  告警<br>RULE_MODE_HOLDUP 拦截</p>
                     * 
                     */
                    void SetMatchAction(const std::string& _matchAction);

                    /**
                     * 判断参数 MatchAction 是否已赋值
                     * @return MatchAction 是否已赋值
                     * 
                     */
                    bool MatchActionHasBeenSet() const;

                    /**
                     * 获取<p>命中规则进程信息</p>
                     * @return MatchProcessPath <p>命中规则进程信息</p>
                     * 
                     */
                    std::string GetMatchProcessPath() const;

                    /**
                     * 设置<p>命中规则进程信息</p>
                     * @param _matchProcessPath <p>命中规则进程信息</p>
                     * 
                     */
                    void SetMatchProcessPath(const std::string& _matchProcessPath);

                    /**
                     * 判断参数 MatchProcessPath 是否已赋值
                     * @return MatchProcessPath 是否已赋值
                     * 
                     */
                    bool MatchProcessPathHasBeenSet() const;

                    /**
                     * 获取<p>规则是否存在</p>
                     * @return RuleExist <p>规则是否存在</p>
                     * 
                     */
                    bool GetRuleExist() const;

                    /**
                     * 设置<p>规则是否存在</p>
                     * @param _ruleExist <p>规则是否存在</p>
                     * 
                     */
                    void SetRuleExist(const bool& _ruleExist);

                    /**
                     * 判断参数 RuleExist 是否已赋值
                     * @return RuleExist 是否已赋值
                     * 
                     */
                    bool RuleExistHasBeenSet() const;

                    /**
                     * 获取<p>事件数量</p>
                     * @return EventCount <p>事件数量</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>事件数量</p>
                     * @param _eventCount <p>事件数量</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>最近生成时间</p>
                     * @return LatestFoundTime <p>最近生成时间</p>
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置<p>最近生成时间</p>
                     * @param _latestFoundTime <p>最近生成时间</p>
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则组Id</p>
                     * @return RuleId <p>规则组Id</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则组Id</p>
                     * @param _ruleId <p>规则组Id</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字</p>
                     * @return MatchGroupName <p>命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字</p>
                     * 
                     */
                    std::string GetMatchGroupName() const;

                    /**
                     * 设置<p>命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字</p>
                     * @param _matchGroupName <p>命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字</p>
                     * 
                     */
                    void SetMatchGroupName(const std::string& _matchGroupName);

                    /**
                     * 判断参数 MatchGroupName 是否已赋值
                     * @return MatchGroupName 是否已赋值
                     * 
                     */
                    bool MatchGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。</p>
                     * @return MatchRuleLevel <p>命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。</p>
                     * 
                     */
                    std::string GetMatchRuleLevel() const;

                    /**
                     * 设置<p>命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。</p>
                     * @param _matchRuleLevel <p>命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。</p>
                     * 
                     */
                    void SetMatchRuleLevel(const std::string& _matchRuleLevel);

                    /**
                     * 判断参数 MatchRuleLevel 是否已赋值
                     * @return MatchRuleLevel 是否已赋值
                     * 
                     */
                    bool MatchRuleLevelHasBeenSet() const;

                    /**
                     * 获取<p>网络状态<br>未隔离      NORMAL<br>已隔离        ISOLATED<br>隔离中        ISOLATING<br>隔离失败    ISOLATE_FAILED<br>解除隔离中  RESTORING<br>解除隔离失败 RESTORE_FAILED</p>
                     * @return ContainerNetStatus <p>网络状态<br>未隔离      NORMAL<br>已隔离        ISOLATED<br>隔离中        ISOLATING<br>隔离失败    ISOLATE_FAILED<br>解除隔离中  RESTORING<br>解除隔离失败 RESTORE_FAILED</p>
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置<p>网络状态<br>未隔离      NORMAL<br>已隔离        ISOLATED<br>隔离中        ISOLATING<br>隔离失败    ISOLATE_FAILED<br>解除隔离中  RESTORING<br>解除隔离失败 RESTORE_FAILED</p>
                     * @param _containerNetStatus <p>网络状态<br>未隔离      NORMAL<br>已隔离        ISOLATED<br>隔离中        ISOLATING<br>隔离失败    ISOLATE_FAILED<br>解除隔离中  RESTORING<br>解除隔离失败 RESTORE_FAILED</p>
                     * 
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取<p>容器子状态<br>&quot;AGENT_OFFLINE&quot;       //Agent离线<br>&quot;NODE_DESTROYED&quot;      //节点已销毁<br>&quot;CONTAINER_EXITED&quot;    //容器已退出<br>&quot;CONTAINER_DESTROYED&quot; //容器已销毁<br>&quot;SHARED_HOST&quot;         // 容器与主机共享网络<br>&quot;RESOURCE_LIMIT&quot;      //隔离操作资源超限<br>&quot;UNKNOW&quot;              // 原因未知</p>
                     * @return ContainerNetSubStatus <p>容器子状态<br>&quot;AGENT_OFFLINE&quot;       //Agent离线<br>&quot;NODE_DESTROYED&quot;      //节点已销毁<br>&quot;CONTAINER_EXITED&quot;    //容器已退出<br>&quot;CONTAINER_DESTROYED&quot; //容器已销毁<br>&quot;SHARED_HOST&quot;         // 容器与主机共享网络<br>&quot;RESOURCE_LIMIT&quot;      //隔离操作资源超限<br>&quot;UNKNOW&quot;              // 原因未知</p>
                     * 
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置<p>容器子状态<br>&quot;AGENT_OFFLINE&quot;       //Agent离线<br>&quot;NODE_DESTROYED&quot;      //节点已销毁<br>&quot;CONTAINER_EXITED&quot;    //容器已退出<br>&quot;CONTAINER_DESTROYED&quot; //容器已销毁<br>&quot;SHARED_HOST&quot;         // 容器与主机共享网络<br>&quot;RESOURCE_LIMIT&quot;      //隔离操作资源超限<br>&quot;UNKNOW&quot;              // 原因未知</p>
                     * @param _containerNetSubStatus <p>容器子状态<br>&quot;AGENT_OFFLINE&quot;       //Agent离线<br>&quot;NODE_DESTROYED&quot;      //节点已销毁<br>&quot;CONTAINER_EXITED&quot;    //容器已退出<br>&quot;CONTAINER_DESTROYED&quot; //容器已销毁<br>&quot;SHARED_HOST&quot;         // 容器与主机共享网络<br>&quot;RESOURCE_LIMIT&quot;      //隔离操作资源超限<br>&quot;UNKNOW&quot;              // 原因未知</p>
                     * 
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>容器隔离操作来源</p>
                     * @return ContainerIsolateOperationSrc <p>容器隔离操作来源</p>
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置<p>容器隔离操作来源</p>
                     * @param _containerIsolateOperationSrc <p>容器隔离操作来源</p>
                     * 
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     * 
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                    /**
                     * 获取<p>容器状态<br>正在运行: RUNNING<br>暂停: PAUSED<br>停止: STOPPED<br>已经创建: CREATED<br>已经销毁: DESTROYED<br>正在重启中: RESTARTING<br>迁移中: REMOVING</p>
                     * @return ContainerStatus <p>容器状态<br>正在运行: RUNNING<br>暂停: PAUSED<br>停止: STOPPED<br>已经创建: CREATED<br>已经销毁: DESTROYED<br>正在重启中: RESTARTING<br>迁移中: REMOVING</p>
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置<p>容器状态<br>正在运行: RUNNING<br>暂停: PAUSED<br>停止: STOPPED<br>已经创建: CREATED<br>已经销毁: DESTROYED<br>正在重启中: RESTARTING<br>迁移中: REMOVING</p>
                     * @param _containerStatus <p>容器状态<br>正在运行: RUNNING<br>暂停: PAUSED<br>停止: STOPPED<br>已经创建: CREATED<br>已经销毁: DESTROYED<br>正在重启中: RESTARTING<br>迁移中: REMOVING</p>
                     * 
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterID <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterID <p>集群ID</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>节点类型：NORMAL普通节点、SUPER超级节点</p>
                     * @return NodeType <p>节点类型：NORMAL普通节点、SUPER超级节点</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型：NORMAL普通节点、SUPER超级节点</p>
                     * @param _nodeType <p>节点类型：NORMAL普通节点、SUPER超级节点</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>pod 名称</p>
                     * @return PodName <p>pod 名称</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>pod 名称</p>
                     * @param _podName <p>pod 名称</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>pod ip</p>
                     * @return PodIP <p>pod ip</p>
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置<p>pod ip</p>
                     * @param _podIP <p>pod ip</p>
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
                     * 获取<p>集群id</p>
                     * @return NodeUniqueID <p>集群id</p>
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _nodeUniqueID <p>集群id</p>
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>节点公网ip</p>
                     * @return PublicIP <p>节点公网ip</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>节点公网ip</p>
                     * @param _publicIP <p>节点公网ip</p>
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取<p>节点名称</p>
                     * @return NodeName <p>节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _nodeName <p>节点名称</p>
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
                     * 获取<p>节点id</p>
                     * @return NodeID <p>节点id</p>
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置<p>节点id</p>
                     * @param _nodeID <p>节点id</p>
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取<p>uuid</p>
                     * @return HostID <p>uuid</p>
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置<p>uuid</p>
                     * @param _hostID <p>uuid</p>
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取<p>节点内网ip</p>
                     * @return HostIP <p>节点内网ip</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置<p>节点内网ip</p>
                     * @param _hostIP <p>节点内网ip</p>
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>命令行参数</p>
                     * @return CmdLine <p>命令行参数</p>
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置<p>命令行参数</p>
                     * @param _cmdLine <p>命令行参数</p>
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                private:

                    /**
                     * <p>进程目录</p>
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * <p>事件类型，MALICE_PROCESS_START:恶意进程启动</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>命中规则名称，PROXY_TOOL：代理软件，TRANSFER_CONTROL：横向渗透，ATTACK_CMD：恶意命令，REVERSE_SHELL：反弹shell，FILELESS：无文件程序执行，RISK_CMD：高危命令，ABNORMAL_CHILD_PROC：敏感服务异常子进程启动，USER_DEFINED_RULE：用户自定义规则</p>
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * <p>生成时间</p>
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * <p>容器名</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>镜像名</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>动作执行结果，    BEHAVIOR_NONE: 无<br>    BEHAVIOR_ALERT: 告警<br>    BEHAVIOR_RELEASE：放行<br>    BEHAVIOR_HOLDUP_FAILED:拦截失败<br>    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败</p>
                     */
                    std::string m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>状态，EVENT_UNDEAL:事件未处理<br>    EVENT_DEALED:事件已经处理<br>    EVENT_INGNORE：事件已经忽略</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>事件记录的唯一id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>镜像id，用于跳转</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>容器id，用于跳转</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>事件解决方案</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>事件详细描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>命中策略id</p>
                     */
                    std::string m_matchRuleId;
                    bool m_matchRuleIdHasBeenSet;

                    /**
                     * <p>命中规则行为：<br>RULE_MODE_RELEASE 放行<br>RULE_MODE_ALERT  告警<br>RULE_MODE_HOLDUP 拦截</p>
                     */
                    std::string m_matchAction;
                    bool m_matchActionHasBeenSet;

                    /**
                     * <p>命中规则进程信息</p>
                     */
                    std::string m_matchProcessPath;
                    bool m_matchProcessPathHasBeenSet;

                    /**
                     * <p>规则是否存在</p>
                     */
                    bool m_ruleExist;
                    bool m_ruleExistHasBeenSet;

                    /**
                     * <p>事件数量</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>最近生成时间</p>
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * <p>规则组Id</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>命中策略名称：SYSTEM_DEFINED_RULE （系统策略）或  用户自定义的策略名字</p>
                     */
                    std::string m_matchGroupName;
                    bool m_matchGroupNameHasBeenSet;

                    /**
                     * <p>命中规则等级，HIGH：高危，MIDDLE：中危，LOW：低危。</p>
                     */
                    std::string m_matchRuleLevel;
                    bool m_matchRuleLevelHasBeenSet;

                    /**
                     * <p>网络状态<br>未隔离      NORMAL<br>已隔离        ISOLATED<br>隔离中        ISOLATING<br>隔离失败    ISOLATE_FAILED<br>解除隔离中  RESTORING<br>解除隔离失败 RESTORE_FAILED</p>
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * <p>容器子状态<br>&quot;AGENT_OFFLINE&quot;       //Agent离线<br>&quot;NODE_DESTROYED&quot;      //节点已销毁<br>&quot;CONTAINER_EXITED&quot;    //容器已退出<br>&quot;CONTAINER_DESTROYED&quot; //容器已销毁<br>&quot;SHARED_HOST&quot;         // 容器与主机共享网络<br>&quot;RESOURCE_LIMIT&quot;      //隔离操作资源超限<br>&quot;UNKNOW&quot;              // 原因未知</p>
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * <p>容器隔离操作来源</p>
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * <p>容器状态<br>正在运行: RUNNING<br>暂停: PAUSED<br>停止: STOPPED<br>已经创建: CREATED<br>已经销毁: DESTROYED<br>正在重启中: RESTARTING<br>迁移中: REMOVING</p>
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>节点类型：NORMAL普通节点、SUPER超级节点</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>pod 名称</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>pod ip</p>
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * <p>节点公网ip</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点id</p>
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * <p>uuid</p>
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * <p>节点内网ip</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>命令行参数</p>
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_
