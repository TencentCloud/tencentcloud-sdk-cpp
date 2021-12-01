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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * apm实例信息
                */
                class ApmInstanceDetail : public AbstractModel
                {
                public:
                    ApmInstanceDetail();
                    ~ApmInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AmountOfUsedStorage 存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetAmountOfUsedStorage() const;

                    /**
                     * 设置存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AmountOfUsedStorage 存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAmountOfUsedStorage(const double& _amountOfUsedStorage);

                    /**
                     * 判断参数 AmountOfUsedStorage 是否已赋值
                     * @return AmountOfUsedStorage 是否已赋值
                     */
                    bool AmountOfUsedStorageHasBeenSet() const;

                    /**
                     * 获取实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 实例名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 实例名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateUin 创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取该实例已上报的服务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount 该实例已上报的服务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置该实例已上报的服务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceCount 该实例已上报的服务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountOfReportSpanPerDay 日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCountOfReportSpanPerDay() const;

                    /**
                     * 设置日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CountOfReportSpanPerDay 日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCountOfReportSpanPerDay(const int64_t& _countOfReportSpanPerDay);

                    /**
                     * 判断参数 CountOfReportSpanPerDay 是否已赋值
                     * @return CountOfReportSpanPerDay 是否已赋值
                     */
                    bool CountOfReportSpanPerDayHasBeenSet() const;

                    /**
                     * 获取AppId信息
                     * @return AppId AppId信息
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppId信息
                     * @param AppId AppId信息
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceDuration Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TraceDuration Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpanDailyCounters 实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSpanDailyCounters() const;

                    /**
                     * 设置实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpanDailyCounters 实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpanDailyCounters(const int64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInstance 实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBillingInstance() const;

                    /**
                     * 设置实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BillingInstance 实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBillingInstance(const int64_t& _billingInstance);

                    /**
                     * 判断参数 BillingInstance 是否已赋值
                     * @return BillingInstance 是否已赋值
                     */
                    bool BillingInstanceHasBeenSet() const;

                    /**
                     * 获取错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrRateThreshold 错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrRateThreshold 错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrRateThreshold(const int64_t& _errRateThreshold);

                    /**
                     * 判断参数 ErrRateThreshold 是否已赋值
                     * @return ErrRateThreshold 是否已赋值
                     */
                    bool ErrRateThresholdHasBeenSet() const;

                    /**
                     * 获取采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleRate 采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleRate 采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorSample 是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrorSample() const;

                    /**
                     * 设置是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorSample 是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorSample(const int64_t& _errorSample);

                    /**
                     * 判断参数 ErrorSample 是否已赋值
                     * @return ErrorSample 是否已赋值
                     */
                    bool ErrorSampleHasBeenSet() const;

                    /**
                     * 获取慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlowRequestSavedThreshold 慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSlowRequestSavedThreshold() const;

                    /**
                     * 设置慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SlowRequestSavedThreshold 慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSlowRequestSavedThreshold(const int64_t& _slowRequestSavedThreshold);

                    /**
                     * 判断参数 SlowRequestSavedThreshold 是否已赋值
                     * @return SlowRequestSavedThreshold 是否已赋值
                     */
                    bool SlowRequestSavedThresholdHasBeenSet() const;

                private:

                    /**
                     * 存储使用量(MB)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_amountOfUsedStorage;
                    bool m_amountOfUsedStorageHasBeenSet;

                    /**
                     * 实例名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例所属tag列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建人Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 该实例已上报的服务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 日均上报Span数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_countOfReportSpanPerDay;
                    bool m_countOfReportSpanPerDayHasBeenSet;

                    /**
                     * AppId信息
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Trace数据保存时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 实例描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例上报额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * 实例是否开通计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_billingInstance;
                    bool m_billingInstanceHasBeenSet;

                    /**
                     * 错误率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * 采样率阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 是否开启错误采样 0  关 1 开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorSample;
                    bool m_errorSampleHasBeenSet;

                    /**
                     * 慢调用保存阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_slowRequestSavedThreshold;
                    bool m_slowRequestSavedThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
