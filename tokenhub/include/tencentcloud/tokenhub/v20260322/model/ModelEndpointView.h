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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELENDPOINTVIEW_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELENDPOINTVIEW_H_

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
                * 模型接入点概览信息
                */
                class ModelEndpointView : public AbstractModel
                {
                public:
                    ModelEndpointView();
                    ~ModelEndpointView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>推理服务 ID。网关默认创建的 id 与模型 id 相同；控制台自定义推理服务以 ep- 开头。</p>
                     * @return EndpointId <p>推理服务 ID。网关默认创建的 id 与模型 id 相同；控制台自定义推理服务以 ep- 开头。</p>
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置<p>推理服务 ID。网关默认创建的 id 与模型 id 相同；控制台自定义推理服务以 ep- 开头。</p>
                     * @param _endpointId <p>推理服务 ID。网关默认创建的 id 与模型 id 相同；控制台自定义推理服务以 ep- 开头。</p>
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
                     * 获取<p>推理服务名称。未激活时与 ModelId 相同。</p>
                     * @return EndpointName <p>推理服务名称。未激活时与 ModelId 相同。</p>
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置<p>推理服务名称。未激活时与 ModelId 相同。</p>
                     * @param _endpointName <p>推理服务名称。未激活时与 ModelId 相同。</p>
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
                     * 获取<p>状态。取值：ACTIVE（运行中）、INACTIVE（已停止）。</p>
                     * @return Status <p>状态。取值：ACTIVE（运行中）、INACTIVE（已停止）。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。取值：ACTIVE（运行中）、INACTIVE（已停止）。</p>
                     * @param _status <p>状态。取值：ACTIVE（运行中）、INACTIVE（已停止）。</p>
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
                     * 获取<p>服务类型。固定为 TEXT_GENERATION（文本生成）。</p>
                     * @return ServiceType <p>服务类型。固定为 TEXT_GENERATION（文本生成）。</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型。固定为 TEXT_GENERATION（文本生成）。</p>
                     * @param _serviceType <p>服务类型。固定为 TEXT_GENERATION（文本生成）。</p>
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
                     * 获取<p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）。未激活时为空。</p>
                     * @return ChargeType <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）。未激活时为空。</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）。未激活时为空。</p>
                     * @param _chargeType <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）。未激活时为空。</p>
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
                     * 获取<p>是否已开启后付费。true 表示已开启，false 表示未开启。未激活时为 false。</p>
                     * @return PaymentEnabled <p>是否已开启后付费。true 表示已开启，false 表示未开启。未激活时为 false。</p>
                     * 
                     */
                    bool GetPaymentEnabled() const;

                    /**
                     * 设置<p>是否已开启后付费。true 表示已开启，false 表示未开启。未激活时为 false。</p>
                     * @param _paymentEnabled <p>是否已开启后付费。true 表示已开启，false 表示未开启。未激活时为 false。</p>
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
                     * 获取<p>计费详情信息，JSON 格式字符串，包含免费额度用量等信息。未激活时为空。</p>
                     * @return ChargeDetail <p>计费详情信息，JSON 格式字符串，包含免费额度用量等信息。未激活时为空。</p>
                     * 
                     */
                    std::string GetChargeDetail() const;

                    /**
                     * 设置<p>计费详情信息，JSON 格式字符串，包含免费额度用量等信息。未激活时为空。</p>
                     * @param _chargeDetail <p>计费详情信息，JSON 格式字符串，包含免费额度用量等信息。未激活时为空。</p>
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
                     * 获取<p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。</p>
                     * @return StopReason <p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。</p>
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置<p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。</p>
                     * @param _stopReason <p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。</p>
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
                     * 获取<p>推理服务的 rpm 限制，没设置就按模型维度 rpm 限制展示</p>
                     * @return RPM <p>推理服务的 rpm 限制，没设置就按模型维度 rpm 限制展示</p>
                     * 
                     */
                    int64_t GetRPM() const;

                    /**
                     * 设置<p>推理服务的 rpm 限制，没设置就按模型维度 rpm 限制展示</p>
                     * @param _rPM <p>推理服务的 rpm 限制，没设置就按模型维度 rpm 限制展示</p>
                     * 
                     */
                    void SetRPM(const int64_t& _rPM);

                    /**
                     * 判断参数 RPM 是否已赋值
                     * @return RPM 是否已赋值
                     * 
                     */
                    bool RPMHasBeenSet() const;

                    /**
                     * 获取<p>推理服务的tpm 限制，没设置就按模型维度 tpm 限制展示</p>
                     * @return TPM <p>推理服务的tpm 限制，没设置就按模型维度 tpm 限制展示</p>
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置<p>推理服务的tpm 限制，没设置就按模型维度 tpm 限制展示</p>
                     * @param _tPM <p>推理服务的tpm 限制，没设置就按模型维度 tpm 限制展示</p>
                     * 
                     */
                    void SetTPM(const int64_t& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务 ID。网关默认创建的 id 与模型 id 相同；控制台自定义推理服务以 ep- 开头。</p>
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * <p>推理服务名称。未激活时与 ModelId 相同。</p>
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * <p>模型 ID。</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型名称。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>状态。取值：ACTIVE（运行中）、INACTIVE（已停止）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>服务类型。固定为 TEXT_GENERATION（文本生成）。</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）。未激活时为空。</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>是否已开启后付费。true 表示已开启，false 表示未开启。未激活时为 false。</p>
                     */
                    bool m_paymentEnabled;
                    bool m_paymentEnabledHasBeenSet;

                    /**
                     * <p>计费详情信息，JSON 格式字符串，包含免费额度用量等信息。未激活时为空。</p>
                     */
                    std::string m_chargeDetail;
                    bool m_chargeDetailHasBeenSet;

                    /**
                     * <p>停止原因。当状态为 INACTIVE 时返回。取值：FREE_QUOTA_EXHAUSTED（免费额度已用尽）、NO_FREE_PACKAGE（无可用免费包）、INSUFFICIENT_BALANCE（余额不足）、BILLING_ISOLATED（账户欠费隔离）、INTERNAL_ERROR（内部错误）。</p>
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * <p>推理服务的 rpm 限制，没设置就按模型维度 rpm 限制展示</p>
                     */
                    int64_t m_rPM;
                    bool m_rPMHasBeenSet;

                    /**
                     * <p>推理服务的tpm 限制，没设置就按模型维度 tpm 限制展示</p>
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELENDPOINTVIEW_H_
