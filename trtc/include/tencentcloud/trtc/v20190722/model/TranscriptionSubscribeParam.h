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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONSUBSCRIBEPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONSUBSCRIBEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 转录服务订阅用户参数
                */
                class TranscriptionSubscribeParam : public AbstractModel
                {
                public:
                    TranscriptionSubscribeParam();
                    ~TranscriptionSubscribeParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转录用户白名单，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。 使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @return SubscribeList <p>转录用户白名单，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。 使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetSubscribeList() const;

                    /**
                     * 设置<p>转录用户白名单，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。 使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @param _subscribeList <p>转录用户白名单，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。 使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * 
                     */
                    void SetSubscribeList(const std::vector<TranscriptionUserInfoParams>& _subscribeList);

                    /**
                     * 判断参数 SubscribeList 是否已赋值
                     * @return SubscribeList 是否已赋值
                     * 
                     */
                    bool SubscribeListHasBeenSet() const;

                    /**
                     * 获取<p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。 同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @return UnSubscribeList <p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。 同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetUnSubscribeList() const;

                    /**
                     * 设置<p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。 同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * @param _unSubscribeList <p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。 同一个用户同时在黑白名单时，以黑名单为主。</p>
                     * 
                     */
                    void SetUnSubscribeList(const std::vector<TranscriptionUserInfoParams>& _unSubscribeList);

                    /**
                     * 判断参数 UnSubscribeList 是否已赋值
                     * @return UnSubscribeList 是否已赋值
                     * 
                     */
                    bool UnSubscribeListHasBeenSet() const;

                private:

                    /**
                     * <p>转录用户白名单，为空或不填表示转录所有主播音频，填具体值表示转录指定主播音频。 使用黑白名单时，同一个用户同时在黑白名单时，以黑名单为主。</p>
                     */
                    std::vector<TranscriptionUserInfoParams> m_subscribeList;
                    bool m_subscribeListHasBeenSet;

                    /**
                     * <p>转录用户黑名单，为空或不填表示无黑名单，填具体值表示不转录指定主播音频。 同一个用户同时在黑白名单时，以黑名单为主。</p>
                     */
                    std::vector<TranscriptionUserInfoParams> m_unSubscribeList;
                    bool m_unSubscribeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONSUBSCRIBEPARAM_H_
