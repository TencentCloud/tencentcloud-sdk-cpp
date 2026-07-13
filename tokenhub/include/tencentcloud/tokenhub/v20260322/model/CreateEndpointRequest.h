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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEENDPOINTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateEndpoint请求参数结构体
                */
                class CreateEndpointRequest : public AbstractModel
                {
                public:
                    CreateEndpointRequest();
                    ~CreateEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务名称。最大 64 字符。</p>
                     * @return EndpointName <p>服务名称。最大 64 字符。</p>
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置<p>服务名称。最大 64 字符。</p>
                     * @param _endpointName <p>服务名称。最大 64 字符。</p>
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
                     * 获取<p>模型 ID。可通过 DescribeModelList 接口获取。</p>
                     * @return ModelId <p>模型 ID。可通过 DescribeModelList 接口获取。</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型 ID。可通过 DescribeModelList 接口获取。</p>
                     * @param _modelId <p>模型 ID。可通过 DescribeModelList 接口获取。</p>
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
                     * 获取<p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）、TPM（TPM 保障）、COMPUTE_UNIT（按算力单元计费）。</p>
                     * @return ChargeType <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）、TPM（TPM 保障）、COMPUTE_UNIT（按算力单元计费）。</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）、TPM（TPM 保障）、COMPUTE_UNIT（按算力单元计费）。</p>
                     * @param _chargeType <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）、TPM（TPM 保障）、COMPUTE_UNIT（按算力单元计费）。</p>
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
                     * 获取<p>RPM（每分钟请求数）限流上限。可选。必须大于 0，且不能超过用户在该模型上的 RPM 上限。不传则使用默认值（60）。</p>
                     * @return RPM <p>RPM（每分钟请求数）限流上限。可选。必须大于 0，且不能超过用户在该模型上的 RPM 上限。不传则使用默认值（60）。</p>
                     * 
                     */
                    int64_t GetRPM() const;

                    /**
                     * 设置<p>RPM（每分钟请求数）限流上限。可选。必须大于 0，且不能超过用户在该模型上的 RPM 上限。不传则使用默认值（60）。</p>
                     * @param _rPM <p>RPM（每分钟请求数）限流上限。可选。必须大于 0，且不能超过用户在该模型上的 RPM 上限。不传则使用默认值（60）。</p>
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
                     * 获取<p>TPM（每分钟 Token 数）限流上限，单位为 tokens/min。可选。必须大于 0，且不能超过用户在该模型上的 TPM 上限。设置后会同时作用于输入 TPM 和输出 TPM。不传则使用默认值（0 表示不限流）。</p>
                     * @return TPM <p>TPM（每分钟 Token 数）限流上限，单位为 tokens/min。可选。必须大于 0，且不能超过用户在该模型上的 TPM 上限。设置后会同时作用于输入 TPM 和输出 TPM。不传则使用默认值（0 表示不限流）。</p>
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置<p>TPM（每分钟 Token 数）限流上限，单位为 tokens/min。可选。必须大于 0，且不能超过用户在该模型上的 TPM 上限。设置后会同时作用于输入 TPM 和输出 TPM。不传则使用默认值（0 表示不限流）。</p>
                     * @param _tPM <p>TPM（每分钟 Token 数）限流上限，单位为 tokens/min。可选。必须大于 0，且不能超过用户在该模型上的 TPM 上限。设置后会同时作用于输入 TPM 和输出 TPM。不传则使用默认值（0 表示不限流）。</p>
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
                     * 获取<p>自定义推理服务 id</p>
                     * @return EndpointId <p>自定义推理服务 id</p>
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置<p>自定义推理服务 id</p>
                     * @param _endpointId <p>自定义推理服务 id</p>
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                private:

                    /**
                     * <p>服务名称。最大 64 字符。</p>
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * <p>模型 ID。可通过 DescribeModelList 接口获取。</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>计费方式。取值：FREE（免费体验）、TOKEN（按 Token 计费）、TPM（TPM 保障）、COMPUTE_UNIT（按算力单元计费）。</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>RPM（每分钟请求数）限流上限。可选。必须大于 0，且不能超过用户在该模型上的 RPM 上限。不传则使用默认值（60）。</p>
                     */
                    int64_t m_rPM;
                    bool m_rPMHasBeenSet;

                    /**
                     * <p>TPM（每分钟 Token 数）限流上限，单位为 tokens/min。可选。必须大于 0，且不能超过用户在该模型上的 TPM 上限。设置后会同时作用于输入 TPM 和输出 TPM。不传则使用默认值（0 表示不限流）。</p>
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                    /**
                     * <p>自动调整配额</p>
                     */
                    int64_t m_autoAdjustQuota;
                    bool m_autoAdjustQuotaHasBeenSet;

                    /**
                     * <p>自定义推理服务 id</p>
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEENDPOINTREQUEST_H_
