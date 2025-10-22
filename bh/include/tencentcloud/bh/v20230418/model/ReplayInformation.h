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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_REPLAYINFORMATION_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_REPLAYINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 回放所需字段信息
                */
                class ReplayInformation : public AbstractModel
                {
                public:
                    ReplayInformation();
                    ~ReplayInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取令牌
                     * @return Token 令牌
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置令牌
                     * @param _token 令牌
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取会话开始时间
                     * @return StartTime 会话开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置会话开始时间
                     * @param _startTime 会话开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取回放链接
                     * @return Address 回放链接
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置回放链接
                     * @param _address 回放链接
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取回放类型 ，默认0， 1-rfb 2-mp4 3-ssh
                     * @return ReplayType 回放类型 ，默认0， 1-rfb 2-mp4 3-ssh
                     * 
                     */
                    uint64_t GetReplayType() const;

                    /**
                     * 设置回放类型 ，默认0， 1-rfb 2-mp4 3-ssh
                     * @param _replayType 回放类型 ，默认0， 1-rfb 2-mp4 3-ssh
                     * 
                     */
                    void SetReplayType(const uint64_t& _replayType);

                    /**
                     * 判断参数 ReplayType 是否已赋值
                     * @return ReplayType 是否已赋值
                     * 
                     */
                    bool ReplayTypeHasBeenSet() const;

                private:

                    /**
                     * 令牌
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 会话开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 回放链接
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 回放类型 ，默认0， 1-rfb 2-mp4 3-ssh
                     */
                    uint64_t m_replayType;
                    bool m_replayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_REPLAYINFORMATION_H_
