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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ABNORMALLIGHTINGCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ABNORMALLIGHTINGCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频画面低光、过曝检测的控制参数。
                */
                class AbnormalLightingConfigureInfo : public AbstractModel
                {
                public:
                    AbnormalLightingConfigureInfo();
                    ~AbnormalLightingConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频画面低光、过曝检测开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * @return Switch 视频画面低光、过曝检测开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置视频画面低光、过曝检测开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * @param _switch 视频画面低光、过曝检测开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 视频画面低光、过曝检测开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ABNORMALLIGHTINGCONFIGUREINFO_H_
