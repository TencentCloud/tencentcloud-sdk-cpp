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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_VOICEMESSAGESTATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_VOICEMESSAGESTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音消息用量统计信息
                */
                class VoiceMessageStatisticsItem : public AbstractModel
                {
                public:
                    VoiceMessageStatisticsItem();
                    ~VoiceMessageStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取离线语音DAU
                     * @return Dau 离线语音DAU
                     * 
                     */
                    uint64_t GetDau() const;

                    /**
                     * 设置离线语音DAU
                     * @param _dau 离线语音DAU
                     * 
                     */
                    void SetDau(const uint64_t& _dau);

                    /**
                     * 判断参数 Dau 是否已赋值
                     * @return Dau 是否已赋值
                     * 
                     */
                    bool DauHasBeenSet() const;

                private:

                    /**
                     * 离线语音DAU
                     */
                    uint64_t m_dau;
                    bool m_dauHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_VOICEMESSAGESTATISTICSITEM_H_
