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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ROUTERULEVERSION_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ROUTERULEVERSION_H_

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
                * 路由规则版本
                */
                class RouteRuleVersion : public AbstractModel
                {
                public:
                    RouteRuleVersion();
                    ~RouteRuleVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本号</p>
                     * @return Version <p>版本号</p>
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _version <p>版本号</p>
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
                     * 获取<p>切流时间戳</p><p>单位：毫秒（ms）</p>
                     * @return CutTimestamp <p>切流时间戳</p><p>单位：毫秒（ms）</p>
                     * 
                     */
                    int64_t GetCutTimestamp() const;

                    /**
                     * 设置<p>切流时间戳</p><p>单位：毫秒（ms）</p>
                     * @param _cutTimestamp <p>切流时间戳</p><p>单位：毫秒（ms）</p>
                     * 
                     */
                    void SetCutTimestamp(const int64_t& _cutTimestamp);

                    /**
                     * 判断参数 CutTimestamp 是否已赋值
                     * @return CutTimestamp 是否已赋值
                     * 
                     */
                    bool CutTimestampHasBeenSet() const;

                    /**
                     * 获取<p>更新时间戳</p><p>单位：毫秒（ms）</p>
                     * @return UpdatedAt <p>更新时间戳</p><p>单位：毫秒（ms）</p>
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间戳</p><p>单位：毫秒（ms）</p>
                     * @param _updatedAt <p>更新时间戳</p><p>单位：毫秒（ms）</p>
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>路由规则列表</p>
                     * @return Rules <p>路由规则列表</p>
                     * 
                     */
                    std::vector<RouteRule> GetRules() const;

                    /**
                     * 设置<p>路由规则列表</p>
                     * @param _rules <p>路由规则列表</p>
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
                     * <p>版本号</p>
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>切流时间戳</p><p>单位：毫秒（ms）</p>
                     */
                    int64_t m_cutTimestamp;
                    bool m_cutTimestampHasBeenSet;

                    /**
                     * <p>更新时间戳</p><p>单位：毫秒（ms）</p>
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>路由规则列表</p>
                     */
                    std::vector<RouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ROUTERULEVERSION_H_
