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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULEYAMLTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULEYAMLTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 预聚合Yaml任务详情
                */
                class RecordingRuleYamlTaskInfo : public AbstractModel
                {
                public:
                    RecordingRuleYamlTaskInfo();
                    ~RecordingRuleYamlTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取yaml配置文件id
                     * @return YamlId yaml配置文件id
                     * 
                     */
                    std::string GetYamlId() const;

                    /**
                     * 设置yaml配置文件id
                     * @param _yamlId yaml配置文件id
                     * 
                     */
                    void SetYamlId(const std::string& _yamlId);

                    /**
                     * 判断参数 YamlId 是否已赋值
                     * @return YamlId 是否已赋值
                     * 
                     */
                    bool YamlIdHasBeenSet() const;

                    /**
                     * 获取源日志主题id
                     * @return TopicId 源日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置源日志主题id
                     * @param _topicId 源日志主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取写入描述的日志主题id
                     * @return DstTopicId 写入描述的日志主题id
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置写入描述的日志主题id
                     * @param _dstTopicId 写入描述的日志主题id
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取任务更新时间
                     * @return UpdateTime 任务更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param _updateTime 任务更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     * @return Status 任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     * @param _status 任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
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
                     * 获取任务启用状态，1开启,  2关闭
                     * @return EnableFlag 任务启用状态，1开启,  2关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启用状态，1开启,  2关闭
                     * @param _enableFlag 任务启用状态，1开启,  2关闭
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取调度开始时间
                     * @return ProcessStartTime 调度开始时间
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置调度开始时间
                     * @param _processStartTime 调度开始时间
                     * 
                     */
                    void SetProcessStartTime(const uint64_t& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取调度周期(分钟)
                     * @return ProcessPeriod 调度周期(分钟)
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置调度周期(分钟)
                     * @param _processPeriod 调度周期(分钟)
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取执行延迟(秒)
                     * @return ProcessDelay 执行延迟(秒)
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置执行延迟(秒)
                     * @param _processDelay 执行延迟(秒)
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取是否开启投递服务日志。1：关闭，2：开启。
                     * @return HasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置是否开启投递服务日志。1：关闭，2：开启。
                     * @param _hasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
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
                     * 获取yaml配置文件名称
                     * @return YamlConfigName yaml配置文件名称
                     * 
                     */
                    std::string GetYamlConfigName() const;

                    /**
                     * 设置yaml配置文件名称
                     * @param _yamlConfigName yaml配置文件名称
                     * 
                     */
                    void SetYamlConfigName(const std::string& _yamlConfigName);

                    /**
                     * 判断参数 YamlConfigName 是否已赋值
                     * @return YamlConfigName 是否已赋值
                     * 
                     */
                    bool YamlConfigNameHasBeenSet() const;

                    /**
                     * 获取yaml配置文件内容
                     * @return YamlContent yaml配置文件内容
                     * 
                     */
                    std::string GetYamlContent() const;

                    /**
                     * 设置yaml配置文件内容
                     * @param _yamlContent yaml配置文件内容
                     * 
                     */
                    void SetYamlContent(const std::string& _yamlContent);

                    /**
                     * 判断参数 YamlContent 是否已赋值
                     * @return YamlContent 是否已赋值
                     * 
                     */
                    bool YamlContentHasBeenSet() const;

                    /**
                     * 获取yaml文件子任务数量
                     * @return SubTaskCount yaml文件子任务数量
                     * 
                     */
                    int64_t GetSubTaskCount() const;

                    /**
                     * 设置yaml文件子任务数量
                     * @param _subTaskCount yaml文件子任务数量
                     * 
                     */
                    void SetSubTaskCount(const int64_t& _subTaskCount);

                    /**
                     * 判断参数 SubTaskCount 是否已赋值
                     * @return SubTaskCount 是否已赋值
                     * 
                     */
                    bool SubTaskCountHasBeenSet() const;

                private:

                    /**
                     * yaml配置文件id
                     */
                    std::string m_yamlId;
                    bool m_yamlIdHasBeenSet;

                    /**
                     * 源日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 写入描述的日志主题id
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务启用状态，1开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 调度开始时间
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * 调度周期(分钟)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * 执行延迟(秒)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1：关闭，2：开启。
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * yaml配置文件名称
                     */
                    std::string m_yamlConfigName;
                    bool m_yamlConfigNameHasBeenSet;

                    /**
                     * yaml配置文件内容
                     */
                    std::string m_yamlContent;
                    bool m_yamlContentHasBeenSet;

                    /**
                     * yaml文件子任务数量
                     */
                    int64_t m_subTaskCount;
                    bool m_subTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RECORDINGRULEYAMLTASKINFO_H_
