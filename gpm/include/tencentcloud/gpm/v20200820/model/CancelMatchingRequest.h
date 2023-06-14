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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_CANCELMATCHINGREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_CANCELMATCHINGREQUEST_H_

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
                * CancelMatching请求参数结构体
                */
                class CancelMatchingRequest : public AbstractModel
                {
                public:
                    CancelMatchingRequest();
                    ~CancelMatchingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配 Code
                     * @return MatchCode 匹配 Code
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配 Code
                     * @param _matchCode 匹配 Code
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
                     * 获取要取消的匹配匹配票据 ID
                     * @return MatchTicketId 要取消的匹配匹配票据 ID
                     * 
                     */
                    std::string GetMatchTicketId() const;

                    /**
                     * 设置要取消的匹配匹配票据 ID
                     * @param _matchTicketId 要取消的匹配匹配票据 ID
                     * 
                     */
                    void SetMatchTicketId(const std::string& _matchTicketId);

                    /**
                     * 判断参数 MatchTicketId 是否已赋值
                     * @return MatchTicketId 是否已赋值
                     * 
                     */
                    bool MatchTicketIdHasBeenSet() const;

                private:

                    /**
                     * 匹配 Code
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * 要取消的匹配匹配票据 ID
                     */
                    std::string m_matchTicketId;
                    bool m_matchTicketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_CANCELMATCHINGREQUEST_H_
