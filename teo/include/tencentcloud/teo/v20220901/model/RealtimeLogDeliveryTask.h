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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomField.h>
#include <tencentcloud/teo/v20220901/model/DeliveryCondition.h>
#include <tencentcloud/teo/v20220901/model/LogFormat.h>
#include <tencentcloud/teo/v20220901/model/CLSTopic.h>
#include <tencentcloud/teo/v20220901/model/CustomEndpoint.h>
#include <tencentcloud/teo/v20220901/model/S3.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 实时日志投递任务。
                */
                class RealtimeLogDeliveryTask : public AbstractModel
                {
                public:
                    RealtimeLogDeliveryTask();
                    ~RealtimeLogDeliveryTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实时日志投递任务 ID。</p>
                     * @return TaskId <p>实时日志投递任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>实时日志投递任务 ID。</p>
                     * @param _taskId <p>实时日志投递任务 ID。</p>
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
                     * 获取<p>实时日志投递任务的名称。</p>
                     * @return TaskName <p>实时日志投递任务的名称。</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>实时日志投递任务的名称。</p>
                     * @param _taskName <p>实时日志投递任务的名称。</p>
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
                     * 获取<p>实时日志投递任务的状态，取值有： <li>enabled: 已启用；</li> <li>disabled: 已停用；</li><li>deleted: 异常删除状态，请检查目的地腾讯云 CLS 日志集/日志主题是否已被删除。</li></p>
                     * @return DeliveryStatus <p>实时日志投递任务的状态，取值有： <li>enabled: 已启用；</li> <li>disabled: 已停用；</li><li>deleted: 异常删除状态，请检查目的地腾讯云 CLS 日志集/日志主题是否已被删除。</li></p>
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置<p>实时日志投递任务的状态，取值有： <li>enabled: 已启用；</li> <li>disabled: 已停用；</li><li>deleted: 异常删除状态，请检查目的地腾讯云 CLS 日志集/日志主题是否已被删除。</li></p>
                     * @param _deliveryStatus <p>实时日志投递任务的状态，取值有： <li>enabled: 已启用；</li> <li>disabled: 已停用；</li><li>deleted: 异常删除状态，请检查目的地腾讯云 CLS 日志集/日志主题是否已被删除。</li></p>
                     * 
                     */
                    void SetDeliveryStatus(const std::string& _deliveryStatus);

                    /**
                     * 判断参数 DeliveryStatus 是否已赋值
                     * @return DeliveryStatus 是否已赋值
                     * 
                     */
                    bool DeliveryStatusHasBeenSet() const;

                    /**
                     * 获取<p>实时日志投递任务类型，取值有： <li>cls: 推送到腾讯云 CLS；</li> <li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li> <li>s3：推送到 AWS S3 兼容存储桶地址；</li><li>log_analysis：推送到 EdgeOne 日志分析。</li></p>
                     * @return TaskType <p>实时日志投递任务类型，取值有： <li>cls: 推送到腾讯云 CLS；</li> <li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li> <li>s3：推送到 AWS S3 兼容存储桶地址；</li><li>log_analysis：推送到 EdgeOne 日志分析。</li></p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>实时日志投递任务类型，取值有： <li>cls: 推送到腾讯云 CLS；</li> <li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li> <li>s3：推送到 AWS S3 兼容存储桶地址；</li><li>log_analysis：推送到 EdgeOne 日志分析。</li></p>
                     * @param _taskType <p>实时日志投递任务类型，取值有： <li>cls: 推送到腾讯云 CLS；</li> <li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li> <li>s3：推送到 AWS S3 兼容存储桶地址；</li><li>log_analysis：推送到 EdgeOne 日志分析。</li></p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下： <li>七层域名：domain.example.com；</li> <li>四层代理实例：sid-2s69eb5wcms7。</li></p>
                     * @return EntityList <p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下： <li>七层域名：domain.example.com；</li> <li>四层代理实例：sid-2s69eb5wcms7。</li></p>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置<p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下： <li>七层域名：domain.example.com；</li> <li>四层代理实例：sid-2s69eb5wcms7。</li></p>
                     * @param _entityList <p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下： <li>七层域名：domain.example.com；</li> <li>四层代理实例：sid-2s69eb5wcms7。</li></p>
                     * 
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     * 
                     */
                    bool EntityListHasBeenSet() const;

                    /**
                     * 获取<p>数据投递类型，取值有： <li>l7-access-logs：七层访问日志；</li><li>application：四层代理日志；</li> <li>function：边缘函数运行日志；</li> <li>web-attack：托管规则日志；</li> <li>domain：站点加速日志；</li> <li>web-rateLiming：速率限制和 CC 攻击防护日志；</li><li>web-rule：自定义规则日志；</li> <li>web-bot：Bot 管理日志。</li></p>
                     * @return LogType <p>数据投递类型，取值有： <li>l7-access-logs：七层访问日志；</li><li>application：四层代理日志；</li> <li>function：边缘函数运行日志；</li> <li>web-attack：托管规则日志；</li> <li>domain：站点加速日志；</li> <li>web-rateLiming：速率限制和 CC 攻击防护日志；</li><li>web-rule：自定义规则日志；</li> <li>web-bot：Bot 管理日志。</li></p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>数据投递类型，取值有： <li>l7-access-logs：七层访问日志；</li><li>application：四层代理日志；</li> <li>function：边缘函数运行日志；</li> <li>web-attack：托管规则日志；</li> <li>domain：站点加速日志；</li> <li>web-rateLiming：速率限制和 CC 攻击防护日志；</li><li>web-rule：自定义规则日志；</li> <li>web-bot：Bot 管理日志。</li></p>
                     * @param _logType <p>数据投递类型，取值有： <li>l7-access-logs：七层访问日志；</li><li>application：四层代理日志；</li> <li>function：边缘函数运行日志；</li> <li>web-attack：托管规则日志；</li> <li>domain：站点加速日志；</li> <li>web-rateLiming：速率限制和 CC 攻击防护日志；</li><li>web-rule：自定义规则日志；</li> <li>web-bot：Bot 管理日志。</li></p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据投递区域，取值有： <li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></p>
                     * @return Area <p>数据投递区域，取值有： <li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>数据投递区域，取值有： <li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></p>
                     * @param _area <p>数据投递区域，取值有： <li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>投递的预设字段列表。</p>
                     * @return Fields <p>投递的预设字段列表。</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>投递的预设字段列表。</p>
                     * @param _fields <p>投递的预设字段列表。</p>
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取<p>投递的自定义字段列表。</p>
                     * @return CustomFields <p>投递的自定义字段列表。</p>
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置<p>投递的自定义字段列表。</p>
                     * @param _customFields <p>投递的自定义字段列表。</p>
                     * 
                     */
                    void SetCustomFields(const std::vector<CustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取<p>日志投递的过滤条件。</p>
                     * @return DeliveryConditions <p>日志投递的过滤条件。</p>
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置<p>日志投递的过滤条件。</p>
                     * @param _deliveryConditions <p>日志投递的过滤条件。</p>
                     * 
                     */
                    void SetDeliveryConditions(const std::vector<DeliveryCondition>& _deliveryConditions);

                    /**
                     * 判断参数 DeliveryConditions 是否已赋值
                     * @return DeliveryConditions 是否已赋值
                     * 
                     */
                    bool DeliveryConditionsHasBeenSet() const;

                    /**
                     * 获取<p>采样比例，采用千分制，取值范围为1-1000，例如：605 表示采样比例为 60.5%。</p>
                     * @return Sample <p>采样比例，采用千分制，取值范围为1-1000，例如：605 表示采样比例为 60.5%。</p>
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置<p>采样比例，采用千分制，取值范围为1-1000，例如：605 表示采样比例为 60.5%。</p>
                     * @param _sample <p>采样比例，采用千分制，取值范围为1-1000，例如：605 表示采样比例为 60.5%。</p>
                     * 
                     */
                    void SetSample(const uint64_t& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                    /**
                     * 获取<p>日志投递的输出格式。出参为 null 时表示为默认格式，默认格式逻辑如下：</p><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFormat <p>日志投递的输出格式。出参为 null 时表示为默认格式，默认格式逻辑如下：</p><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置<p>日志投递的输出格式。出参为 null 时表示为默认格式，默认格式逻辑如下：</p><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFormat <p>日志投递的输出格式。出参为 null 时表示为默认格式，默认格式逻辑如下：</p><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogFormat(const LogFormat& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     * 
                     */
                    bool LogFormatHasBeenSet() const;

                    /**
                     * 获取<p>CLS 的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLS <p>CLS 的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置<p>CLS 的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLS <p>CLS 的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLS(const CLSTopic& _cLS);

                    /**
                     * 判断参数 CLS 是否已赋值
                     * @return CLS 是否已赋值
                     * 
                     */
                    bool CLSHasBeenSet() const;

                    /**
                     * 获取<p>自定义 HTTP 服务的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomEndpoint <p>自定义 HTTP 服务的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置<p>自定义 HTTP 服务的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customEndpoint <p>自定义 HTTP 服务的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomEndpoint(const CustomEndpoint& _customEndpoint);

                    /**
                     * 判断参数 CustomEndpoint 是否已赋值
                     * @return CustomEndpoint 是否已赋值
                     * 
                     */
                    bool CustomEndpointHasBeenSet() const;

                    /**
                     * 获取<p>AWS S3 兼容存储桶的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3 <p>AWS S3 兼容存储桶的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置<p>AWS S3 兼容存储桶的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3 <p>AWS S3 兼容存储桶的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3(const S3& _s3);

                    /**
                     * 判断参数 S3 是否已赋值
                     * @return S3 是否已赋值
                     * 
                     */
                    bool S3HasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
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
                     * 获取<p>更新时间。</p>
                     * @return UpdateTime <p>更新时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间。</p>
                     * @param _updateTime <p>更新时间。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实时日志投递任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>实时日志投递任务的名称。</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>实时日志投递任务的状态，取值有： <li>enabled: 已启用；</li> <li>disabled: 已停用；</li><li>deleted: 异常删除状态，请检查目的地腾讯云 CLS 日志集/日志主题是否已被删除。</li></p>
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>实时日志投递任务类型，取值有： <li>cls: 推送到腾讯云 CLS；</li> <li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li> <li>s3：推送到 AWS S3 兼容存储桶地址；</li><li>log_analysis：推送到 EdgeOne 日志分析。</li></p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下： <li>七层域名：domain.example.com；</li> <li>四层代理实例：sid-2s69eb5wcms7。</li></p>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * <p>数据投递类型，取值有： <li>l7-access-logs：七层访问日志；</li><li>application：四层代理日志；</li> <li>function：边缘函数运行日志；</li> <li>web-attack：托管规则日志；</li> <li>domain：站点加速日志；</li> <li>web-rateLiming：速率限制和 CC 攻击防护日志；</li><li>web-rule：自定义规则日志；</li> <li>web-bot：Bot 管理日志。</li></p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>数据投递区域，取值有： <li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>投递的预设字段列表。</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>投递的自定义字段列表。</p>
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>日志投递的过滤条件。</p>
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * <p>采样比例，采用千分制，取值范围为1-1000，例如：605 表示采样比例为 60.5%。</p>
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>日志投递的输出格式。出参为 null 时表示为默认格式，默认格式逻辑如下：</p><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * <p>CLS 的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * <p>自定义 HTTP 服务的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * <p>AWS S3 兼容存储桶的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REALTIMELOGDELIVERYTASK_H_
