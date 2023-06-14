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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTOUTPUTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectOutput.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云转推输出源信息，包含输出源和输出源转推状态。
                */
                class StreamConnectOutputInfo : public AbstractModel
                {
                public:
                    StreamConnectOutputInfo();
                    ~StreamConnectOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamConnectOutput 输出源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StreamConnectOutput GetStreamConnectOutput() const;

                    /**
                     * 设置输出源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamConnectOutput 输出源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamConnectOutput(const StreamConnectOutput& _streamConnectOutput);

                    /**
                     * 判断参数 StreamConnectOutput 是否已赋值
                     * @return StreamConnectOutput 是否已赋值
                     * 
                     */
                    bool StreamConnectOutputHasBeenSet() const;

                    /**
                     * 获取输出流状态：
<li>On ：开；</li>
<li>Off ：关 。</li>
                     * @return PushSwitch 输出流状态：
<li>On ：开；</li>
<li>Off ：关 。</li>
                     * 
                     */
                    std::string GetPushSwitch() const;

                    /**
                     * 设置输出流状态：
<li>On ：开；</li>
<li>Off ：关 。</li>
                     * @param _pushSwitch 输出流状态：
<li>On ：开；</li>
<li>Off ：关 。</li>
                     * 
                     */
                    void SetPushSwitch(const std::string& _pushSwitch);

                    /**
                     * 判断参数 PushSwitch 是否已赋值
                     * @return PushSwitch 是否已赋值
                     * 
                     */
                    bool PushSwitchHasBeenSet() const;

                private:

                    /**
                     * 输出源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamConnectOutput m_streamConnectOutput;
                    bool m_streamConnectOutputHasBeenSet;

                    /**
                     * 输出流状态：
<li>On ：开；</li>
<li>Off ：关 。</li>
                     */
                    std::string m_pushSwitch;
                    bool m_pushSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTOUTPUTINFO_H_
