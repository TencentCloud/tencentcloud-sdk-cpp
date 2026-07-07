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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEINTENTROUTERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEINTENTROUTERREQUEST_H_

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
                * CreateIntentRouter请求参数结构体
                */
                class CreateIntentRouterRequest : public AbstractModel
                {
                public:
                    CreateIntentRouterRequest();
                    ~CreateIntentRouterRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>路由名称，用作LiteLLM的model_name。</p><p>必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。</p>
                     * @return RouteName <p>路由名称，用作LiteLLM的model_name。</p><p>必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。</p>
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置<p>路由名称，用作LiteLLM的model_name。</p><p>必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。</p>
                     * @param _routeName <p>路由名称，用作LiteLLM的model_name。</p><p>必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。</p>
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
                     * 获取<p>Tier配置列表。</p><p>每个Tier至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * @return Tiers <p>Tier配置列表。</p><p>每个Tier至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * 
                     */
                    std::vector<TierItem> GetTiers() const;

                    /**
                     * 设置<p>Tier配置列表。</p><p>每个Tier至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * @param _tiers <p>Tier配置列表。</p><p>每个Tier至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     * 
                     */
                    void SetTiers(const std::vector<TierItem>& _tiers);

                    /**
                     * 判断参数 Tiers 是否已赋值
                     * @return Tiers 是否已赋值
                     * 
                     */
                    bool TiersHasBeenSet() const;

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

                private:

                    /**
                     * <p>模型路由实例ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>路由名称，用作LiteLLM的model_name。</p><p>必须以"IntentRouter/"为前缀，后缀仅支持字母、数字、连字符和下划线，后缀长度1-128个字符。</p>
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * <p>Tier配置列表。</p><p>每个Tier至少包含一个模型，模型名称必须是已关联到该实例的模型。</p>
                     */
                    std::vector<TierItem> m_tiers;
                    bool m_tiersHasBeenSet;

                    /**
                     * <p>意图路由描述。</p>
                     */
                    std::string m_routerDescribe;
                    bool m_routerDescribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEINTENTROUTERREQUEST_H_
