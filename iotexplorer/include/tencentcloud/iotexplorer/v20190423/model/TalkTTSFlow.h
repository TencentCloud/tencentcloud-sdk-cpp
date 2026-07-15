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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSFLOW_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * Flow TTS 的具体配置
                */
                class TalkTTSFlow : public AbstractModel
                {
                public:
                    TalkTTSFlow();
                    ~TalkTTSFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>精品音色 ID 或克隆音色 ID：具体可参考https://cloud.tencent.com/document/product/647/115414</p>
                     * @return VoiceId <p>精品音色 ID 或克隆音色 ID：具体可参考https://cloud.tencent.com/document/product/647/115414</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>精品音色 ID 或克隆音色 ID：具体可参考https://cloud.tencent.com/document/product/647/115414</p>
                     * @param _voiceId <p>精品音色 ID 或克隆音色 ID：具体可参考https://cloud.tencent.com/document/product/647/115414</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>语速，范围 0.5–2.0；为 0 表示采用默认值</p>
                     * @return Speed <p>语速，范围 0.5–2.0；为 0 表示采用默认值</p>
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置<p>语速，范围 0.5–2.0；为 0 表示采用默认值</p>
                     * @param _speed <p>语速，范围 0.5–2.0；为 0 表示采用默认值</p>
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * <p>精品音色 ID 或克隆音色 ID：具体可参考https://cloud.tencent.com/document/product/647/115414</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>语速，范围 0.5–2.0；为 0 表示采用默认值</p>
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSFLOW_H_
