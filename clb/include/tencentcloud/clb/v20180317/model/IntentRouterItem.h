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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INTENTROUTERITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INTENTROUTERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/IntentRouterTierItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 意图路由摘要信息对象（不含分层详情）。
                */
                class IntentRouterItem : public AbstractModel
                {
                public:
                    IntentRouterItem();
                    ~IntentRouterItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间（ISO 8601格式）。</p>
                     * @return CreatedTime <p>创建时间（ISO 8601格式）。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间（ISO 8601格式）。</p>
                     * @param _createdTime <p>创建时间（ISO 8601格式）。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

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
                     * 获取<p>路由名称（例如 IntentRouter/customer-support）。</p>
                     * @return RouteName <p>路由名称（例如 IntentRouter/customer-support）。</p>
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置<p>路由名称（例如 IntentRouter/customer-support）。</p>
                     * @param _routeName <p>路由名称（例如 IntentRouter/customer-support）。</p>
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
                     * 获取<p>状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>ConfigureFailed：配置失败</li></ul>
                     * @return Status <p>状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>ConfigureFailed：配置失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>ConfigureFailed：配置失败</li></ul>
                     * @param _status <p>状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>ConfigureFailed：配置失败</li></ul>
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
                     * 获取<p>分层配置列表。</p>
                     * @return Tiers <p>分层配置列表。</p>
                     * 
                     */
                    std::vector<IntentRouterTierItem> GetTiers() const;

                    /**
                     * 设置<p>分层配置列表。</p>
                     * @param _tiers <p>分层配置列表。</p>
                     * 
                     */
                    void SetTiers(const std::vector<IntentRouterTierItem>& _tiers);

                    /**
                     * 判断参数 Tiers 是否已赋值
                     * @return Tiers 是否已赋值
                     * 
                     */
                    bool TiersHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（ISO 8601格式）。</p>
                     * @return UpdatedTime <p>更新时间（ISO 8601格式）。</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>更新时间（ISO 8601格式）。</p>
                     * @param _updatedTime <p>更新时间（ISO 8601格式）。</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间（ISO 8601格式）。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>意图路由ID（ir-xxx格式）。</p>
                     */
                    std::string m_intentRouterId;
                    bool m_intentRouterIdHasBeenSet;

                    /**
                     * <p>路由名称（例如 IntentRouter/customer-support）。</p>
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * <p>意图路由描述。</p>
                     */
                    std::string m_routerDescribe;
                    bool m_routerDescribeHasBeenSet;

                    /**
                     * <p>状态。</p><p>枚举值：</p><ul><li>Provisioning：创建中</li><li>Active：正常</li><li>Configuring：配置中</li><li>ConfigureFailed：配置失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>分层配置列表。</p>
                     */
                    std::vector<IntentRouterTierItem> m_tiers;
                    bool m_tiersHasBeenSet;

                    /**
                     * <p>更新时间（ISO 8601格式）。</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INTENTROUTERITEM_H_
