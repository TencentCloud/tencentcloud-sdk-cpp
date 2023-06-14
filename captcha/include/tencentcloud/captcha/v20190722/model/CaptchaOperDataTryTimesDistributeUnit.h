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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATATRYTIMESDISTRIBUTEUNIT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATATRYTIMESDISTRIBUTEUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaOperData方法 尝试次数分布 type = 4
                */
                class CaptchaOperDataTryTimesDistributeUnit : public AbstractModel
                {
                public:
                    CaptchaOperDataTryTimesDistributeUnit();
                    ~CaptchaOperDataTryTimesDistributeUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取尝试次数
                     * @return TryCount 尝试次数
                     * 
                     */
                    int64_t GetTryCount() const;

                    /**
                     * 设置尝试次数
                     * @param _tryCount 尝试次数
                     * 
                     */
                    void SetTryCount(const int64_t& _tryCount);

                    /**
                     * 判断参数 TryCount 是否已赋值
                     * @return TryCount 是否已赋值
                     * 
                     */
                    bool TryCountHasBeenSet() const;

                    /**
                     * 获取用户请求数量
                     * @return UserCount 用户请求数量
                     * 
                     */
                    int64_t GetUserCount() const;

                    /**
                     * 设置用户请求数量
                     * @param _userCount 用户请求数量
                     * 
                     */
                    void SetUserCount(const int64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                private:

                    /**
                     * 尝试次数
                     */
                    int64_t m_tryCount;
                    bool m_tryCountHasBeenSet;

                    /**
                     * 用户请求数量
                     */
                    int64_t m_userCount;
                    bool m_userCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATATRYTIMESDISTRIBUTEUNIT_H_
