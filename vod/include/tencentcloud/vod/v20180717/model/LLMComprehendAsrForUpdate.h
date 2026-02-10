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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDASRFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDASRFORUPDATE_H_

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
                * 大模型解析文本转录解析配置
                */
                class LLMComprehendAsrForUpdate : public AbstractModel
                {
                public:
                    LLMComprehendAsrForUpdate();
                    ~LLMComprehendAsrForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本转录任务开关，可选值：
- ON：开启文本转录任务；
- OFF：关闭文本转录任务。
                     * @return Switch 文本转录任务开关，可选值：
- ON：开启文本转录任务；
- OFF：关闭文本转录任务。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置文本转录任务开关，可选值：
- ON：开启文本转录任务；
- OFF：关闭文本转录任务。
                     * @param _switch 文本转录任务开关，可选值：
- ON：开启文本转录任务；
- OFF：关闭文本转录任务。
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
                     * 文本转录任务开关，可选值：
- ON：开启文本转录任务；
- OFF：关闭文本转录任务。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDASRFORUPDATE_H_
