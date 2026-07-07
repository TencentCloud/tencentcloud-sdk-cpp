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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYINTENTROUTERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYINTENTROUTERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TierItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyIntentRouterAttribute请求参数结构体
                */
                class ModifyIntentRouterAttributeRequest : public AbstractModel
                {
                public:
                    ModifyIntentRouterAttributeRequest();
                    ~ModifyIntentRouterAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>意图路由ID（ir-xxx格式）。</p>
                     * @return IntentRouterId <p>意图路由ID（ir-xxx格式）。</p>
                     * 
                     */
                    std::string GetIntentRouterId() const;

                    /**
                     * 设置<p>意图路由ID（ir-xxx格式）。</p>
                     * @param _intentRouterId <p>意图路由ID（ir-xxx格式）。</p>
                     * 
                     */
                    void SetIntentRouterId(const std::string& _intentRouterId);

                    /**
                     * 判断参数 IntentRouterId 是否已赋值
                     * @return IntentRouterId 是否已赋值
                     * 
                     */
                    bool IntentRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例ID。</p>
                     * @return ModelRouterId <p>模型路由实例ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID。</p>
                     * @param _modelRouterId <p>模型路由实例ID。</p>
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
                     * 获取<p>新的路由名称。</p><p>选填；必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。不传则不修改。</p>
                     * @return RouteName <p>新的路由名称。</p><p>选填；必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。不传则不修改。</p>
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置<p>新的路由名称。</p><p>选填；必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。不传则不修改。</p>
                     * @param _routeName <p>新的路由名称。</p><p>选填；必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。不传则不修改。</p>
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取<p>意图路由描述。</p>
                     * @return RouterDescribe <p>意图路由描述。</p>
                     * 
                     */
                    std::string GetRouterDescribe() const;

                    /**
                     * 设置<p>意图路由描述。</p>
                     * @param _routerDescribe <p>意图路由描述。</p>
                     * 
                     */
                    void SetRouterDescribe(const std::string& _routerDescribe);

                    /**
                     * 判断参数 RouterDescribe 是否已赋值
                     * @return RouterDescribe 是否已赋值
                     * 
                     */
                    bool RouterDescribeHasBeenSet() const;

                    /**
                     * 获取<p>新的分层配置列表（全量替换）。</p><p>选填；不传则不修改。传入时必须为完整分层集合：复杂度分层须包含全部 4 个分层 SIMPLE/MEDIUM/COMPLEX/REASONING；语义分层须包含 default 及各语义 Tier（取决于实例所用协议，且不可跨协议变更）。每个分层至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * @return Tiers <p>新的分层配置列表（全量替换）。</p><p>选填；不传则不修改。传入时必须为完整分层集合：复杂度分层须包含全部 4 个分层 SIMPLE/MEDIUM/COMPLEX/REASONING；语义分层须包含 default 及各语义 Tier（取决于实例所用协议，且不可跨协议变更）。每个分层至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * 
                     */
                    std::vector<TierItem> GetTiers() const;

                    /**
                     * 设置<p>新的分层配置列表（全量替换）。</p><p>选填；不传则不修改。传入时必须为完整分层集合：复杂度分层须包含全部 4 个分层 SIMPLE/MEDIUM/COMPLEX/REASONING；语义分层须包含 default 及各语义 Tier（取决于实例所用协议，且不可跨协议变更）。每个分层至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * @param _tiers <p>新的分层配置列表（全量替换）。</p><p>选填；不传则不修改。传入时必须为完整分层集合：复杂度分层须包含全部 4 个分层 SIMPLE/MEDIUM/COMPLEX/REASONING；语义分层须包含 default 及各语义 Tier（取决于实例所用协议，且不可跨协议变更）。每个分层至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * 
                     */
                    void SetTiers(const std::vector<TierItem>& _tiers);

                    /**
                     * 判断参数 Tiers 是否已赋值
                     * @return Tiers 是否已赋值
                     * 
                     */
                    bool TiersHasBeenSet() const;

                private:

                    /**
                     * <p>意图路由ID（ir-xxx格式）。</p>
                     */
                    std::string m_intentRouterId;
                    bool m_intentRouterIdHasBeenSet;

                    /**
                     * <p>模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>新的路由名称。</p><p>选填；必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。不传则不修改。</p>
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * <p>意图路由描述。</p>
                     */
                    std::string m_routerDescribe;
                    bool m_routerDescribeHasBeenSet;

                    /**
                     * <p>新的分层配置列表（全量替换）。</p><p>选填；不传则不修改。传入时必须为完整分层集合：复杂度分层须包含全部 4 个分层 SIMPLE/MEDIUM/COMPLEX/REASONING；语义分层须包含 default 及各语义 Tier（取决于实例所用协议，且不可跨协议变更）。每个分层至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     */
                    std::vector<TierItem> m_tiers;
                    bool m_tiersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYINTENTROUTERATTRIBUTEREQUEST_H_
