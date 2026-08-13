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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomField.h>
#include <tencentcloud/teo/v20220901/model/CustomExpressionField.h>
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
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
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
                     * 获取<p>实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。</p>
                     * @return TaskName <p>实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。</p>
                     * @param _taskName <p>实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。</p>
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
                     * 获取<p>实时日志投递任务的状态，取值有：</p><li>enabled: 启用；</li><li>disabled: 停用。</li>不填保持原有配置。
                     * @return DeliveryStatus <p>实时日志投递任务的状态，取值有：</p><li>enabled: 启用；</li><li>disabled: 停用。</li>不填保持原有配置。
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置<p>实时日志投递任务的状态，取值有：</p><li>enabled: 启用；</li><li>disabled: 停用。</li>不填保持原有配置。
                     * @param _deliveryStatus <p>实时日志投递任务的状态，取值有：</p><li>enabled: 启用；</li><li>disabled: 停用。</li>不填保持原有配置。
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
                     * 获取<p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：</p><li>七层域名：domain.example.com；</li><li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。<p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/80690">DescribeApplicationProxies</a></p>
                     * @return EntityList <p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：</p><li>七层域名：domain.example.com；</li><li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。<p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/80690">DescribeApplicationProxies</a></p>
                     * 
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置<p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：</p><li>七层域名：domain.example.com；</li><li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。<p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/80690">DescribeApplicationProxies</a></p>
                     * @param _entityList <p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：</p><li>七层域名：domain.example.com；</li><li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。<p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/80690">DescribeApplicationProxies</a></p>
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
                     * 获取<p>投递的预设字段列表。不填保持原有配置。</p><p>取值参考：DescribeLogFields</p>
                     * @return Fields <p>投递的预设字段列表。不填保持原有配置。</p><p>取值参考：DescribeLogFields</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>投递的预设字段列表。不填保持原有配置。</p><p>取值参考：DescribeLogFields</p>
                     * @param _fields <p>投递的预设字段列表。不填保持原有配置。</p><p>取值参考：DescribeLogFields</p>
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
                     * 获取<p>投递的自定义日志字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，详见 <a href="">自定义日志字段表达式</a>。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段，允许配置的自定义字段个数有配额限制，如遇配额不足请 <a href="https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE">联系我们</a> 。</p>
                     * @return CustomFields <p>投递的自定义日志字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，详见 <a href="">自定义日志字段表达式</a>。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段，允许配置的自定义字段个数有配额限制，如遇配额不足请 <a href="https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE">联系我们</a> 。</p>
                     * 
                     */
                    std::vector<CustomField> GetCustomFields() const;

                    /**
                     * 设置<p>投递的自定义日志字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，详见 <a href="">自定义日志字段表达式</a>。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段，允许配置的自定义字段个数有配额限制，如遇配额不足请 <a href="https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE">联系我们</a> 。</p>
                     * @param _customFields <p>投递的自定义日志字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，详见 <a href="">自定义日志字段表达式</a>。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段，允许配置的自定义字段个数有配额限制，如遇配额不足请 <a href="https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE">联系我们</a> 。</p>
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
                     * 获取<p>投递的自定义表达式字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，使用详情见 [自定义日志字段表达式]()。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段。允许配置的自定义字段个数有配额限制，如遇配额不足请 [联系我们](https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE) 。<br>**注意**：若 CustomExpressionFields 中存在命名 与 Fields 和 CustomFields 中同名的字段，以  CustomExpressionFields 中的取值为准。</p>
                     * @return CustomExpressionFields <p>投递的自定义表达式字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，使用详情见 [自定义日志字段表达式]()。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段。允许配置的自定义字段个数有配额限制，如遇配额不足请 [联系我们](https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE) 。<br>**注意**：若 CustomExpressionFields 中存在命名 与 Fields 和 CustomFields 中同名的字段，以  CustomExpressionFields 中的取值为准。</p>
                     * 
                     */
                    std::vector<CustomExpressionField> GetCustomExpressionFields() const;

                    /**
                     * 设置<p>投递的自定义表达式字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，使用详情见 [自定义日志字段表达式]()。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段。允许配置的自定义字段个数有配额限制，如遇配额不足请 [联系我们](https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE) 。<br>**注意**：若 CustomExpressionFields 中存在命名 与 Fields 和 CustomFields 中同名的字段，以  CustomExpressionFields 中的取值为准。</p>
                     * @param _customExpressionFields <p>投递的自定义表达式字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，使用详情见 [自定义日志字段表达式]()。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段。允许配置的自定义字段个数有配额限制，如遇配额不足请 [联系我们](https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE) 。<br>**注意**：若 CustomExpressionFields 中存在命名 与 Fields 和 CustomFields 中同名的字段，以  CustomExpressionFields 中的取值为准。</p>
                     * 
                     */
                    void SetCustomExpressionFields(const std::vector<CustomExpressionField>& _customExpressionFields);

                    /**
                     * 判断参数 CustomExpressionFields 是否已赋值
                     * @return CustomExpressionFields 是否已赋值
                     * 
                     */
                    bool CustomExpressionFieldsHasBeenSet() const;

                    /**
                     * 获取<p>日志投递的过滤条件。不填表示投递全量日志。</p>
                     * @return DeliveryConditions <p>日志投递的过滤条件。不填表示投递全量日志。</p>
                     * 
                     */
                    std::vector<DeliveryCondition> GetDeliveryConditions() const;

                    /**
                     * 设置<p>日志投递的过滤条件。不填表示投递全量日志。</p>
                     * @param _deliveryConditions <p>日志投递的过滤条件。不填表示投递全量日志。</p>
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
                     * 获取<p>采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。</p>
                     * @return Sample <p>采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。</p>
                     * 
                     */
                    uint64_t GetSample() const;

                    /**
                     * 设置<p>采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。</p>
                     * @param _sample <p>采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。</p>
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
                     * 获取<p>日志投递的输出格式，使用详情见 <a href="https://cloud.tencent.com/document/product/1552/110448">自定义日志输出格式</a>。不填表示为默认格式，默认格式逻辑如下：<ul><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li></ul>特别地，当 TaskType 取值为 cls 或 log_analysis 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。</p>
                     * @return LogFormat <p>日志投递的输出格式，使用详情见 <a href="https://cloud.tencent.com/document/product/1552/110448">自定义日志输出格式</a>。不填表示为默认格式，默认格式逻辑如下：<ul><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li></ul>特别地，当 TaskType 取值为 cls 或 log_analysis 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。</p>
                     * 
                     */
                    LogFormat GetLogFormat() const;

                    /**
                     * 设置<p>日志投递的输出格式，使用详情见 <a href="https://cloud.tencent.com/document/product/1552/110448">自定义日志输出格式</a>。不填表示为默认格式，默认格式逻辑如下：<ul><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li></ul>特别地，当 TaskType 取值为 cls 或 log_analysis 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。</p>
                     * @param _logFormat <p>日志投递的输出格式，使用详情见 <a href="https://cloud.tencent.com/document/product/1552/110448">自定义日志输出格式</a>。不填表示为默认格式，默认格式逻辑如下：<ul><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li></ul>特别地，当 TaskType 取值为 cls 或 log_analysis 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。</p>
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
                     * 获取<p>自定义 HTTP 服务的配置信息，不填保持原有配置。</p>
                     * @return CustomEndpoint <p>自定义 HTTP 服务的配置信息，不填保持原有配置。</p>
                     * 
                     */
                    CustomEndpoint GetCustomEndpoint() const;

                    /**
                     * 设置<p>自定义 HTTP 服务的配置信息，不填保持原有配置。</p>
                     * @param _customEndpoint <p>自定义 HTTP 服务的配置信息，不填保持原有配置。</p>
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
                     * 获取<p>AWS S3 兼容存储桶的配置信息，不填保持原有配置。</p>
                     * @return S3 <p>AWS S3 兼容存储桶的配置信息，不填保持原有配置。</p>
                     * 
                     */
                    S3 GetS3() const;

                    /**
                     * 设置<p>AWS S3 兼容存储桶的配置信息，不填保持原有配置。</p>
                     * @param _s3 <p>AWS S3 兼容存储桶的配置信息，不填保持原有配置。</p>
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
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>实时日志投递任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>实时日志投递任务的名称，格式为数字、英文、-和_组合，最多 200 个字符。不填保持原有配置。</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>实时日志投递任务的状态，取值有：</p><li>enabled: 启用；</li><li>disabled: 停用。</li>不填保持原有配置。
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>实时日志投递任务对应的实体（七层域名或者四层代理实例）列表。取值示例如下：</p><li>七层域名：domain.example.com；</li><li>四层代理实例：sid-2s69eb5wcms7。</li>不填保持原有配置。<p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/80690">DescribeApplicationProxies</a></p>
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * <p>投递的预设字段列表。不填保持原有配置。</p><p>取值参考：DescribeLogFields</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>投递的自定义日志字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，详见 <a href="">自定义日志字段表达式</a>。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段，允许配置的自定义字段个数有配额限制，如遇配额不足请 <a href="https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE">联系我们</a> 。</p>
                     */
                    std::vector<CustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>投递的自定义表达式字段列表，可以通过自定义日志推送字段名称和取值表达式，实现个性化的实时日志内容推送，使用详情见 [自定义日志字段表达式]()。<br>仅七层访问日志（LogType= l7-access-logs 或 domain）支持添加自定义字段。允许配置的自定义字段个数有配额限制，如遇配额不足请 [联系我们](https://cloud.tencent.com/online-service?from=sales&amp;source=PRESALE) 。<br>**注意**：若 CustomExpressionFields 中存在命名 与 Fields 和 CustomFields 中同名的字段，以  CustomExpressionFields 中的取值为准。</p>
                     */
                    std::vector<CustomExpressionField> m_customExpressionFields;
                    bool m_customExpressionFieldsHasBeenSet;

                    /**
                     * <p>日志投递的过滤条件。不填表示投递全量日志。</p>
                     */
                    std::vector<DeliveryCondition> m_deliveryConditions;
                    bool m_deliveryConditionsHasBeenSet;

                    /**
                     * <p>采样比例，采用千分制，取值范围为1-1000，例如：填写 605 表示采样比例为 60.5%。不填保持原有配置。</p>
                     */
                    uint64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * <p>日志投递的输出格式，使用详情见 <a href="https://cloud.tencent.com/document/product/1552/110448">自定义日志输出格式</a>。不填表示为默认格式，默认格式逻辑如下：<ul><li>当 TaskType 取值为 custom_endpoint 时，默认格式为多个 JSON 对象组成的数组，每个 JSON 对象为一条日志；</li><li>当 TaskType 取值为 s3 时，默认格式为 JSON Lines；</li></ul>特别地，当 TaskType 取值为 cls 或 log_analysis 时，LogFormat.FormatType 的值只能为 json，且 LogFormat 中其他参数将被忽略，建议不传 LogFormat。</p>
                     */
                    LogFormat m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * <p>自定义 HTTP 服务的配置信息，不填保持原有配置。</p>
                     */
                    CustomEndpoint m_customEndpoint;
                    bool m_customEndpointHasBeenSet;

                    /**
                     * <p>AWS S3 兼容存储桶的配置信息，不填保持原有配置。</p>
                     */
                    S3 m_s3;
                    bool m_s3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREALTIMELOGDELIVERYTASKREQUEST_H_
