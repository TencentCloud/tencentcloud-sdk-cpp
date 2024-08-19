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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIQUALITYCONTROLTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIQUALITYCONTROLTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体质检输入参数类型
                */
                class AiQualityControlTaskInput : public AbstractModel
                {
                public:
                    AiQualityControlTaskInput();
                    ~AiQualityControlTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体质检模板 ID 。
可以直接使用预设模板，也可以在控制台自定义模板。预设模板如下：
- 10：开启所有质检项；
- 20：仅开启格式诊断对应质检项；
- 30：仅开启无参考打分对应质检项；
- 40：仅开启画面质量对应质检项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Definition 媒体质检模板 ID 。
可以直接使用预设模板，也可以在控制台自定义模板。预设模板如下：
- 10：开启所有质检项；
- 20：仅开启格式诊断对应质检项；
- 30：仅开启无参考打分对应质检项；
- 40：仅开启画面质量对应质检项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置媒体质检模板 ID 。
可以直接使用预设模板，也可以在控制台自定义模板。预设模板如下：
- 10：开启所有质检项；
- 20：仅开启格式诊断对应质检项；
- 30：仅开启无参考打分对应质检项；
- 40：仅开启画面质量对应质检项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _definition 媒体质检模板 ID 。
可以直接使用预设模板，也可以在控制台自定义模板。预设模板如下：
- 10：开启所有质检项；
- 20：仅开启格式诊断对应质检项；
- 30：仅开启无参考打分对应质检项；
- 40：仅开启画面质量对应质检项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取渠道扩展参数json序列化字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExtPara 渠道扩展参数json序列化字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExtPara() const;

                    /**
                     * 设置渠道扩展参数json序列化字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExtPara 渠道扩展参数json序列化字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExtPara(const std::string& _channelExtPara);

                    /**
                     * 判断参数 ChannelExtPara 是否已赋值
                     * @return ChannelExtPara 是否已赋值
                     * 
                     */
                    bool ChannelExtParaHasBeenSet() const;

                private:

                    /**
                     * 媒体质检模板 ID 。
可以直接使用预设模板，也可以在控制台自定义模板。预设模板如下：
- 10：开启所有质检项；
- 20：仅开启格式诊断对应质检项；
- 30：仅开启无参考打分对应质检项；
- 40：仅开启画面质量对应质检项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 渠道扩展参数json序列化字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExtPara;
                    bool m_channelExtParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIQUALITYCONTROLTASKINPUT_H_
