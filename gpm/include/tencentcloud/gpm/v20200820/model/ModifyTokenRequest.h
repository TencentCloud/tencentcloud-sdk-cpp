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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * ModifyToken请求参数结构体
                */
                class ModifyTokenRequest : public AbstractModel
                {
                public:
                    ModifyTokenRequest();
                    ~ModifyTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配Code。
                     * @return MatchCode 匹配Code。
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配Code。
                     * @param _matchCode 匹配Code。
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取单位秒，取值0-1800。此参数表示当前Token被替换后，GPM将持续推送原Token的时间。在CompatibleSpan时间范围内，用户将在事件消息中收到当前和原始Token。
                     * @return CompatibleSpan 单位秒，取值0-1800。此参数表示当前Token被替换后，GPM将持续推送原Token的时间。在CompatibleSpan时间范围内，用户将在事件消息中收到当前和原始Token。
                     * 
                     */
                    uint64_t GetCompatibleSpan() const;

                    /**
                     * 设置单位秒，取值0-1800。此参数表示当前Token被替换后，GPM将持续推送原Token的时间。在CompatibleSpan时间范围内，用户将在事件消息中收到当前和原始Token。
                     * @param _compatibleSpan 单位秒，取值0-1800。此参数表示当前Token被替换后，GPM将持续推送原Token的时间。在CompatibleSpan时间范围内，用户将在事件消息中收到当前和原始Token。
                     * 
                     */
                    void SetCompatibleSpan(const uint64_t& _compatibleSpan);

                    /**
                     * 判断参数 CompatibleSpan 是否已赋值
                     * @return CompatibleSpan 是否已赋值
                     * 
                     */
                    bool CompatibleSpanHasBeenSet() const;

                    /**
                     * 获取Token，[a-zA-Z0-9-_.], 长度0-64。如果为空，将由GPM随机生成。
                     * @return MatchToken Token，[a-zA-Z0-9-_.], 长度0-64。如果为空，将由GPM随机生成。
                     * 
                     */
                    std::string GetMatchToken() const;

                    /**
                     * 设置Token，[a-zA-Z0-9-_.], 长度0-64。如果为空，将由GPM随机生成。
                     * @param _matchToken Token，[a-zA-Z0-9-_.], 长度0-64。如果为空，将由GPM随机生成。
                     * 
                     */
                    void SetMatchToken(const std::string& _matchToken);

                    /**
                     * 判断参数 MatchToken 是否已赋值
                     * @return MatchToken 是否已赋值
                     * 
                     */
                    bool MatchTokenHasBeenSet() const;

                private:

                    /**
                     * 匹配Code。
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * 单位秒，取值0-1800。此参数表示当前Token被替换后，GPM将持续推送原Token的时间。在CompatibleSpan时间范围内，用户将在事件消息中收到当前和原始Token。
                     */
                    uint64_t m_compatibleSpan;
                    bool m_compatibleSpanHasBeenSet;

                    /**
                     * Token，[a-zA-Z0-9-_.], 长度0-64。如果为空，将由GPM随机生成。
                     */
                    std::string m_matchToken;
                    bool m_matchTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENREQUEST_H_
