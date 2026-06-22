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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINROUTINGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINROUTINGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 高级回源优化配置参数。
                */
                class AdvancedOriginRoutingParameters : public AbstractModel
                {
                public:
                    AdvancedOriginRoutingParameters();
                    ~AdvancedOriginRoutingParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回源优化方向，取值有：</p><li>MainlandChinaAndGlobalAdaptive：自适应。域名需同时开启「智能加速」后生效，EdgeOne将根据客户端与源站的实际地理位置，自动匹配最优回源优化方向，无需手动指定。例如 www.example.com 开启「高级回源优化」，但「智能加速」关闭或仅部分匹配条件开启时，「高级回源优化」将不生效。</li>
                     * @return Direction <p>回源优化方向，取值有：</p><li>MainlandChinaAndGlobalAdaptive：自适应。域名需同时开启「智能加速」后生效，EdgeOne将根据客户端与源站的实际地理位置，自动匹配最优回源优化方向，无需手动指定。例如 www.example.com 开启「高级回源优化」，但「智能加速」关闭或仅部分匹配条件开启时，「高级回源优化」将不生效。</li>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>回源优化方向，取值有：</p><li>MainlandChinaAndGlobalAdaptive：自适应。域名需同时开启「智能加速」后生效，EdgeOne将根据客户端与源站的实际地理位置，自动匹配最优回源优化方向，无需手动指定。例如 www.example.com 开启「高级回源优化」，但「智能加速」关闭或仅部分匹配条件开启时，「高级回源优化」将不生效。</li>
                     * @param _direction <p>回源优化方向，取值有：</p><li>MainlandChinaAndGlobalAdaptive：自适应。域名需同时开启「智能加速」后生效，EdgeOne将根据客户端与源站的实际地理位置，自动匹配最优回源优化方向，无需手动指定。例如 www.example.com 开启「高级回源优化」，但「智能加速」关闭或仅部分匹配条件开启时，「高级回源优化」将不生效。</li>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>回源优化方向，取值有：</p><li>MainlandChinaAndGlobalAdaptive：自适应。域名需同时开启「智能加速」后生效，EdgeOne将根据客户端与源站的实际地理位置，自动匹配最优回源优化方向，无需手动指定。例如 www.example.com 开启「高级回源优化」，但「智能加速」关闭或仅部分匹配条件开启时，「高级回源优化」将不生效。</li>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINROUTINGPARAMETERS_H_
