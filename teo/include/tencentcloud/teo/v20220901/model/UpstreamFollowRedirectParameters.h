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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMFOLLOWREDIRECTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMFOLLOWREDIRECTPARAMETERS_H_

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
                * 回源跟随重定向参数配置。
                */
                class UpstreamFollowRedirectParameters : public AbstractModel
                {
                public:
                    UpstreamFollowRedirectParameters();
                    ~UpstreamFollowRedirectParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源跟随重定向配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 回源跟随重定向配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置回源跟随重定向配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 回源跟随重定向配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取最大重定向次数。取值为 1-5。
注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return MaxTimes 最大重定向次数。取值为 1-5。
注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    int64_t GetMaxTimes() const;

                    /**
                     * 设置最大重定向次数。取值为 1-5。
注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _maxTimes 最大重定向次数。取值为 1-5。
注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetMaxTimes(const int64_t& _maxTimes);

                    /**
                     * 判断参数 MaxTimes 是否已赋值
                     * @return MaxTimes 是否已赋值
                     * 
                     */
                    bool MaxTimesHasBeenSet() const;

                private:

                    /**
                     * 回源跟随重定向配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 最大重定向次数。取值为 1-5。
注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    int64_t m_maxTimes;
                    bool m_maxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMFOLLOWREDIRECTPARAMETERS_H_
