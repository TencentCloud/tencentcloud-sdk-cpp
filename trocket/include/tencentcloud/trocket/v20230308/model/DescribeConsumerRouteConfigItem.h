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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERROUTECONFIGITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERROUTECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ConsumerRouteKey.h>
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
                * 批量查询路由配置的单条结果
                */
                class DescribeConsumerRouteConfigItem : public AbstractModel
                {
                public:
                    DescribeConsumerRouteConfigItem();
                    ~DescribeConsumerRouteConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>配置项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerRouteKey GetKey() const;

                    /**
                     * 设置<p>配置项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>配置项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const ConsumerRouteKey& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

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

                    /**
                     * 获取<p>切流时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CutTimestamp <p>切流时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCutTimestamp() const;

                    /**
                     * 设置<p>切流时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cutTimestamp <p>切流时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCutTimestamp(const int64_t& _cutTimestamp);

                    /**
                     * 判断参数 CutTimestamp 是否已赋值
                     * @return CutTimestamp 是否已赋值
                     * 
                     */
                    bool CutTimestampHasBeenSet() const;

                private:

                    /**
                     * <p>配置项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerRouteKey m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>路由规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>切流时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cutTimestamp;
                    bool m_cutTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERROUTECONFIGITEM_H_
