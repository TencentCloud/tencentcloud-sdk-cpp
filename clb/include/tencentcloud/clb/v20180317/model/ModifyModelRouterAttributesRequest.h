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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELROUTERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELROUTERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForModelRouter.h>
#include <tencentcloud/clb/v20180317/model/RouterSettingWithFallBack.h>
#include <tencentcloud/clb/v20180317/model/EmbeddingConfig.h>
#include <tencentcloud/clb/v20180317/model/VideoConfig.h>
#include <tencentcloud/clb/v20180317/model/RerankConfig.h>
#include <tencentcloud/clb/v20180317/model/DecisionsConfig.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyModelRouterAttributes请求参数结构体
                */
                class ModifyModelRouterAttributesRequest : public AbstractModel
                {
                public:
                    ModifyModelRouterAttributesRequest();
                    ~ModifyModelRouterAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由ID</p>
                     * @return ModelRouterId <p>模型路由ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由ID</p>
                     * @param _modelRouterId <p>模型路由ID</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>新的 HTTPS 证书ID，用于替换实例 HTTPS 服务端点当前绑定的证书。常用于证书到期前的更换场景。</p><p>使用限制：</p><ul><li>仅企业型（Enterprise）且服务端点协议为 HTTPS 的实例支持修改证书。</li><li>证书须为 SSL 证书控制台中状态为“已签发”（可用）且未过期的服务器证书（SVR 类型）。可在 <a href="https://console.cloud.tencent.com/ssl">SSL 证书控制台</a> 查看证书ID。</li><li>替换后新证书立即生效，过程中不会中断业务流量。</li><li>若传入的证书与当前绑定的证书相同，接口直接返回成功，不做任何变更。</li></ul><p>不传则证书保持不变。可通过 <code>DescribeModelRouterDetail</code> 接口的 <code>ServiceEndPoints.CertId</code> 字段查询当前绑定的证书。</p>
                     * @return CertId <p>新的 HTTPS 证书ID，用于替换实例 HTTPS 服务端点当前绑定的证书。常用于证书到期前的更换场景。</p><p>使用限制：</p><ul><li>仅企业型（Enterprise）且服务端点协议为 HTTPS 的实例支持修改证书。</li><li>证书须为 SSL 证书控制台中状态为“已签发”（可用）且未过期的服务器证书（SVR 类型）。可在 <a href="https://console.cloud.tencent.com/ssl">SSL 证书控制台</a> 查看证书ID。</li><li>替换后新证书立即生效，过程中不会中断业务流量。</li><li>若传入的证书与当前绑定的证书相同，接口直接返回成功，不做任何变更。</li></ul><p>不传则证书保持不变。可通过 <code>DescribeModelRouterDetail</code> 接口的 <code>ServiceEndPoints.CertId</code> 字段查询当前绑定的证书。</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>新的 HTTPS 证书ID，用于替换实例 HTTPS 服务端点当前绑定的证书。常用于证书到期前的更换场景。</p><p>使用限制：</p><ul><li>仅企业型（Enterprise）且服务端点协议为 HTTPS 的实例支持修改证书。</li><li>证书须为 SSL 证书控制台中状态为“已签发”（可用）且未过期的服务器证书（SVR 类型）。可在 <a href="https://console.cloud.tencent.com/ssl">SSL 证书控制台</a> 查看证书ID。</li><li>替换后新证书立即生效，过程中不会中断业务流量。</li><li>若传入的证书与当前绑定的证书相同，接口直接返回成功，不做任何变更。</li></ul><p>不传则证书保持不变。可通过 <code>DescribeModelRouterDetail</code> 接口的 <code>ServiceEndPoints.CertId</code> 字段查询当前绑定的证书。</p>
                     * @param _certId <p>新的 HTTPS 证书ID，用于替换实例 HTTPS 服务端点当前绑定的证书。常用于证书到期前的更换场景。</p><p>使用限制：</p><ul><li>仅企业型（Enterprise）且服务端点协议为 HTTPS 的实例支持修改证书。</li><li>证书须为 SSL 证书控制台中状态为“已签发”（可用）且未过期的服务器证书（SVR 类型）。可在 <a href="https://console.cloud.tencent.com/ssl">SSL 证书控制台</a> 查看证书ID。</li><li>替换后新证书立即生效，过程中不会中断业务流量。</li><li>若传入的证书与当前绑定的证书相同，接口直接返回成功，不做任何变更。</li></ul><p>不传则证书保持不变。可通过 <code>DescribeModelRouterDetail</code> 接口的 <code>ServiceEndPoints.CertId</code> 字段查询当前绑定的证书。</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由名称</p>
                     * @return ModelRouterName <p>模型路由名称</p>
                     * 
                     */
                    std::string GetModelRouterName() const;

                    /**
                     * 设置<p>模型路由名称</p>
                     * @param _modelRouterName <p>模型路由名称</p>
                     * 
                     */
                    void SetModelRouterName(const std::string& _modelRouterName);

                    /**
                     * 判断参数 ModelRouterName 是否已赋值
                     * @return ModelRouterName 是否已赋值
                     * 
                     */
                    bool ModelRouterNameHasBeenSet() const;

                    /**
                     * 获取<p>限速配置</p>
                     * @return RateLimitConfig <p>限速配置</p>
                     * 
                     */
                    RateLimitConfigForModelRouter GetRateLimitConfig() const;

                    /**
                     * 设置<p>限速配置</p>
                     * @param _rateLimitConfig <p>限速配置</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForModelRouter& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>路由配置</p>
                     * @return RouterSetting <p>路由配置</p>
                     * 
                     */
                    RouterSettingWithFallBack GetRouterSetting() const;

                    /**
                     * 设置<p>路由配置</p>
                     * @param _routerSetting <p>路由配置</p>
                     * 
                     */
                    void SetRouterSetting(const RouterSettingWithFallBack& _routerSetting);

                    /**
                     * 判断参数 RouterSetting 是否已赋值
                     * @return RouterSetting 是否已赋值
                     * 
                     */
                    bool RouterSettingHasBeenSet() const;

                    /**
                     * 获取<p>带宽</p><p>取值范围：[1, 2048]</p><p>单位：Mbps</p>
                     * @return Bandwidth <p>带宽</p><p>取值范围：[1, 2048]</p><p>单位：Mbps</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>带宽</p><p>取值范围：[1, 2048]</p><p>单位：Mbps</p>
                     * @param _bandwidth <p>带宽</p><p>取值范围：[1, 2048]</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * @return Capability <p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * 
                     */
                    std::string GetCapability() const;

                    /**
                     * 设置<p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * @param _capability <p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * 
                     */
                    void SetCapability(const std::string& _capability);

                    /**
                     * 判断参数 Capability 是否已赋值
                     * @return Capability 是否已赋值
                     * 
                     */
                    bool CapabilityHasBeenSet() const;

                    /**
                     * 获取<p>Embedding 调度配置</p><p>传入该参数时，必须传Capability为embedding</p>
                     * @return EmbeddingConfig <p>Embedding 调度配置</p><p>传入该参数时，必须传Capability为embedding</p>
                     * 
                     */
                    EmbeddingConfig GetEmbeddingConfig() const;

                    /**
                     * 设置<p>Embedding 调度配置</p><p>传入该参数时，必须传Capability为embedding</p>
                     * @param _embeddingConfig <p>Embedding 调度配置</p><p>传入该参数时，必须传Capability为embedding</p>
                     * 
                     */
                    void SetEmbeddingConfig(const EmbeddingConfig& _embeddingConfig);

                    /**
                     * 判断参数 EmbeddingConfig 是否已赋值
                     * @return EmbeddingConfig 是否已赋值
                     * 
                     */
                    bool EmbeddingConfigHasBeenSet() const;

                    /**
                     * 获取<p>Video 调度配置</p>
                     * @return VideoConfig <p>Video 调度配置</p>
                     * 
                     */
                    VideoConfig GetVideoConfig() const;

                    /**
                     * 设置<p>Video 调度配置</p>
                     * @param _videoConfig <p>Video 调度配置</p>
                     * 
                     */
                    void SetVideoConfig(const VideoConfig& _videoConfig);

                    /**
                     * 判断参数 VideoConfig 是否已赋值
                     * @return VideoConfig 是否已赋值
                     * 
                     */
                    bool VideoConfigHasBeenSet() const;

                    /**
                     * 获取<p>Rerank 调度配置</p><p>传入该参数时，必须传Capability为rerank</p>
                     * @return RerankConfig <p>Rerank 调度配置</p><p>传入该参数时，必须传Capability为rerank</p>
                     * 
                     */
                    RerankConfig GetRerankConfig() const;

                    /**
                     * 设置<p>Rerank 调度配置</p><p>传入该参数时，必须传Capability为rerank</p>
                     * @param _rerankConfig <p>Rerank 调度配置</p><p>传入该参数时，必须传Capability为rerank</p>
                     * 
                     */
                    void SetRerankConfig(const RerankConfig& _rerankConfig);

                    /**
                     * 判断参数 RerankConfig 是否已赋值
                     * @return RerankConfig 是否已赋值
                     * 
                     */
                    bool RerankConfigHasBeenSet() const;

                    /**
                     * 获取<p>Decisions 调度配置</p>
                     * @return DecisionsConfig <p>Decisions 调度配置</p>
                     * 
                     */
                    DecisionsConfig GetDecisionsConfig() const;

                    /**
                     * 设置<p>Decisions 调度配置</p>
                     * @param _decisionsConfig <p>Decisions 调度配置</p>
                     * 
                     */
                    void SetDecisionsConfig(const DecisionsConfig& _decisionsConfig);

                    /**
                     * 判断参数 DecisionsConfig 是否已赋值
                     * @return DecisionsConfig 是否已赋值
                     * 
                     */
                    bool DecisionsConfigHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>新的 HTTPS 证书ID，用于替换实例 HTTPS 服务端点当前绑定的证书。常用于证书到期前的更换场景。</p><p>使用限制：</p><ul><li>仅企业型（Enterprise）且服务端点协议为 HTTPS 的实例支持修改证书。</li><li>证书须为 SSL 证书控制台中状态为“已签发”（可用）且未过期的服务器证书（SVR 类型）。可在 <a href="https://console.cloud.tencent.com/ssl">SSL 证书控制台</a> 查看证书ID。</li><li>替换后新证书立即生效，过程中不会中断业务流量。</li><li>若传入的证书与当前绑定的证书相同，接口直接返回成功，不做任何变更。</li></ul><p>不传则证书保持不变。可通过 <code>DescribeModelRouterDetail</code> 接口的 <code>ServiceEndPoints.CertId</code> 字段查询当前绑定的证书。</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>模型路由名称</p>
                     */
                    std::string m_modelRouterName;
                    bool m_modelRouterNameHasBeenSet;

                    /**
                     * <p>限速配置</p>
                     */
                    RateLimitConfigForModelRouter m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>路由配置</p>
                     */
                    RouterSettingWithFallBack m_routerSetting;
                    bool m_routerSettingHasBeenSet;

                    /**
                     * <p>带宽</p><p>取值范围：[1, 2048]</p><p>单位：Mbps</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     */
                    std::string m_capability;
                    bool m_capabilityHasBeenSet;

                    /**
                     * <p>Embedding 调度配置</p><p>传入该参数时，必须传Capability为embedding</p>
                     */
                    EmbeddingConfig m_embeddingConfig;
                    bool m_embeddingConfigHasBeenSet;

                    /**
                     * <p>Video 调度配置</p>
                     */
                    VideoConfig m_videoConfig;
                    bool m_videoConfigHasBeenSet;

                    /**
                     * <p>Rerank 调度配置</p><p>传入该参数时，必须传Capability为rerank</p>
                     */
                    RerankConfig m_rerankConfig;
                    bool m_rerankConfigHasBeenSet;

                    /**
                     * <p>Decisions 调度配置</p>
                     */
                    DecisionsConfig m_decisionsConfig;
                    bool m_decisionsConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELROUTERATTRIBUTESREQUEST_H_
