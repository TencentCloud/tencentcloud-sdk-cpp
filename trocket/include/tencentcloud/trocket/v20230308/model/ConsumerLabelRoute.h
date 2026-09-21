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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELROUTE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ConsumerLabelKey.h>
#include <tencentcloud/trocket/v20230308/model/ConsumerLabelRouteItem.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 单个标签键命中的 Topic 路由结果
                */
                class ConsumerLabelRoute : public AbstractModel
                {
                public:
                    ConsumerLabelRoute();
                    ~ConsumerLabelRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>标签键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerLabelKey GetKey() const;

                    /**
                     * 设置<p>标签键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>标签键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const ConsumerLabelKey& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>命中的路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Routes <p>命中的路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsumerLabelRouteItem> GetRoutes() const;

                    /**
                     * 设置<p>命中的路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routes <p>命中的路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutes(const std::vector<ConsumerLabelRouteItem>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                private:

                    /**
                     * <p>标签键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerLabelKey m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>命中的路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsumerLabelRouteItem> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELROUTE_H_
