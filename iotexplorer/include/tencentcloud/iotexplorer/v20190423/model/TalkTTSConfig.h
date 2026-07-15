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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSFlow.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 当前仅支持 `flow`（TRTC Flow TTS）
                */
                class TalkTTSConfig : public AbstractModel
                {
                public:
                    TalkTTSConfig();
                    ~TalkTTSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TTS的类型
                     * @return Type TTS的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置TTS的类型
                     * @param _type TTS的类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Flow TTS 的具体配置
                     * @return Flow Flow TTS 的具体配置
                     * 
                     */
                    TalkTTSFlow GetFlow() const;

                    /**
                     * 设置Flow TTS 的具体配置
                     * @param _flow Flow TTS 的具体配置
                     * 
                     */
                    void SetFlow(const TalkTTSFlow& _flow);

                    /**
                     * 判断参数 Flow 是否已赋值
                     * @return Flow 是否已赋值
                     * 
                     */
                    bool FlowHasBeenSet() const;

                private:

                    /**
                     * TTS的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Flow TTS 的具体配置
                     */
                    TalkTTSFlow m_flow;
                    bool m_flowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSCONFIG_H_
