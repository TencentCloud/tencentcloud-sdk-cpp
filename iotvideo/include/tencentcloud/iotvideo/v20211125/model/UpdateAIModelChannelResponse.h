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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_UPDATEAIMODELCHANNELRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_UPDATEAIMODELCHANNELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * UpdateAIModelChannel返回参数结构体
                */
                class UpdateAIModelChannelResponse : public AbstractModel
                {
                public:
                    UpdateAIModelChannelResponse();
                    ~UpdateAIModelChannelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取第三方推送密钥，如果选择自动生成则会返回此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForwardKey 第三方推送密钥，如果选择自动生成则会返回此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetForwardKey() const;

                    /**
                     * 判断参数 ForwardKey 是否已赋值
                     * @return ForwardKey 是否已赋值
                     * 
                     */
                    bool ForwardKeyHasBeenSet() const;

                private:

                    /**
                     * 第三方推送密钥，如果选择自动生成则会返回此字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forwardKey;
                    bool m_forwardKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_UPDATEAIMODELCHANNELRESPONSE_H_
