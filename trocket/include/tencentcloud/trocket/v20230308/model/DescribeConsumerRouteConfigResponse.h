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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERROUTECONFIGRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERROUTECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeConsumerRouteConfig返回参数结构体
                */
                class DescribeConsumerRouteConfigResponse : public AbstractModel
                {
                public:
                    DescribeConsumerRouteConfigResponse();
                    ~DescribeConsumerRouteConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>版本号</p>
                     * @return Version <p>版本号</p>
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>路由规格</p>
                     * @return Rules <p>路由规格</p>
                     * 
                     */
                    std::vector<RouteRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>切流时间戳</p>
                     * @return CutTimestamp <p>切流时间戳</p>
                     * 
                     */
                    int64_t GetCutTimestamp() const;

                    /**
                     * 判断参数 CutTimestamp 是否已赋值
                     * @return CutTimestamp 是否已赋值
                     * 
                     */
                    bool CutTimestampHasBeenSet() const;

                private:

                    /**
                     * <p>版本号</p>
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>路由规格</p>
                     */
                    std::vector<RouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>切流时间戳</p>
                     */
                    int64_t m_cutTimestamp;
                    bool m_cutTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERROUTECONFIGRESPONSE_H_
