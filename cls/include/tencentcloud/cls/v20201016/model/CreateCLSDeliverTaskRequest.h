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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECLSDELIVERTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECLSDELIVERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCLSDeliverTask请求参数结构体
                */
                class CreateCLSDeliverTaskRequest : public AbstractModel
                {
                public:
                    CreateCLSDeliverTaskRequest();
                    ~CreateCLSDeliverTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务名称</p><p>参数格式：<code>^[a-zA-Z0-9_-]{1,64}$</code></p>
                     * @return TaskName <p>任务名称</p><p>参数格式：<code>^[a-zA-Z0-9_-]{1,64}$</code></p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p><p>参数格式：<code>^[a-zA-Z0-9_-]{1,64}$</code></p>
                     * @param _taskName <p>任务名称</p><p>参数格式：<code>^[a-zA-Z0-9_-]{1,64}$</code></p>
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
                     * 获取<p>合规承诺。</p><p>枚举值：</p><ul><li>1： 同意数据跨域传输条款</li></ul>
                     * @return Compliance <p>合规承诺。</p><p>枚举值：</p><ul><li>1： 同意数据跨域传输条款</li></ul>
                     * 
                     */
                    uint64_t GetCompliance() const;

                    /**
                     * 设置<p>合规承诺。</p><p>枚举值：</p><ul><li>1： 同意数据跨域传输条款</li></ul>
                     * @param _compliance <p>合规承诺。</p><p>枚举值：</p><ul><li>1： 同意数据跨域传输条款</li></ul>
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
                     * 获取<p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul><p>默认值：2</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul><p>默认值：2</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul><p>默认值：2</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul><p>默认值：2</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * <p>任务名称</p><p>参数格式：<code>^[a-zA-Z0-9_-]{1,64}$</code></p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

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
                     * <p>合规承诺。</p><p>枚举值：</p><ul><li>1： 同意数据跨域传输条款</li></ul>
                     */
                    uint64_t m_compliance;
                    bool m_complianceHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。</p><p>枚举值：</p><ul><li>1： 关闭</li><li>2： 开启</li></ul><p>默认值：2</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECLSDELIVERTASKREQUEST_H_
