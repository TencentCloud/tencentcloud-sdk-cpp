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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SUBSCRIBERECORDUSERIDS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SUBSCRIBERECORDUSERIDS_H_

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
                * 指定订阅流白名单或者黑名单。
                */
                class SubscribeRecordUserIds : public AbstractModel
                {
                public:
                    SubscribeRecordUserIds();
                    ~SubscribeRecordUserIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数
                     * @return UnSubscribeUserIds 订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数
                     * 
                     */
                    std::vector<std::string> GetUnSubscribeUserIds() const;

                    /**
                     * 设置订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数
                     * @param _unSubscribeUserIds 订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数
                     * 
                     */
                    void SetUnSubscribeUserIds(const std::vector<std::string>& _unSubscribeUserIds);

                    /**
                     * 判断参数 UnSubscribeUserIds 是否已赋值
                     * @return UnSubscribeUserIds 是否已赋值
                     * 
                     */
                    bool UnSubscribeUserIdsHasBeenSet() const;

                    /**
                     * 获取订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数。
                     * @return SubscribeUserIds 订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数。
                     * 
                     */
                    std::vector<std::string> GetSubscribeUserIds() const;

                    /**
                     * 设置订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数。
                     * @param _subscribeUserIds 订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数。
                     * 
                     */
                    void SetSubscribeUserIds(const std::vector<std::string>& _subscribeUserIds);

                    /**
                     * 判断参数 SubscribeUserIds 是否已赋值
                     * @return SubscribeUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeUserIdsHasBeenSet() const;

                private:

                    /**
                     * 订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数
                     */
                    std::vector<std::string> m_unSubscribeUserIds;
                    bool m_unSubscribeUserIdsHasBeenSet;

                    /**
                     * 订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过20。
注意：只能同时设置UnSubscribeAudioUserIds、SubscribeAudioUserIds 其中1个参数。
                     */
                    std::vector<std::string> m_subscribeUserIds;
                    bool m_subscribeUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SUBSCRIBERECORDUSERIDS_H_
