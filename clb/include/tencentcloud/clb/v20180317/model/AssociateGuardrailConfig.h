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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATEGUARDRAILCONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATEGUARDRAILCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由待关联 Guardrail 防护配置
                */
                class AssociateGuardrailConfig : public AbstractModel
                {
                public:
                    AssociateGuardrailConfig();
                    ~AssociateGuardrailConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Guardrail 防护类型。</p><p>枚举值：</p><ul><li>WAF：使用腾讯云 WAF LLM SDK 接入配置对模型路由请求进行安全防护。</li></ul><p>当前仅支持 WAF；不传时默认为 WAF。</p>
                     * @return Type <p>Guardrail 防护类型。</p><p>枚举值：</p><ul><li>WAF：使用腾讯云 WAF LLM SDK 接入配置对模型路由请求进行安全防护。</li></ul><p>当前仅支持 WAF；不传时默认为 WAF。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Guardrail 防护类型。</p><p>枚举值：</p><ul><li>WAF：使用腾讯云 WAF LLM SDK 接入配置对模型路由请求进行安全防护。</li></ul><p>当前仅支持 WAF；不传时默认为 WAF。</p>
                     * @param _type <p>Guardrail 防护类型。</p><p>枚举值：</p><ul><li>WAF：使用腾讯云 WAF LLM SDK 接入配置对模型路由请求进行安全防护。</li></ul><p>当前仅支持 WAF；不传时默认为 WAF。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>关联的腾讯云 WAF 实例 ID。</p><p>当 Type 为 WAF 时必填。接口会校验该 WAF 实例存在且属于当前账号。</p>
                     * @return InstanceId <p>关联的腾讯云 WAF 实例 ID。</p><p>当 Type 为 WAF 时必填。接口会校验该 WAF 实例存在且属于当前账号。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>关联的腾讯云 WAF 实例 ID。</p><p>当 Type 为 WAF 时必填。接口会校验该 WAF 实例存在且属于当前账号。</p>
                     * @param _instanceId <p>关联的腾讯云 WAF 实例 ID。</p><p>当 Type 为 WAF 时必填。接口会校验该 WAF 实例存在且属于当前账号。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>WAF LLM SDK 接入服务 ID。</p><p>该字段对应 WAF LLM SDK 接入配置中的服务标识，用于指定模型路由请求要绑定的 WAF 防护配置。当 Type 为 WAF 时必填。接口会校验该服务配置存在于指定的 WAF 实例下。</p>
                     * @return ServiceId <p>WAF LLM SDK 接入服务 ID。</p><p>该字段对应 WAF LLM SDK 接入配置中的服务标识，用于指定模型路由请求要绑定的 WAF 防护配置。当 Type 为 WAF 时必填。接口会校验该服务配置存在于指定的 WAF 实例下。</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>WAF LLM SDK 接入服务 ID。</p><p>该字段对应 WAF LLM SDK 接入配置中的服务标识，用于指定模型路由请求要绑定的 WAF 防护配置。当 Type 为 WAF 时必填。接口会校验该服务配置存在于指定的 WAF 实例下。</p>
                     * @param _serviceId <p>WAF LLM SDK 接入服务 ID。</p><p>该字段对应 WAF LLM SDK 接入配置中的服务标识，用于指定模型路由请求要绑定的 WAF 防护配置。当 Type 为 WAF 时必填。接口会校验该服务配置存在于指定的 WAF 实例下。</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>最大检测对话轮数。</p><p>当 Type 为 WAF 时选填；未传时默认取值为 5。若传入，取值必须为正整数。</p>
                     * @return InputCheckDepth <p>最大检测对话轮数。</p><p>当 Type 为 WAF 时选填；未传时默认取值为 5。若传入，取值必须为正整数。</p>
                     * 
                     */
                    uint64_t GetInputCheckDepth() const;

                    /**
                     * 设置<p>最大检测对话轮数。</p><p>当 Type 为 WAF 时选填；未传时默认取值为 5。若传入，取值必须为正整数。</p>
                     * @param _inputCheckDepth <p>最大检测对话轮数。</p><p>当 Type 为 WAF 时选填；未传时默认取值为 5。若传入，取值必须为正整数。</p>
                     * 
                     */
                    void SetInputCheckDepth(const uint64_t& _inputCheckDepth);

                    /**
                     * 判断参数 InputCheckDepth 是否已赋值
                     * @return InputCheckDepth 是否已赋值
                     * 
                     */
                    bool InputCheckDepthHasBeenSet() const;

                private:

                    /**
                     * <p>Guardrail 防护类型。</p><p>枚举值：</p><ul><li>WAF：使用腾讯云 WAF LLM SDK 接入配置对模型路由请求进行安全防护。</li></ul><p>当前仅支持 WAF；不传时默认为 WAF。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>关联的腾讯云 WAF 实例 ID。</p><p>当 Type 为 WAF 时必填。接口会校验该 WAF 实例存在且属于当前账号。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>WAF LLM SDK 接入服务 ID。</p><p>该字段对应 WAF LLM SDK 接入配置中的服务标识，用于指定模型路由请求要绑定的 WAF 防护配置。当 Type 为 WAF 时必填。接口会校验该服务配置存在于指定的 WAF 实例下。</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>最大检测对话轮数。</p><p>当 Type 为 WAF 时选填；未传时默认取值为 5。若传入，取值必须为正整数。</p>
                     */
                    uint64_t m_inputCheckDepth;
                    bool m_inputCheckDepthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ASSOCIATEGUARDRAILCONFIG_H_
