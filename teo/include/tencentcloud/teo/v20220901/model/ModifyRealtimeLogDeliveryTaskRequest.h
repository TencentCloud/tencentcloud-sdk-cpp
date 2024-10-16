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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomField.h>
#include <tencentcloud/teo/v20220901/model/DeliveryCondition.h>
#include <tencentcloud/teo/v20220901/model/LogFormat.h>
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
                * ModifyRealtimeLogDeliveryTask请求参数结构体
                */
                class ModifyRealtimeLogDeliveryTaskRequest : public AbstractModel
                {
                public:
                    ModifyRealtimeLogDeliveryTaskRequest();
                    ~ModifyRealtimeLogDeliveryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取实时日志投递任务 ID。
                     * @return TaskId 实时日志投递任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置实时日志投递任务 ID。
                     * @param _taskId 实时日志投递任务 ID。
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
                     * 获取实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。
                     * @return TaskName 实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。
                     * @param _taskName 实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。
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
                     * 获取实时日志投递任务的状态，取值有：
<li>enabled: 启用；</li>
<li>disabled: 停用。</li>不填保持原有配置。
                     * @return DeliveryStatus 实时日志投递任务的状态，取值有：
<li>enabled: 启用；</li>
<li>disabled: 停用。</li>不填保持原有配置。
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置实时日志投递任务的状态，取值有：
<li>enabled: 启用；</li>
<li>disabled: 停用。</li>不填保持原有配置。
                     * @param _deliveryStatus 实时日志投递任务的状态，取值有：
<li>enabled: 启用；</li>
<li>disabled: 停用。</li>不填保持原有配置。
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
                     * 获取实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。
                     * @return EntityList 实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。
                     * @param _entityList 实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。
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
                     * 获取投递的预设字段列表。不填保持原有配置。
                     * @return Fields 投递的预设字段列表。不填保持原有配置。
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置投递的预设字段列表。不填保持原有配置。
                     * @param _fields 投递的预设字段列表。不填保持原有配置。
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
                     * 获取投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。不填保持原有配置。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     * @return CustomFields 投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。不填保持原有配置。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。不填保持原有配置。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     * @param _customFields 投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。不填保持原有配置。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
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
                     * 获取日志投递的过滤条件。不填表示投递全量日志。
                     * @return DeliveryConditions 日志投递的过滤条件。不填表示投递全量日志。
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置日志投递的过滤条件。不填表示投递全量日志。
                     * @param _deliveryConditions 日志投递的过滤条件。不填表示投递全量日志。
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
                     * 获取采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。
                     * @return Sample 采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。
                     * @param _sample 采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。
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
                     * 获取日志投递的输出格式。不填保持原有配置。
特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     * @return LogFormat 日志投递的输出格式。不填保持原有配置。
特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置日志投递的输出格式。不填保持原有配置。
特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     * @param _logFormat 日志投递的输出格式。不填保持原有配置。
特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
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
                     * 获取自定义 HTTP 服务的配置信息，不填保持原有配置。 
                     * @return CustomEndpoint 自定义 HTTP 服务的配置信息，不填保持原有配置。 
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置自定义 HTTP 服务的配置信息，不填保持原有配置。 
                     * @param _customEndpoint 自定义 HTTP 服务的配置信息，不填保持原有配置。 
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
                     * 获取AWS S3 兼容存储桶的配置信息，不填保持原有配置。
                     * @return S3 AWS S3 兼容存储桶的配置信息，不填保持原有配置。
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置AWS S3 兼容存储桶的配置信息，不填保持原有配置。
                     * @param _s3 AWS S3 兼容存储桶的配置信息，不填保持原有配置。
                     * 
                     */
                    void SetS3(const S3& _s3);

                    /**
                     * 判断参数 S3 是否已赋值
                     * @return S3 是否已赋值
                     * 
                     */
                    bool S3HasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实时日志投递任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 实时日志投递任务的状态，取值有：
<li>enabled: 启用；</li>
<li>disabled: 停用。</li>不填保持原有配置。
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * 实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * 投递的预设字段列表。不填保持原有配置。
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。不填保持原有配置。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * 日志投递的过滤条件。不填表示投递全量日志。
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * 采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * 日志投递的输出格式。不填保持原有配置。
特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * 自定义 HTTP 服务的配置信息，不填保持原有配置。 
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * AWS S3 兼容存储桶的配置信息，不填保持原有配置。
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
