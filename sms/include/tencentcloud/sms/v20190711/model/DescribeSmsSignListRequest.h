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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * DescribeSmsSignList请求参数结构体
                */
                class DescribeSmsSignListRequest : public AbstractModel
                {
                public:
                    DescribeSmsSignListRequest();
                    ~DescribeSmsSignListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取签名 ID 数组。
                     * @return SignIdSet 签名 ID 数组。
                     * 
                     */
                    std::vector<uint64_t> GetSignIdSet() const;

                    /**
                     * 设置签名 ID 数组。
                     * @param _signIdSet 签名 ID 数组。
                     * 
                     */
                    void SetSignIdSet(const std::vector<uint64_t>& _signIdSet);

                    /**
                     * 判断参数 SignIdSet 是否已赋值
                     * @return SignIdSet 是否已赋值
                     * 
                     */
                    bool SignIdSetHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @param _international 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                private:

                    /**
                     * 签名 ID 数组。
                     */
                    std::vector<uint64_t> m_signIdSet;
                    bool m_signIdSetHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_
