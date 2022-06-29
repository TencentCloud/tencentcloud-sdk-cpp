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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTINFO_H_

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
                * 容器运行时安全访问控制事件信息
                */
                class AccessControlEventInfo : public AbstractModel
                {
                public:
                    AccessControlEventInfo();
                    ~AccessControlEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
                     * @param ProcessName 进程名称
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取命中规则名称
                     * @return MatchRuleName 命中规则名称
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置命中规则名称
                     * @param MatchRuleName 命中规则名称
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
                     * 获取动作执行结果，   BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     * @return Behavior 动作执行结果，   BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     */
                    std::string GetBehavior() const;

                    /**
                     * 设置动作执行结果，   BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     * @param Behavior 动作执行结果，   BEHAVIOR_NONE: 无
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
                     * 获取状态0:未处理  “EVENT_UNDEAL”:事件未处理
    "EVENT_DEALED":事件已经处理
    "EVENT_INGNORE"：事件已经忽略
                     * @return Status 状态0:未处理  “EVENT_UNDEAL”:事件未处理
    "EVENT_DEALED":事件已经处理
    "EVENT_INGNORE"：事件已经忽略
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态0:未处理  “EVENT_UNDEAL”:事件未处理
    "EVENT_DEALED":事件已经处理
    "EVENT_INGNORE"：事件已经忽略
                     * @param Status 状态0:未处理  “EVENT_UNDEAL”:事件未处理
    "EVENT_DEALED":事件已经处理
    "EVENT_INGNORE"：事件已经忽略
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
                     * 获取文件名称
                     * @return FileName 文件名称
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param FileName 文件名称
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取事件类型， FILE_ABNORMAL_READ:文件异常读取
                     * @return EventType 事件类型， FILE_ABNORMAL_READ:文件异常读取
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型， FILE_ABNORMAL_READ:文件异常读取
                     * @param EventType 事件类型， FILE_ABNORMAL_READ:文件异常读取
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取镜像id, 用于跳转
                     * @return ImageId 镜像id, 用于跳转
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id, 用于跳转
                     * @param ImageId 镜像id, 用于跳转
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取容器id, 用于跳转
                     * @return ContainerId 容器id, 用于跳转
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id, 用于跳转
                     * @param ContainerId 容器id, 用于跳转
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
                     * 获取命中规则文件信息
                     * @return MatchFilePath 命中规则文件信息
                     */
                    std::string GetMatchFilePath() const;

                    /**
                     * 设置命中规则文件信息
                     * @param MatchFilePath 命中规则文件信息
                     */
                    void SetMatchFilePath(const std::string& _matchFilePath);

                    /**
                     * 判断参数 MatchFilePath 是否已赋值
                     * @return MatchFilePath 是否已赋值
                     */
                    bool MatchFilePathHasBeenSet() const;

                    /**
                     * 获取文件路径，包含名字
                     * @return FilePath 文件路径，包含名字
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径，包含名字
                     * @param FilePath 文件路径，包含名字
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

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
                     * 获取规则组id
                     * @return RuleId 规则组id
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则组id
                     * @param RuleId 规则组id
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     * @return ContainerNetStatus 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     * @param ContainerNetStatus 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     * @return ContainerNetSubStatus 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     * @param ContainerNetSubStatus 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取容器隔离操作来源
                     * @return ContainerIsolateOperationSrc 容器隔离操作来源
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置容器隔离操作来源
                     * @param ContainerIsolateOperationSrc 容器隔离操作来源
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                private:

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 命中规则名称
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
                     * 动作执行结果，   BEHAVIOR_NONE: 无
    BEHAVIOR_ALERT: 告警
    BEHAVIOR_RELEASE：放行
    BEHAVIOR_HOLDUP_FAILED:拦截失败
    BEHAVIOR_HOLDUP_SUCCESSED：拦截失败
                     */
                    std::string m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * 状态0:未处理  “EVENT_UNDEAL”:事件未处理
    "EVENT_DEALED":事件已经处理
    "EVENT_INGNORE"：事件已经忽略
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件记录的唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 事件类型， FILE_ABNORMAL_READ:文件异常读取
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 镜像id, 用于跳转
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 容器id, 用于跳转
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
                     * 命中规则文件信息
                     */
                    std::string m_matchFilePath;
                    bool m_matchFilePathHasBeenSet;

                    /**
                     * 文件路径，包含名字
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

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
                     * 规则组id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 网络状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * 容器隔离操作来源
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTINFO_H_
