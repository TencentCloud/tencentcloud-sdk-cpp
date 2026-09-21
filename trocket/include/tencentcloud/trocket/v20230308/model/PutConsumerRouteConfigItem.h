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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PUTCONSUMERROUTECONFIGITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PUTCONSUMERROUTECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/RouteRule.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 批量写入路由配置的单个配置项
                */
                class PutConsumerRouteConfigItem : public AbstractModel
                {
                public:
                    PutConsumerRouteConfigItem();
                    ~PutConsumerRouteConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic <p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic <p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group <p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group <p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules <p>路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RouteRule> GetRules() const;

                    /**
                     * 设置<p>路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules <p>路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<RouteRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>Topic 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PUTCONSUMERROUTECONFIGITEM_H_
