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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPALERTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPALERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DLP 告警数据结构
                */
                class TrafficSandboxDLPAlertInfo : public AbstractModel
                {
                public:
                    TrafficSandboxDLPAlertInfo();
                    ~TrafficSandboxDLPAlertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警记录 ID</p>
                     * @return ID <p>告警记录 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>告警记录 ID</p>
                     * @param _iD <p>告警记录 ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * @return BelongAssetType <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置<p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * @param _belongAssetType <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>命中的用户规则 ID</p>
                     * @return RuleID <p>命中的用户规则 ID</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>命中的用户规则 ID</p>
                     * @param _ruleID <p>命中的用户规则 ID</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>命中的用户规则名称</p>
                     * @return RuleName <p>命中的用户规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>命中的用户规则名称</p>
                     * @param _ruleName <p>命中的用户规则名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Agent UUID</p>
                     * @return UUID <p>Agent UUID</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置<p>Agent UUID</p>
                     * @param _uUID <p>Agent UUID</p>
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>集群 ID<br>入参限制：仅容器告警返回</p>
                     * @return ClusterId <p>集群 ID<br>入参限制：仅容器告警返回</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID<br>入参限制：仅容器告警返回</p>
                     * @param _clusterId <p>集群 ID<br>入参限制：仅容器告警返回</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>容器 ID<br>入参限制：仅容器告警返回</p>
                     * @return ContainerId <p>容器 ID<br>入参限制：仅容器告警返回</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器 ID<br>入参限制：仅容器告警返回</p>
                     * @param _containerId <p>容器 ID<br>入参限制：仅容器告警返回</p>
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
                     * 获取<p>容器名称<br>入参限制：仅容器告警返回</p>
                     * @return ContainerName <p>容器名称<br>入参限制：仅容器告警返回</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名称<br>入参限制：仅容器告警返回</p>
                     * @param _containerName <p>容器名称<br>入参限制：仅容器告警返回</p>
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
                     * 获取<p>进程 exe 路径</p>
                     * @return Exe <p>进程 exe 路径</p>
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置<p>进程 exe 路径</p>
                     * @param _exe <p>进程 exe 路径</p>
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取<p>进程命令行参数</p>
                     * @return Param <p>进程命令行参数</p>
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置<p>进程命令行参数</p>
                     * @param _param <p>进程命令行参数</p>
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取<p>目标地址</p>
                     * @return Target <p>目标地址</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>目标地址</p>
                     * @param _target <p>目标地址</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>匹配范围<br>枚举值：<br>req_head：请求头<br>req_body：请求体<br>rsp_head：响应头<br>rsp_body：响应体</p>
                     * @return MatchScope <p>匹配范围<br>枚举值：<br>req_head：请求头<br>req_body：请求体<br>rsp_head：响应头<br>rsp_body：响应体</p>
                     * 
                     */
                    std::string GetMatchScope() const;

                    /**
                     * 设置<p>匹配范围<br>枚举值：<br>req_head：请求头<br>req_body：请求体<br>rsp_head：响应头<br>rsp_body：响应体</p>
                     * @param _matchScope <p>匹配范围<br>枚举值：<br>req_head：请求头<br>req_body：请求体<br>rsp_head：响应头<br>rsp_body：响应体</p>
                     * 
                     */
                    void SetMatchScope(const std::string& _matchScope);

                    /**
                     * 判断参数 MatchScope 是否已赋值
                     * @return MatchScope 是否已赋值
                     * 
                     */
                    bool MatchScopeHasBeenSet() const;

                    /**
                     * 获取<p>agent 上报的 match_content 完整内容<br>入参限制：最长 256 字节；前一半字符已脱敏打码</p>
                     * @return MatchContent <p>agent 上报的 match_content 完整内容<br>入参限制：最长 256 字节；前一半字符已脱敏打码</p>
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置<p>agent 上报的 match_content 完整内容<br>入参限制：最长 256 字节；前一半字符已脱敏打码</p>
                     * @param _matchContent <p>agent 上报的 match_content 完整内容<br>入参限制：最长 256 字节；前一半字符已脱敏打码</p>
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取<p>真正触发规则的匹配片段<br>入参限制：前一半字符已脱敏打码；规则缺失/未命中时退化为与 MatchContent 相同</p>
                     * @return MatchContentSample <p>真正触发规则的匹配片段<br>入参限制：前一半字符已脱敏打码；规则缺失/未命中时退化为与 MatchContent 相同</p>
                     * 
                     */
                    std::string GetMatchContentSample() const;

                    /**
                     * 设置<p>真正触发规则的匹配片段<br>入参限制：前一半字符已脱敏打码；规则缺失/未命中时退化为与 MatchContent 相同</p>
                     * @param _matchContentSample <p>真正触发规则的匹配片段<br>入参限制：前一半字符已脱敏打码；规则缺失/未命中时退化为与 MatchContent 相同</p>
                     * 
                     */
                    void SetMatchContentSample(const std::string& _matchContentSample);

                    /**
                     * 判断参数 MatchContentSample 是否已赋值
                     * @return MatchContentSample 是否已赋值
                     * 
                     */
                    bool MatchContentSampleHasBeenSet() const;

                    /**
                     * 获取<p>上传协议</p>
                     * @return UpProto <p>上传协议</p>
                     * 
                     */
                    std::string GetUpProto() const;

                    /**
                     * 设置<p>上传协议</p>
                     * @param _upProto <p>上传协议</p>
                     * 
                     */
                    void SetUpProto(const std::string& _upProto);

                    /**
                     * 判断参数 UpProto 是否已赋值
                     * @return UpProto 是否已赋值
                     * 
                     */
                    bool UpProtoHasBeenSet() const;

                    /**
                     * 获取<p>文件名称</p>
                     * @return FileName <p>文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称</p>
                     * @param _fileName <p>文件名称</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件类型</p>
                     * @return FileType <p>文件类型</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型</p>
                     * @param _fileType <p>文件类型</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>文件大小</p><p>单位：Byte</p>
                     * @return FileSize <p>文件大小</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小</p><p>单位：Byte</p>
                     * @param _fileSize <p>文件大小</p><p>单位：Byte</p>
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * @return Level <p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * @param _level <p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * @return Status <p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * @param _status <p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
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
                     * 获取<p>告警次数</p>
                     * @return Count <p>告警次数</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>告警次数</p>
                     * @param _count <p>告警次数</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>首次告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return FirstAlertTime <p>首次告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetFirstAlertTime() const;

                    /**
                     * 设置<p>首次告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _firstAlertTime <p>首次告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetFirstAlertTime(const std::string& _firstAlertTime);

                    /**
                     * 判断参数 FirstAlertTime 是否已赋值
                     * @return FirstAlertTime 是否已赋值
                     * 
                     */
                    bool FirstAlertTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return LastAlertTime <p>最后告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetLastAlertTime() const;

                    /**
                     * 设置<p>最后告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _lastAlertTime <p>最后告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetLastAlertTime(const std::string& _lastAlertTime);

                    /**
                     * 判断参数 LastAlertTime 是否已赋值
                     * @return LastAlertTime 是否已赋值
                     * 
                     */
                    bool LastAlertTimeHasBeenSet() const;

                    /**
                     * 获取<p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * @return RuleAction <p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * @param _ruleAction <p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                private:

                    /**
                     * <p>告警记录 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>命中的用户规则 ID</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>命中的用户规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Agent UUID</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>集群 ID<br>入参限制：仅容器告警返回</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>容器 ID<br>入参限制：仅容器告警返回</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>容器名称<br>入参限制：仅容器告警返回</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>进程 exe 路径</p>
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * <p>进程命令行参数</p>
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * <p>目标地址</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>匹配范围<br>枚举值：<br>req_head：请求头<br>req_body：请求体<br>rsp_head：响应头<br>rsp_body：响应体</p>
                     */
                    std::string m_matchScope;
                    bool m_matchScopeHasBeenSet;

                    /**
                     * <p>agent 上报的 match_content 完整内容<br>入参限制：最长 256 字节；前一半字符已脱敏打码</p>
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * <p>真正触发规则的匹配片段<br>入参限制：前一半字符已脱敏打码；规则缺失/未命中时退化为与 MatchContent 相同</p>
                     */
                    std::string m_matchContentSample;
                    bool m_matchContentSampleHasBeenSet;

                    /**
                     * <p>上传协议</p>
                     */
                    std::string m_upProto;
                    bool m_upProtoHasBeenSet;

                    /**
                     * <p>文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件类型</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件大小</p><p>单位：Byte</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>告警次数</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>首次告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_firstAlertTime;
                    bool m_firstAlertTimeHasBeenSet;

                    /**
                     * <p>最后告警时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_lastAlertTime;
                    bool m_lastAlertTimeHasBeenSet;

                    /**
                     * <p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPALERTINFO_H_
