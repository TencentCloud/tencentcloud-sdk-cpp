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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelFallbackRule.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelParamCheckInfo.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLLMQuotaLimit.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * LLM 模型服务
                */
                class CloudNativeAPIGatewayLLMModelService : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayLLMModelService();
                    ~CloudNativeAPIGatewayLLMModelService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型服务 ID。</p>
                     * @return Id <p>模型服务 ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>模型服务 ID。</p>
                     * @param _id <p>模型服务 ID。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>模型服务名称。</p>
                     * @return Name <p>模型服务名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型服务名称。</p>
                     * @param _name <p>模型服务名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取<p>修改时间。</p>
                     * @return ModifyTime <p>修改时间。</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间。</p>
                     * @param _modifyTime <p>修改时间。</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>服务类型，目前只支持xa0LLMService。</p>
                     * @return ServiceType <p>服务类型，目前只支持xa0LLMService。</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型，目前只支持xa0LLMService。</p>
                     * @param _serviceType <p>服务类型，目前只支持xa0LLMService。</p>
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
                     * 获取<p>选择模型提供商, 选项：OpenAI、Anthropic、Azure OpenAI、自定义HTTP。</p>
                     * @return ModelProvider <p>选择模型提供商, 选项：OpenAI、Anthropic、Azure OpenAI、自定义HTTP。</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>选择模型提供商, 选项：OpenAI、Anthropic、Azure OpenAI、自定义HTTP。</p>
                     * @param _modelProvider <p>选择模型提供商, 选项：OpenAI、Anthropic、Azure OpenAI、自定义HTTP。</p>
                     * 
                     */
                    void SetModelProvider(const std::string& _modelProvider);

                    /**
                     * 判断参数 ModelProvider 是否已赋值
                     * @return ModelProvider 是否已赋值
                     * 
                     */
                    bool ModelProviderHasBeenSet() const;

                    /**
                     * 获取<p>API协议标准，根据供应商动态变化：OpenAI→OpenAI/v1，Anthropic→Anthropic/v1等</p>
                     * @return ModelProtocol <p>API协议标准，根据供应商动态变化：OpenAI→OpenAI/v1，Anthropic→Anthropic/v1等</p>
                     * 
                     */
                    std::string GetModelProtocol() const;

                    /**
                     * 设置<p>API协议标准，根据供应商动态变化：OpenAI→OpenAI/v1，Anthropic→Anthropic/v1等</p>
                     * @param _modelProtocol <p>API协议标准，根据供应商动态变化：OpenAI→OpenAI/v1，Anthropic→Anthropic/v1等</p>
                     * 
                     */
                    void SetModelProtocol(const std::string& _modelProtocol);

                    /**
                     * 判断参数 ModelProtocol 是否已赋值
                     * @return ModelProtocol 是否已赋值
                     * 
                     */
                    bool ModelProtocolHasBeenSet() const;

                    /**
                     * 获取<p>自定义的模型请求 URL。</p>
                     * @return UpstreamURL <p>自定义的模型请求 URL。</p>
                     * 
                     */
                    std::string GetUpstreamURL() const;

                    /**
                     * 设置<p>自定义的模型请求 URL。</p>
                     * @param _upstreamURL <p>自定义的模型请求 URL。</p>
                     * 
                     */
                    void SetUpstreamURL(const std::string& _upstreamURL);

                    /**
                     * 判断参数 UpstreamURL 是否已赋值
                     * @return UpstreamURL 是否已赋值
                     * 
                     */
                    bool UpstreamURLHasBeenSet() const;

                    /**
                     * 获取<p>模型选择方式，选项：Specify（指定模型）、PassThrough（透传请求模型）。</p>
                     * @return ModelSelector <p>模型选择方式，选项：Specify（指定模型）、PassThrough（透传请求模型）。</p>
                     * 
                     */
                    std::string GetModelSelector() const;

                    /**
                     * 设置<p>模型选择方式，选项：Specify（指定模型）、PassThrough（透传请求模型）。</p>
                     * @param _modelSelector <p>模型选择方式，选项：Specify（指定模型）、PassThrough（透传请求模型）。</p>
                     * 
                     */
                    void SetModelSelector(const std::string& _modelSelector);

                    /**
                     * 判断参数 ModelSelector 是否已赋值
                     * @return ModelSelector 是否已赋值
                     * 
                     */
                    bool ModelSelectorHasBeenSet() const;

                    /**
                     * 获取<p>默认模型，模型选择方式为 Specify 时必填。</p>
                     * @return DefaultModel <p>默认模型，模型选择方式为 Specify 时必填。</p>
                     * 
                     */
                    std::string GetDefaultModel() const;

                    /**
                     * 设置<p>默认模型，模型选择方式为 Specify 时必填。</p>
                     * @param _defaultModel <p>默认模型，模型选择方式为 Specify 时必填。</p>
                     * 
                     */
                    void SetDefaultModel(const std::string& _defaultModel);

                    /**
                     * 判断参数 DefaultModel 是否已赋值
                     * @return DefaultModel 是否已赋值
                     * 
                     */
                    bool DefaultModelHasBeenSet() const;

                    /**
                     * 获取<p>开启模型降级，模型选择方式为 Specify 时必填。</p>
                     * @return EnableModelFallback <p>开启模型降级，模型选择方式为 Specify 时必填。</p>
                     * 
                     */
                    bool GetEnableModelFallback() const;

                    /**
                     * 设置<p>开启模型降级，模型选择方式为 Specify 时必填。</p>
                     * @param _enableModelFallback <p>开启模型降级，模型选择方式为 Specify 时必填。</p>
                     * 
                     */
                    void SetEnableModelFallback(const bool& _enableModelFallback);

                    /**
                     * 判断参数 EnableModelFallback 是否已赋值
                     * @return EnableModelFallback 是否已赋值
                     * 
                     */
                    bool EnableModelFallbackHasBeenSet() const;

                    /**
                     * 获取<p>可以配置备用模型规则，EnableSpecifyModelFallbackxa0为 true 时必填。</p>
                     * @return ModelFallbackRule <p>可以配置备用模型规则，EnableSpecifyModelFallbackxa0为 true 时必填。</p>
                     * 
                     */
                    CloudNativeAPIGatewayLLMModelFallbackRule GetModelFallbackRule() const;

                    /**
                     * 设置<p>可以配置备用模型规则，EnableSpecifyModelFallbackxa0为 true 时必填。</p>
                     * @param _modelFallbackRule <p>可以配置备用模型规则，EnableSpecifyModelFallbackxa0为 true 时必填。</p>
                     * 
                     */
                    void SetModelFallbackRule(const CloudNativeAPIGatewayLLMModelFallbackRule& _modelFallbackRule);

                    /**
                     * 判断参数 ModelFallbackRule 是否已赋值
                     * @return ModelFallbackRule 是否已赋值
                     * 
                     */
                    bool ModelFallbackRuleHasBeenSet() const;

                    /**
                     * 获取<p>开启模型参数校验，是否校验客户端传递的 model 参数,xa0模型选择方式为 PassThrough 时必填。</p>
                     * @return EnableModelParamCheck <p>开启模型参数校验，是否校验客户端传递的 model 参数,xa0模型选择方式为 PassThrough 时必填。</p>
                     * 
                     */
                    bool GetEnableModelParamCheck() const;

                    /**
                     * 设置<p>开启模型参数校验，是否校验客户端传递的 model 参数,xa0模型选择方式为 PassThrough 时必填。</p>
                     * @param _enableModelParamCheck <p>开启模型参数校验，是否校验客户端传递的 model 参数,xa0模型选择方式为 PassThrough 时必填。</p>
                     * 
                     */
                    void SetEnableModelParamCheck(const bool& _enableModelParamCheck);

                    /**
                     * 判断参数 EnableModelParamCheck 是否已赋值
                     * @return EnableModelParamCheck 是否已赋值
                     * 
                     */
                    bool EnableModelParamCheckHasBeenSet() const;

                    /**
                     * 获取<p>模型检验信息，EnableModelParamCheckxa0为 true 时必填。</p>
                     * @return ModelParamCheckRule <p>模型检验信息，EnableModelParamCheckxa0为 true 时必填。</p>
                     * 
                     */
                    CloudNativeAPIGatewayLLMModelParamCheckInfo GetModelParamCheckRule() const;

                    /**
                     * 设置<p>模型检验信息，EnableModelParamCheckxa0为 true 时必填。</p>
                     * @param _modelParamCheckRule <p>模型检验信息，EnableModelParamCheckxa0为 true 时必填。</p>
                     * 
                     */
                    void SetModelParamCheckRule(const CloudNativeAPIGatewayLLMModelParamCheckInfo& _modelParamCheckRule);

                    /**
                     * 判断参数 ModelParamCheckRule 是否已赋值
                     * @return ModelParamCheckRule 是否已赋值
                     * 
                     */
                    bool ModelParamCheckRuleHasBeenSet() const;

                    /**
                     * 获取<p>描述。</p>
                     * @return Description <p>描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述。</p>
                     * @param _description <p>描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>连接超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：10000</p>
                     * @return ConnectTimeout <p>连接超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：10000</p>
                     * 
                     */
                    int64_t GetConnectTimeout() const;

                    /**
                     * 设置<p>连接超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：10000</p>
                     * @param _connectTimeout <p>连接超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：10000</p>
                     * 
                     */
                    void SetConnectTimeout(const int64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>写入超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：60000</p>
                     * @return WriteTimeout <p>写入超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：60000</p>
                     * 
                     */
                    int64_t GetWriteTimeout() const;

                    /**
                     * 设置<p>写入超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：60000</p>
                     * @param _writeTimeout <p>写入超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：60000</p>
                     * 
                     */
                    void SetWriteTimeout(const int64_t& _writeTimeout);

                    /**
                     * 判断参数 WriteTimeout 是否已赋值
                     * @return WriteTimeout 是否已赋值
                     * 
                     */
                    bool WriteTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>读取超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p>
                     * @return ReadTimeout <p>读取超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetReadTimeout() const;

                    /**
                     * 设置<p>读取超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p>
                     * @param _readTimeout <p>读取超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetReadTimeout(const int64_t& _readTimeout);

                    /**
                     * 判断参数 ReadTimeout 是否已赋值
                     * @return ReadTimeout 是否已赋值
                     * 
                     */
                    bool ReadTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>重试次数</p><p>取值范围：[0, 5]</p><p>单位：次</p><p>默认值：0</p>
                     * @return Retries <p>重试次数</p><p>取值范围：[0, 5]</p><p>单位：次</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetRetries() const;

                    /**
                     * 设置<p>重试次数</p><p>取值范围：[0, 5]</p><p>单位：次</p><p>默认值：0</p>
                     * @param _retries <p>重试次数</p><p>取值范围：[0, 5]</p><p>单位：次</p><p>默认值：0</p>
                     * 
                     */
                    void SetRetries(const int64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     * 
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取<p>路径拼接模式</p><p>枚举值：</p><ul><li>FixedPath： 固定路径</li><li>AutoConcat： 自动拼接</li></ul>
                     * @return UpstreamUrlMode <p>路径拼接模式</p><p>枚举值：</p><ul><li>FixedPath： 固定路径</li><li>AutoConcat： 自动拼接</li></ul>
                     * 
                     */
                    std::string GetUpstreamUrlMode() const;

                    /**
                     * 设置<p>路径拼接模式</p><p>枚举值：</p><ul><li>FixedPath： 固定路径</li><li>AutoConcat： 自动拼接</li></ul>
                     * @param _upstreamUrlMode <p>路径拼接模式</p><p>枚举值：</p><ul><li>FixedPath： 固定路径</li><li>AutoConcat： 自动拼接</li></ul>
                     * 
                     */
                    void SetUpstreamUrlMode(const std::string& _upstreamUrlMode);

                    /**
                     * 判断参数 UpstreamUrlMode 是否已赋值
                     * @return UpstreamUrlMode 是否已赋值
                     * 
                     */
                    bool UpstreamUrlModeHasBeenSet() const;

                    /**
                     * 获取<p>sni</p>
                     * @return SNI <p>sni</p>
                     * 
                     */
                    std::string GetSNI() const;

                    /**
                     * 设置<p>sni</p>
                     * @param _sNI <p>sni</p>
                     * 
                     */
                    void SetSNI(const std::string& _sNI);

                    /**
                     * 判断参数 SNI 是否已赋值
                     * @return SNI 是否已赋值
                     * 
                     */
                    bool SNIHasBeenSet() const;

                    /**
                     * 获取<p>配额限制</p>
                     * @return QuotaLimit <p>配额限制</p>
                     * 
                     */
                    AIGWLLMQuotaLimit GetQuotaLimit() const;

                    /**
                     * 设置<p>配额限制</p>
                     * @param _quotaLimit <p>配额限制</p>
                     * 
                     */
                    void SetQuotaLimit(const AIGWLLMQuotaLimit& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>绑定的模型服务秘钥</p>
                     * @return SecretKeyIds <p>绑定的模型服务秘钥</p>
                     * 
                     */
                    std::vector<std::string> GetSecretKeyIds() const;

                    /**
                     * 设置<p>绑定的模型服务秘钥</p>
                     * @param _secretKeyIds <p>绑定的模型服务秘钥</p>
                     * 
                     */
                    void SetSecretKeyIds(const std::vector<std::string>& _secretKeyIds);

                    /**
                     * 判断参数 SecretKeyIds 是否已赋值
                     * @return SecretKeyIds 是否已赋值
                     * 
                     */
                    bool SecretKeyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>模型服务 ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>模型服务名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间。</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>服务类型，目前只支持xa0LLMService。</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>选择模型提供商, 选项：OpenAI、Anthropic、Azure OpenAI、自定义HTTP。</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>API协议标准，根据供应商动态变化：OpenAI→OpenAI/v1，Anthropic→Anthropic/v1等</p>
                     */
                    std::string m_modelProtocol;
                    bool m_modelProtocolHasBeenSet;

                    /**
                     * <p>自定义的模型请求 URL。</p>
                     */
                    std::string m_upstreamURL;
                    bool m_upstreamURLHasBeenSet;

                    /**
                     * <p>模型选择方式，选项：Specify（指定模型）、PassThrough（透传请求模型）。</p>
                     */
                    std::string m_modelSelector;
                    bool m_modelSelectorHasBeenSet;

                    /**
                     * <p>默认模型，模型选择方式为 Specify 时必填。</p>
                     */
                    std::string m_defaultModel;
                    bool m_defaultModelHasBeenSet;

                    /**
                     * <p>开启模型降级，模型选择方式为 Specify 时必填。</p>
                     */
                    bool m_enableModelFallback;
                    bool m_enableModelFallbackHasBeenSet;

                    /**
                     * <p>可以配置备用模型规则，EnableSpecifyModelFallbackxa0为 true 时必填。</p>
                     */
                    CloudNativeAPIGatewayLLMModelFallbackRule m_modelFallbackRule;
                    bool m_modelFallbackRuleHasBeenSet;

                    /**
                     * <p>开启模型参数校验，是否校验客户端传递的 model 参数,xa0模型选择方式为 PassThrough 时必填。</p>
                     */
                    bool m_enableModelParamCheck;
                    bool m_enableModelParamCheckHasBeenSet;

                    /**
                     * <p>模型检验信息，EnableModelParamCheckxa0为 true 时必填。</p>
                     */
                    CloudNativeAPIGatewayLLMModelParamCheckInfo m_modelParamCheckRule;
                    bool m_modelParamCheckRuleHasBeenSet;

                    /**
                     * <p>描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：10000</p>
                     */
                    int64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * <p>写入超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p><p>默认值：60000</p>
                     */
                    int64_t m_writeTimeout;
                    bool m_writeTimeoutHasBeenSet;

                    /**
                     * <p>读取超时时间</p><p>取值范围：[1, 3600000]</p><p>单位：毫秒</p>
                     */
                    int64_t m_readTimeout;
                    bool m_readTimeoutHasBeenSet;

                    /**
                     * <p>重试次数</p><p>取值范围：[0, 5]</p><p>单位：次</p><p>默认值：0</p>
                     */
                    int64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * <p>路径拼接模式</p><p>枚举值：</p><ul><li>FixedPath： 固定路径</li><li>AutoConcat： 自动拼接</li></ul>
                     */
                    std::string m_upstreamUrlMode;
                    bool m_upstreamUrlModeHasBeenSet;

                    /**
                     * <p>sni</p>
                     */
                    std::string m_sNI;
                    bool m_sNIHasBeenSet;

                    /**
                     * <p>配额限制</p>
                     */
                    AIGWLLMQuotaLimit m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>绑定的模型服务秘钥</p>
                     */
                    std::vector<std::string> m_secretKeyIds;
                    bool m_secretKeyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICE_H_
