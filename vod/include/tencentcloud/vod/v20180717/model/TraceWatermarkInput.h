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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRACEWATERMARKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRACEWATERMARKINPUT_H_

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
                * 溯源水印参数
                */
                class TraceWatermarkInput : public AbstractModel
                {
                public:
                    TraceWatermarkInput();
                    ~TraceWatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取溯源水印任务开关，此字段必填，可选值：
<li>ON：开启溯源水印；</li>
<li>OFF：关闭溯源水印。</li>
                     * @return Switch 溯源水印任务开关，此字段必填，可选值：
<li>ON：开启溯源水印；</li>
<li>OFF：关闭溯源水印。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置溯源水印任务开关，此字段必填，可选值：
<li>ON：开启溯源水印；</li>
<li>OFF：关闭溯源水印。</li>
                     * @param _switch 溯源水印任务开关，此字段必填，可选值：
<li>ON：开启溯源水印；</li>
<li>OFF：关闭溯源水印。</li>
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
                     * 获取该字段已废弃，请勿使用。
                     * @return Definition 该字段已废弃，请勿使用。
                     * @deprecated
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置该字段已废弃，请勿使用。
                     * @param _definition 该字段已废弃，请勿使用。
                     * @deprecated
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * @deprecated
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 溯源水印任务开关，此字段必填，可选值：
<li>ON：开启溯源水印；</li>
<li>OFF：关闭溯源水印。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 该字段已废弃，请勿使用。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRACEWATERMARKINPUT_H_
