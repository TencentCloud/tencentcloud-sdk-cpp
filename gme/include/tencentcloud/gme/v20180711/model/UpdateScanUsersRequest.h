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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_UPDATESCANUSERSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_UPDATESCANUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateScanUsers请求参数结构体
                */
                class UpdateScanUsersRequest : public AbstractModel
                {
                public:
                    UpdateScanUsersRequest();
                    ~UpdateScanUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param BizId 应用ID
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取字符串用户号，逗号分隔
                     * @return UserIdString 字符串用户号，逗号分隔
                     */
                    std::string GetUserIdString() const;

                    /**
                     * 设置字符串用户号，逗号分隔
                     * @param UserIdString 字符串用户号，逗号分隔
                     */
                    void SetUserIdString(const std::string& _userIdString);

                    /**
                     * 判断参数 UserIdString 是否已赋值
                     * @return UserIdString 是否已赋值
                     */
                    bool UserIdStringHasBeenSet() const;

                    /**
                     * 获取正则表达式用户号，["^6.*"]6开头的用户号
                     * @return UserIdRegex 正则表达式用户号，["^6.*"]6开头的用户号
                     */
                    std::vector<std::string> GetUserIdRegex() const;

                    /**
                     * 设置正则表达式用户号，["^6.*"]6开头的用户号
                     * @param UserIdRegex 正则表达式用户号，["^6.*"]6开头的用户号
                     */
                    void SetUserIdRegex(const std::vector<std::string>& _userIdRegex);

                    /**
                     * 判断参数 UserIdRegex 是否已赋值
                     * @return UserIdRegex 是否已赋值
                     */
                    bool UserIdRegexHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 字符串用户号，逗号分隔
                     */
                    std::string m_userIdString;
                    bool m_userIdStringHasBeenSet;

                    /**
                     * 正则表达式用户号，["^6.*"]6开头的用户号
                     */
                    std::vector<std::string> m_userIdRegex;
                    bool m_userIdRegexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_UPDATESCANUSERSREQUEST_H_
