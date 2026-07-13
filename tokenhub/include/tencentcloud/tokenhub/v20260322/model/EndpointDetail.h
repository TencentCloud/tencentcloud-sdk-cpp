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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_ENDPOINTDETAIL_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_ENDPOINTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 推理服务详情
                */
                class EndpointDetail : public AbstractModel
                {
                public:
                    EndpointDetail();
                    ~EndpointDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>推理服务 ID。</p>
                     * @return EndpointId <p>推理服务 ID。</p>
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置<p>推理服务 ID。</p>
                     * @param _endpointId <p>推理服务 ID。</p>
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取<p>服务名称。</p>
                     * @return EndpointName <p>服务名称。</p>
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置<p>服务名称。</p>
                     * @param _endpointName <p>服务名称。</p>
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取<p>模型名称。</p>
                     * @return ModelName <p>模型名称。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。</p>
                     * @param _modelName <p>模型名称。</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型 ID。</p>
                     * @return ModelId <p>模型 ID。</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型 ID。</p>
                     * @param _modelId <p>模型 ID。</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>状态。取值：ACTIVE（使用中）、INACTIVE（停止中）。</p>
                     * @return Status <p>状态。取值：ACTIVE（使用中）、INACTIVE（停止中）。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。取值：ACTIVE（使用中）、INACTIVE（停止中）。</p>
                     * @param _status <p>状态。取值：ACTIVE（使用中）、INACTIVE（停止中）。</p>
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
                     * 获取<p>服务类型。取值：TEXT_GENERATION（文本生成）、IMAGE_GENERATION（图片生成）、VIDEO_GENERATION（视频生成）。</p>
                     * @return ServiceType <p>服务类型。取值：TEXT_GENERATION（文本生成）、IMAGE_GENERATION（图片生成）、VIDEO_GENERATION（视频生成）。</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型。取值：TEXT_GENERATION（文本生成）、IMAGE_GENERATION（图片生成）、VIDEO_GENERATION（视频生成）。</p>
                     * @param _serviceType <p>服务类型。取值：TEXT_GENERATION（文本生成）、IMAGE_GENERATION（图片生成）、VIDEO_GENERATION（视频生成）。</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）</p><p>枚举值：</p><ul><li>FREE： 免费体验</li><li>TOKEN： 按 Token 计费</li></ul>
                     * @return ChargeType <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）</p><p>枚举值：</p><ul><li>FREE： 免费体验</li><li>TOKEN： 按 Token 计费</li></ul>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）</p><p>枚举值：</p><ul><li>FREE： 免费体验</li><li>TOKEN： 按 Token 计费</li></ul>
                     * @param _chargeType <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）</p><p>枚举值：</p><ul><li>FREE： 免费体验</li><li>TOKEN： 按 Token 计费</li></ul>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启付费计费。true 表示已开启付费资源包，false 表示仅使用免费额度。</p>
                     * @return PaymentEnabled <p>是否开启付费计费。true 表示已开启付费资源包，false 表示仅使用免费额度。</p>
                     * 
                     */
                    bool GetPaymentEnabled() const;

                    /**
                     * 设置<p>是否开启付费计费。true 表示已开启付费资源包，false 表示仅使用免费额度。</p>
                     * @param _paymentEnabled <p>是否开启付费计费。true 表示已开启付费资源包，false 表示仅使用免费额度。</p>
                     * 
                     */
                    void SetPaymentEnabled(const bool& _paymentEnabled);

                    /**
                     * 判断参数 PaymentEnabled 是否已赋值
                     * @return PaymentEnabled 是否已赋值
                     * 
                     */
                    bool PaymentEnabledHasBeenSet() const;

                    /**
                     * 获取<p>计费详情信息，JSON 格式字符串。不同 ChargeType 对应不同的 JSON 结构：</p><ul><li>免费额度信息（所有类型均可能包含）：{&quot;FreeQuota&quot;: {&quot;TotalQuota&quot;: 200, &quot;UsedQuota&quot;: 56, &quot;UsagePercent&quot;: 28, &quot;ExpireTime&quot;: &quot;2026-06-15T00:00:00Z&quot;}}</li><li>TPM 类型额外包含：{&quot;Tpm&quot;: {&quot;TpmInputLimit&quot;: 1000, &quot;TpmOutputLimit&quot;: 1000}}</li><li>其他类型：预留扩展。</li></ul>
                     * @return ChargeDetail <p>计费详情信息，JSON 格式字符串。不同 ChargeType 对应不同的 JSON 结构：</p><ul><li>免费额度信息（所有类型均可能包含）：{&quot;FreeQuota&quot;: {&quot;TotalQuota&quot;: 200, &quot;UsedQuota&quot;: 56, &quot;UsagePercent&quot;: 28, &quot;ExpireTime&quot;: &quot;2026-06-15T00:00:00Z&quot;}}</li><li>TPM 类型额外包含：{&quot;Tpm&quot;: {&quot;TpmInputLimit&quot;: 1000, &quot;TpmOutputLimit&quot;: 1000}}</li><li>其他类型：预留扩展。</li></ul>
                     * 
                     */
                    std::string GetChargeDetail() const;

                    /**
                     * 设置<p>计费详情信息，JSON 格式字符串。不同 ChargeType 对应不同的 JSON 结构：</p><ul><li>免费额度信息（所有类型均可能包含）：{&quot;FreeQuota&quot;: {&quot;TotalQuota&quot;: 200, &quot;UsedQuota&quot;: 56, &quot;UsagePercent&quot;: 28, &quot;ExpireTime&quot;: &quot;2026-06-15T00:00:00Z&quot;}}</li><li>TPM 类型额外包含：{&quot;Tpm&quot;: {&quot;TpmInputLimit&quot;: 1000, &quot;TpmOutputLimit&quot;: 1000}}</li><li>其他类型：预留扩展。</li></ul>
                     * @param _chargeDetail <p>计费详情信息，JSON 格式字符串。不同 ChargeType 对应不同的 JSON 结构：</p><ul><li>免费额度信息（所有类型均可能包含）：{&quot;FreeQuota&quot;: {&quot;TotalQuota&quot;: 200, &quot;UsedQuota&quot;: 56, &quot;UsagePercent&quot;: 28, &quot;ExpireTime&quot;: &quot;2026-06-15T00:00:00Z&quot;}}</li><li>TPM 类型额外包含：{&quot;Tpm&quot;: {&quot;TpmInputLimit&quot;: 1000, &quot;TpmOutputLimit&quot;: 1000}}</li><li>其他类型：预留扩展。</li></ul>
                     * 
                     */
                    void SetChargeDetail(const std::string& _chargeDetail);

                    /**
                     * 判断参数 ChargeDetail 是否已赋值
                     * @return ChargeDetail 是否已赋值
                     * 
                     */
                    bool ChargeDetailHasBeenSet() const;

                    /**
                     * 获取<p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足，格式为 INSUFFICIENT_BALANCE:&lt;待支付资源ID&gt;）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。当值为 INSUFFICIENT_BALANCE 时，冒号后附带待支付的 TPM 包资源 ID，前端可据此引导用户前往对应订单页完成支付。</p>
                     * @return StopReason <p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足，格式为 INSUFFICIENT_BALANCE:&lt;待支付资源ID&gt;）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。当值为 INSUFFICIENT_BALANCE 时，冒号后附带待支付的 TPM 包资源 ID，前端可据此引导用户前往对应订单页完成支付。</p>
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置<p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足，格式为 INSUFFICIENT_BALANCE:&lt;待支付资源ID&gt;）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。当值为 INSUFFICIENT_BALANCE 时，冒号后附带待支付的 TPM 包资源 ID，前端可据此引导用户前往对应订单页完成支付。</p>
                     * @param _stopReason <p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足，格式为 INSUFFICIENT_BALANCE:&lt;待支付资源ID&gt;）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。当值为 INSUFFICIENT_BALANCE 时，冒号后附带待支付的 TPM 包资源 ID，前端可据此引导用户前往对应订单页完成支付。</p>
                     * 
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取<p>TPM（每分钟 Token 限流）。当推理服务未单独设置时，回退为关联模型的默认 TPM 值。</p>
                     * @return TPM <p>TPM（每分钟 Token 限流）。当推理服务未单独设置时，回退为关联模型的默认 TPM 值。</p>
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置<p>TPM（每分钟 Token 限流）。当推理服务未单独设置时，回退为关联模型的默认 TPM 值。</p>
                     * @param _tPM <p>TPM（每分钟 Token 限流）。当推理服务未单独设置时，回退为关联模型的默认 TPM 值。</p>
                     * 
                     */
                    void SetTPM(const int64_t& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                    /**
                     * 获取<p>自动调整配额</p>
                     * @return AutoAdjustQuota <p>自动调整配额</p>
                     * 
                     */
                    int64_t GetAutoAdjustQuota() const;

                    /**
                     * 设置<p>自动调整配额</p>
                     * @param _autoAdjustQuota <p>自动调整配额</p>
                     * 
                     */
                    void SetAutoAdjustQuota(const int64_t& _autoAdjustQuota);

                    /**
                     * 判断参数 AutoAdjustQuota 是否已赋值
                     * @return AutoAdjustQuota 是否已赋值
                     * 
                     */
                    bool AutoAdjustQuotaHasBeenSet() const;

                    /**
                     * 获取<p>RPM（每分钟请求数限流）。当推理服务未单独设置时，回退为关联模型的默认 RPM 值。</p>
                     * @return RPM <p>RPM（每分钟请求数限流）。当推理服务未单独设置时，回退为关联模型的默认 RPM 值。</p>
                     * 
                     */
                    int64_t GetRPM() const;

                    /**
                     * 设置<p>RPM（每分钟请求数限流）。当推理服务未单独设置时，回退为关联模型的默认 RPM 值。</p>
                     * @param _rPM <p>RPM（每分钟请求数限流）。当推理服务未单独设置时，回退为关联模型的默认 RPM 值。</p>
                     * 
                     */
                    void SetRPM(const int64_t& _rPM);

                    /**
                     * 判断参数 RPM 是否已赋值
                     * @return RPM 是否已赋值
                     * 
                     */
                    bool RPMHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务 ID。</p>
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * <p>服务名称。</p>
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * <p>模型名称。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型 ID。</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>状态。取值：ACTIVE（使用中）、INACTIVE（停止中）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>服务类型。取值：TEXT_GENERATION（文本生成）、IMAGE_GENERATION（图片生成）、VIDEO_GENERATION（视频生成）。</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）</p><p>枚举值：</p><ul><li>FREE： 免费体验</li><li>TOKEN： 按 Token 计费</li></ul>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>是否开启付费计费。true 表示已开启付费资源包，false 表示仅使用免费额度。</p>
                     */
                    bool m_paymentEnabled;
                    bool m_paymentEnabledHasBeenSet;

                    /**
                     * <p>计费详情信息，JSON 格式字符串。不同 ChargeType 对应不同的 JSON 结构：</p><ul><li>免费额度信息（所有类型均可能包含）：{&quot;FreeQuota&quot;: {&quot;TotalQuota&quot;: 200, &quot;UsedQuota&quot;: 56, &quot;UsagePercent&quot;: 28, &quot;ExpireTime&quot;: &quot;2026-06-15T00:00:00Z&quot;}}</li><li>TPM 类型额外包含：{&quot;Tpm&quot;: {&quot;TpmInputLimit&quot;: 1000, &quot;TpmOutputLimit&quot;: 1000}}</li><li>其他类型：预留扩展。</li></ul>
                     */
                    std::string m_chargeDetail;
                    bool m_chargeDetailHasBeenSet;

                    /**
                     * <p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足，格式为 INSUFFICIENT_BALANCE:&lt;待支付资源ID&gt;）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。当值为 INSUFFICIENT_BALANCE 时，冒号后附带待支付的 TPM 包资源 ID，前端可据此引导用户前往对应订单页完成支付。</p>
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * <p>TPM（每分钟 Token 限流）。当推理服务未单独设置时，回退为关联模型的默认 TPM 值。</p>
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                    /**
                     * <p>自动调整配额</p>
                     */
                    int64_t m_autoAdjustQuota;
                    bool m_autoAdjustQuotaHasBeenSet;

                    /**
                     * <p>RPM（每分钟请求数限流）。当推理服务未单独设置时，回退为关联模型的默认 RPM 值。</p>
                     */
                    int64_t m_rPM;
                    bool m_rPMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_ENDPOINTDETAIL_H_
