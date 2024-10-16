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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRealtimeLogDeliveryTask请求参数结构体
                */
                class CreateRealtimeLogDeliveryTaskRequest : public AbstractModel
                {
                public:
                    CreateRealtimeLogDeliveryTaskRequest();
                    ~CreateRealtimeLogDeliveryTaskRequest() = default;
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
                     * 获取实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。
                     * @return TaskName 实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。
                     * @param _taskName 实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。
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
                     * 获取实时日志投递任务类型，取值有：
<li>cls: 推送到腾讯云 CLS；</li>
<li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li>
<li>s3：推送到 AWS S3 兼容存储桶地址。</li>
                     * @return TaskType 实时日志投递任务类型，取值有：
<li>cls: 推送到腾讯云 CLS；</li>
<li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li>
<li>s3：推送到 AWS S3 兼容存储桶地址。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置实时日志投递任务类型，取值有：
<li>cls: 推送到腾讯云 CLS；</li>
<li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li>
<li>s3：推送到 AWS S3 兼容存储桶地址。</li>
                     * @param _taskType 实时日志投递任务类型，取值有：
<li>cls: 推送到腾讯云 CLS；</li>
<li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li>
<li>s3：推送到 AWS S3 兼容存储桶地址。</li>
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
                     * 获取实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>
                     * @return EntityList 实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>
                     * @param _entityList 实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>
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
                     * 获取数据投递类型，取值有：
<li>domain：站点加速日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制和 CC 攻击防护日志；</li>
<li>web-attack：托管规则日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     * @return LogType 数据投递类型，取值有：
<li>domain：站点加速日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制和 CC 攻击防护日志；</li>
<li>web-attack：托管规则日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置数据投递类型，取值有：
<li>domain：站点加速日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制和 CC 攻击防护日志；</li>
<li>web-attack：托管规则日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     * @param _logType 数据投递类型，取值有：
<li>domain：站点加速日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制和 CC 攻击防护日志；</li>
<li>web-attack：托管规则日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
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
                     * 获取数据投递区域，取值有：
<li>mainland：中国大陆境内；</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @return Area 数据投递区域，取值有：
<li>mainland：中国大陆境内；</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据投递区域，取值有：
<li>mainland：中国大陆境内；</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @param _area 数据投递区域，取值有：
<li>mainland：中国大陆境内；</li>
<li>overseas：全球（不含中国大陆）。</li>
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
                     * 获取投递的预设字段列表。
                     * @return Fields 投递的预设字段列表。
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置投递的预设字段列表。
                     * @param _fields 投递的预设字段列表。
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
                     * 获取投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     * @return CustomFields 投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     * @param _customFields 投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
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
                     * 获取日志投递的过滤条件，不填表示投递全量日志。
                     * @return DeliveryConditions 日志投递的过滤条件，不填表示投递全量日志。
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置日志投递的过滤条件，不填表示投递全量日志。
                     * @param _deliveryConditions 日志投递的过滤条件，不填表示投递全量日志。
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
                     * 获取采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填表示采样比例为 100%。
                     * @return Sample 采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填表示采样比例为 100%。
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填表示采样比例为 100%。
                     * @param _sample 采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填表示采样比例为 100%。
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
                     * 获取日志投递的输出格式。不填表示为默认格式，默认格式逻辑如下：
<li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li>
<li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li>特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     * @return LogFormat 日志投递的输出格式。不填表示为默认格式，默认格式逻辑如下：
<li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li>
<li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li>特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置日志投递的输出格式。不填表示为默认格式，默认格式逻辑如下：
<li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li>
<li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li>特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     * @param _logFormat 日志投递的输出格式。不填表示为默认格式，默认格式逻辑如下：
<li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li>
<li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li>特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
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
                     * 获取CLS 的配置信息。当 TaskType 取值为 cls 时，该参数必填。
                     * @return CLS CLS 的配置信息。当 TaskType 取值为 cls 时，该参数必填。
                     * 
                     */
                    CLSTopic GetCLS() const;

                    /**
                     * 设置CLS 的配置信息。当 TaskType 取值为 cls 时，该参数必填。
                     * @param _cLS CLS 的配置信息。当 TaskType 取值为 cls 时，该参数必填。
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
                     * 获取自定义 HTTP 服务的配置信息。当 TaskType 取值为 custom_endpoint 时，该参数必填。
                     * @return CustomEndpoint 自定义 HTTP 服务的配置信息。当 TaskType 取值为 custom_endpoint 时，该参数必填。
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置自定义 HTTP 服务的配置信息。当 TaskType 取值为 custom_endpoint 时，该参数必填。
                     * @param _customEndpoint 自定义 HTTP 服务的配置信息。当 TaskType 取值为 custom_endpoint 时，该参数必填。
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
                     * 获取AWS S3 兼容存储桶的配置信息。当 TaskType 取值为 s3 时，该参数必填。
                     * @return S3 AWS S3 兼容存储桶的配置信息。当 TaskType 取值为 s3 时，该参数必填。
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置AWS S3 兼容存储桶的配置信息。当 TaskType 取值为 s3 时，该参数必填。
                     * @param _s3 AWS S3 兼容存储桶的配置信息。当 TaskType 取值为 s3 时，该参数必填。
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
                     * 实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 实时日志投递任务类型，取值有：
<li>cls: 推送到腾讯云 CLS；</li>
<li>custom_endpoint：推送到自定义 HTTP(S) 地址；</li>
<li>s3：推送到 AWS S3 兼容存储桶地址。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：
<li>七层域名：domain.example.com；</li>
<li>四层代理实例：sid-2s69eb5wcms7。</li>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * 数据投递类型，取值有：
<li>domain：站点加速日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制和 CC 攻击防护日志；</li>
<li>web-attack：托管规则日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 数据投递区域，取值有：
<li>mainland：中国大陆境内；</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 投递的预设字段列表。
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 投递的自定义字段列表，支持在 HTTP 请求头、响应头、Cookie、请求正文中提取指定内容。自定义字段名称不能重复，且最多不能超过 200 个字段。单个实时日志推送任务最多添加 5 个请求正文类型的自定义字段。目前仅站点加速日志（LogType=domain）支持添加自定义字段。
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * 日志投递的过滤条件，不填表示投递全量日志。
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * 采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填表示采样比例为 100%。
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * 日志投递的输出格式。不填表示为默认格式，默认格式逻辑如下：
<li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li>
<li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li>特别地，当 TaskType 取值为 cls 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * CLS 的配置信息。当 TaskType 取值为 cls 时，该参数必填。
                     */
                    CLSTopic m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * 自定义 HTTP 服务的配置信息。当 TaskType 取值为 custom_endpoint 时，该参数必填。
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * AWS S3 兼容存储桶的配置信息。当 TaskType 取值为 s3 时，该参数必填。
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREALTIMELOGDELIVERYTASKREQUEST_H_
