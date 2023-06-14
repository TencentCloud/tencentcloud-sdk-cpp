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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBESTREAMUSERIDS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBESTREAMUSERIDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 指定订阅流白名单或者黑名单，音频的白名单和音频黑名单不能同时设置，视频亦然。同时实际并发订阅的媒体流路数最大支持25路流，混流场景下视频的多画面最大支持24画面。支持通过设置".*$"通配符，来前缀匹配黑白名单的UserId，注意房间里不能有和通配符规则相同的用户，否则将视为订阅具体用户，前缀规则会失效。
                */
                class SubscribeStreamUserIds : public AbstractModel
                {
                public:
                    SubscribeStreamUserIds();
                    ~SubscribeStreamUserIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流；["1.*$"], 代表订阅UserId前缀为1的音频流。默认不填订阅房间内所有的音频流，订阅列表用户数不超过32。
                     * @return SubscribeAudioUserIds 订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流；["1.*$"], 代表订阅UserId前缀为1的音频流。默认不填订阅房间内所有的音频流，订阅列表用户数不超过32。
                     * 
                     */
                    std::vector<std::string> GetSubscribeAudioUserIds() const;

                    /**
                     * 设置订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流；["1.*$"], 代表订阅UserId前缀为1的音频流。默认不填订阅房间内所有的音频流，订阅列表用户数不超过32。
                     * @param _subscribeAudioUserIds 订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流；["1.*$"], 代表订阅UserId前缀为1的音频流。默认不填订阅房间内所有的音频流，订阅列表用户数不超过32。
                     * 
                     */
                    void SetSubscribeAudioUserIds(const std::vector<std::string>& _subscribeAudioUserIds);

                    /**
                     * 判断参数 SubscribeAudioUserIds 是否已赋值
                     * @return SubscribeAudioUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeAudioUserIdsHasBeenSet() const;

                    /**
                     * 获取订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流；["1.*$"], 代表不订阅UserId前缀为1的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过32。
                     * @return UnSubscribeAudioUserIds 订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流；["1.*$"], 代表不订阅UserId前缀为1的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过32。
                     * 
                     */
                    std::vector<std::string> GetUnSubscribeAudioUserIds() const;

                    /**
                     * 设置订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流；["1.*$"], 代表不订阅UserId前缀为1的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过32。
                     * @param _unSubscribeAudioUserIds 订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流；["1.*$"], 代表不订阅UserId前缀为1的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过32。
                     * 
                     */
                    void SetUnSubscribeAudioUserIds(const std::vector<std::string>& _unSubscribeAudioUserIds);

                    /**
                     * 判断参数 UnSubscribeAudioUserIds 是否已赋值
                     * @return UnSubscribeAudioUserIds 是否已赋值
                     * 
                     */
                    bool UnSubscribeAudioUserIdsHasBeenSet() const;

                    /**
                     * 获取订阅视频流白名单，指定订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表订阅UserId  1，2，3的视频流；["1.*$"], 代表订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * @return SubscribeVideoUserIds 订阅视频流白名单，指定订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表订阅UserId  1，2，3的视频流；["1.*$"], 代表订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * 
                     */
                    std::vector<std::string> GetSubscribeVideoUserIds() const;

                    /**
                     * 设置订阅视频流白名单，指定订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表订阅UserId  1，2，3的视频流；["1.*$"], 代表订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * @param _subscribeVideoUserIds 订阅视频流白名单，指定订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表订阅UserId  1，2，3的视频流；["1.*$"], 代表订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * 
                     */
                    void SetSubscribeVideoUserIds(const std::vector<std::string>& _subscribeVideoUserIds);

                    /**
                     * 判断参数 SubscribeVideoUserIds 是否已赋值
                     * @return SubscribeVideoUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeVideoUserIdsHasBeenSet() const;

                    /**
                     * 获取订阅视频流黑名单，指定不订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表不订阅UserId  1，2，3的视频流；["1.*$"], 代表不订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * @return UnSubscribeVideoUserIds 订阅视频流黑名单，指定不订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表不订阅UserId  1，2，3的视频流；["1.*$"], 代表不订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * 
                     */
                    std::vector<std::string> GetUnSubscribeVideoUserIds() const;

                    /**
                     * 设置订阅视频流黑名单，指定不订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表不订阅UserId  1，2，3的视频流；["1.*$"], 代表不订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * @param _unSubscribeVideoUserIds 订阅视频流黑名单，指定不订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表不订阅UserId  1，2，3的视频流；["1.*$"], 代表不订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     * 
                     */
                    void SetUnSubscribeVideoUserIds(const std::vector<std::string>& _unSubscribeVideoUserIds);

                    /**
                     * 判断参数 UnSubscribeVideoUserIds 是否已赋值
                     * @return UnSubscribeVideoUserIds 是否已赋值
                     * 
                     */
                    bool UnSubscribeVideoUserIdsHasBeenSet() const;

                private:

                    /**
                     * 订阅音频流白名单，指定订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表订阅UserId 1，2，3的音频流；["1.*$"], 代表订阅UserId前缀为1的音频流。默认不填订阅房间内所有的音频流，订阅列表用户数不超过32。
                     */
                    std::vector<std::string> m_subscribeAudioUserIds;
                    bool m_subscribeAudioUserIdsHasBeenSet;

                    /**
                     * 订阅音频流黑名单，指定不订阅哪几个UserId的音频流，例如["1", "2", "3"], 代表不订阅UserId 1，2，3的音频流；["1.*$"], 代表不订阅UserId前缀为1的音频流。默认不填订阅房间内所有音频流，订阅列表用户数不超过32。
                     */
                    std::vector<std::string> m_unSubscribeAudioUserIds;
                    bool m_unSubscribeAudioUserIdsHasBeenSet;

                    /**
                     * 订阅视频流白名单，指定订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表订阅UserId  1，2，3的视频流；["1.*$"], 代表订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     */
                    std::vector<std::string> m_subscribeVideoUserIds;
                    bool m_subscribeVideoUserIdsHasBeenSet;

                    /**
                     * 订阅视频流黑名单，指定不订阅哪几个UserId的视频流，例如["1", "2", "3"], 代表不订阅UserId  1，2，3的视频流；["1.*$"], 代表不订阅UserId前缀为1的视频流。默认不填订阅房间内所有视频流，订阅列表用户数不超过32。
                     */
                    std::vector<std::string> m_unSubscribeVideoUserIds;
                    bool m_unSubscribeVideoUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBESTREAMUSERIDS_H_
