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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ROUTERULE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ROUTERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消费组路由规格
                */
                class RouteRule : public AbstractModel
                {
                public:
                    RouteRule();
                    ~RouteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由匹配条件</p>
                     * @return MatchCondition <p>路由匹配条件</p>
                     * 
                     */
                    std::string GetMatchCondition() const;

                    /**
                     * 设置<p>路由匹配条件</p>
                     * @param _matchCondition <p>路由匹配条件</p>
                     * 
                     */
                    void SetMatchCondition(const std::string& _matchCondition);

                    /**
                     * 判断参数 MatchCondition 是否已赋值
                     * @return MatchCondition 是否已赋值
                     * 
                     */
                    bool MatchConditionHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return TargetConsumerLabel <p>标签</p>
                     * 
                     */
                    std::string GetTargetConsumerLabel() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _targetConsumerLabel <p>标签</p>
                     * 
                     */
                    void SetTargetConsumerLabel(const std::string& _targetConsumerLabel);

                    /**
                     * 判断参数 TargetConsumerLabel 是否已赋值
                     * @return TargetConsumerLabel 是否已赋值
                     * 
                     */
                    bool TargetConsumerLabelHasBeenSet() const;

                private:

                    /**
                     * <p>路由匹配条件</p>
                     */
                    std::string m_matchCondition;
                    bool m_matchConditionHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_targetConsumerLabel;
                    bool m_targetConsumerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ROUTERULE_H_
