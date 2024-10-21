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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBEPHONENUMBERINFOREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBEPHONENUMBERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribePhoneNumberInfo请求参数结构体
                */
                class DescribePhoneNumberInfoRequest : public AbstractModel
                {
                public:
                    DescribePhoneNumberInfoRequest();
                    ~DescribePhoneNumberInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @return PhoneNumberSet 查询手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    std::vector<std::string> GetPhoneNumberSet() const;

                    /**
                     * 设置查询手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @param _phoneNumberSet 查询手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    void SetPhoneNumberSet(const std::vector<std::string>& _phoneNumberSet);

                    /**
                     * 判断参数 PhoneNumberSet 是否已赋值
                     * @return PhoneNumberSet 是否已赋值
                     * 
                     */
                    bool PhoneNumberSetHasBeenSet() const;

                private:

                    /**
                     * 查询手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     */
                    std::vector<std::string> m_phoneNumberSet;
                    bool m_phoneNumberSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBEPHONENUMBERINFOREQUEST_H_
