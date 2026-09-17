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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CLSDELIVERTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CLSDELIVERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/SourceTopicConfig.h>
#include <tencentcloud/cls/v20201016/model/TargetTopicConfig.h>
#include <tencentcloud/cls/v20201016/model/DeliverRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 跨账号投递任务信息
                */
                class CLSDeliverTaskInfo : public AbstractModel
                {
                public:
                    CLSDeliverTaskInfo();
                    ~CLSDeliverTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>主账号id</p>
                     * @return Uin <p>主账号id</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>主账号id</p>
                     * @param _uin <p>主账号id</p>
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>源主题信息</p>
                     * @return SourceTopicConfig <p>源主题信息</p>
                     * 
                     */
                    SourceTopicConfig GetSourceTopicConfig() const;

                    /**
                     * 设置<p>源主题信息</p>
                     * @param _sourceTopicConfig <p>源主题信息</p>
                     * 
                     */
                    void SetSourceTopicConfig(const SourceTopicConfig& _sourceTopicConfig);

                    /**
                     * 判断参数 SourceTopicConfig 是否已赋值
                     * @return SourceTopicConfig 是否已赋值
                     * 
                     */
                    bool SourceTopicConfigHasBeenSet() const;

                    /**
                     * 获取<p>目标主题信息</p>
                     * @return TargetTopicConfig <p>目标主题信息</p>
                     * 
                     */
                    TargetTopicConfig GetTargetTopicConfig() const;

                    /**
                     * 设置<p>目标主题信息</p>
                     * @param _targetTopicConfig <p>目标主题信息</p>
                     * 
                     */
                    void SetTargetTopicConfig(const TargetTopicConfig& _targetTopicConfig);

                    /**
                     * 判断参数 TargetTopicConfig 是否已赋值
                     * @return TargetTopicConfig 是否已赋值
                     * 
                     */
                    bool TargetTopicConfigHasBeenSet() const;

                    /**
                     * 获取<p>投递规则</p>
                     * @return DeliverRule <p>投递规则</p>
                     * 
                     */
                    DeliverRule GetDeliverRule() const;

                    /**
                     * 设置<p>投递规则</p>
                     * @param _deliverRule <p>投递规则</p>
                     * 
                     */
                    void SetDeliverRule(const DeliverRule& _deliverRule);

                    /**
                     * 判断参数 DeliverRule 是否已赋值
                     * @return DeliverRule 是否已赋值
                     * 
                     */
                    bool DeliverRuleHasBeenSet() const;

                    /**
                     * 获取<p>合规承诺</p>
                     * @return Compliance <p>合规承诺</p>
                     * 
                     */
                    uint64_t GetCompliance() const;

                    /**
                     * 设置<p>合规承诺</p>
                     * @param _compliance <p>合规承诺</p>
                     * 
                     */
                    void SetCompliance(const uint64_t& _compliance);

                    /**
                     * 判断参数 Compliance 是否已赋值
                     * @return Compliance 是否已赋值
                     * 
                     */
                    bool ComplianceHasBeenSet() const;

                    /**
                     * 获取<p>任务状态。</p><p>枚举值：</p><ul><li>0： 运行中</li><li>1： 已暂停</li><li>2： 已完成</li><li>3： 异常</li></ul>
                     * @return Status <p>任务状态。</p><p>枚举值：</p><ul><li>0： 运行中</li><li>1： 已暂停</li><li>2： 已完成</li><li>3： 异常</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态。</p><p>枚举值：</p><ul><li>0： 运行中</li><li>1： 已暂停</li><li>2： 已完成</li><li>3： 异常</li></ul>
                     * @param _status <p>任务状态。</p><p>枚举值：</p><ul><li>0： 运行中</li><li>1： 已暂停</li><li>2： 已完成</li><li>3： 异常</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>状态 </p><p>枚举值：</p><ul><li>0： 运行</li><li>1： 暂停</li></ul>
                     * @return Enable <p>状态 </p><p>枚举值：</p><ul><li>0： 运行</li><li>1： 暂停</li></ul>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>状态 </p><p>枚举值：</p><ul><li>0： 运行</li><li>1： 暂停</li></ul>
                     * @param _enable <p>状态 </p><p>枚举值：</p><ul><li>0： 运行</li><li>1： 暂停</li></ul>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>任务进度百分比</p>
                     * @return Progress <p>任务进度百分比</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>任务进度百分比</p>
                     * @param _progress <p>任务进度百分比</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul>
                     * @return HasServicesLog <p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul>
                     * @param _hasServicesLog <p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p><p>单位：秒级时间戳</p>
                     * @return CreateTime <p>创建时间。</p><p>单位：秒级时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p><p>单位：秒级时间戳</p>
                     * @param _createTime <p>创建时间。</p><p>单位：秒级时间戳</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>单位：秒级时间戳</p>
                     * @return UpdateTime <p>更新时间</p><p>单位：秒级时间戳</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>单位：秒级时间戳</p>
                     * @param _updateTime <p>更新时间</p><p>单位：秒级时间戳</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>主账号id</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>源主题信息</p>
                     */
                    SourceTopicConfig m_sourceTopicConfig;
                    bool m_sourceTopicConfigHasBeenSet;

                    /**
                     * <p>目标主题信息</p>
                     */
                    TargetTopicConfig m_targetTopicConfig;
                    bool m_targetTopicConfigHasBeenSet;

                    /**
                     * <p>投递规则</p>
                     */
                    DeliverRule m_deliverRule;
                    bool m_deliverRuleHasBeenSet;

                    /**
                     * <p>合规承诺</p>
                     */
                    uint64_t m_compliance;
                    bool m_complianceHasBeenSet;

                    /**
                     * <p>任务状态。</p><p>枚举值：</p><ul><li>0： 运行中</li><li>1： 已暂停</li><li>2： 已完成</li><li>3： 异常</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态 </p><p>枚举值：</p><ul><li>0： 运行</li><li>1： 暂停</li></ul>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>任务进度百分比</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>创建时间。</p><p>单位：秒级时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>单位：秒级时间戳</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CLSDELIVERTASKINFO_H_
