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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VOICESLOTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VOICESLOTINFO_H_

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
                * 音色配额
                */
                class VoiceSlotInfo : public AbstractModel
                {
                public:
                    VoiceSlotInfo();
                    ~VoiceSlotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音色限制数量</p>
                     * @return Limit <p>音色限制数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>音色限制数量</p>
                     * @param _limit <p>音色限制数量</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>音色限制剩余数</p>
                     * @return Remaining <p>音色限制剩余数</p>
                     * 
                     */
                    int64_t GetRemaining() const;

                    /**
                     * 设置<p>音色限制剩余数</p>
                     * @param _remaining <p>音色限制剩余数</p>
                     * 
                     */
                    void SetRemaining(const int64_t& _remaining);

                    /**
                     * 判断参数 Remaining 是否已赋值
                     * @return Remaining 是否已赋值
                     * 
                     */
                    bool RemainingHasBeenSet() const;

                    /**
                     * 获取<p>音色限制已用数</p>
                     * @return Used <p>音色限制已用数</p>
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置<p>音色限制已用数</p>
                     * @param _used <p>音色限制已用数</p>
                     * 
                     */
                    void SetUsed(const int64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * <p>音色限制数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>音色限制剩余数</p>
                     */
                    int64_t m_remaining;
                    bool m_remainingHasBeenSet;

                    /**
                     * <p>音色限制已用数</p>
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VOICESLOTINFO_H_
