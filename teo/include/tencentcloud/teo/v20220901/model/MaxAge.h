/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_

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
                * 浏览器缓存规则配置，用于设置 MaxAge 默认值，默认为关闭状态
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否遵循源站，取值有：
<li>on：遵循源站，忽略MaxAge 时间设置；</li>
<li>off：不遵循源站，使用MaxAge 时间设置。</li>
                     * @return FollowOrigin 是否遵循源站，取值有：
<li>on：遵循源站，忽略MaxAge 时间设置；</li>
<li>off：不遵循源站，使用MaxAge 时间设置。</li>
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置是否遵循源站，取值有：
<li>on：遵循源站，忽略MaxAge 时间设置；</li>
<li>off：不遵循源站，使用MaxAge 时间设置。</li>
                     * @param _followOrigin 是否遵循源站，取值有：
<li>on：遵循源站，忽略MaxAge 时间设置；</li>
<li>off：不遵循源站，使用MaxAge 时间设置。</li>
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取MaxAge 时间设置，单位秒，最大365天。
注意：时间为0，即不缓存。
                     * @return MaxAgeTime MaxAge 时间设置，单位秒，最大365天。
注意：时间为0，即不缓存。
                     * 
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置MaxAge 时间设置，单位秒，最大365天。
注意：时间为0，即不缓存。
                     * @param _maxAgeTime MaxAge 时间设置，单位秒，最大365天。
注意：时间为0，即不缓存。
                     * 
                     */
                    void SetMaxAgeTime(const int64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     * 
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                private:

                    /**
                     * 是否遵循源站，取值有：
<li>on：遵循源站，忽略MaxAge 时间设置；</li>
<li>off：不遵循源站，使用MaxAge 时间设置。</li>
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * MaxAge 时间设置，单位秒，最大365天。
注意：时间为0，即不缓存。
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_
