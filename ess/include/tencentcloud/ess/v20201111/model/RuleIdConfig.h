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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RULEIDCONFIG_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RULEIDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 视频核身相关配置
                */
                class RuleIdConfig : public AbstractModel
                {
                public:
                    RuleIdConfig();
                    ~RuleIdConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0-智能语速（根据播报文案的长度自动调整语音播报速度）
1-固定1倍速
2-固定1.2倍速
3-固定1.5倍速
                     * @return Speed 意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0-智能语速（根据播报文案的长度自动调整语音播报速度）
1-固定1倍速
2-固定1.2倍速
3-固定1.5倍速
                     * 
                     */
                    uint64_t GetSpeed() const;

                    /**
                     * 设置意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0-智能语速（根据播报文案的长度自动调整语音播报速度）
1-固定1倍速
2-固定1.2倍速
3-固定1.5倍速
                     * @param _speed 意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0-智能语速（根据播报文案的长度自动调整语音播报速度）
1-固定1倍速
2-固定1.2倍速
3-固定1.5倍速
                     * 
                     */
                    void SetSpeed(const uint64_t& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * 意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0-智能语速（根据播报文案的长度自动调整语音播报速度）
1-固定1倍速
2-固定1.2倍速
3-固定1.5倍速
                     */
                    uint64_t m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RULEIDCONFIG_H_
