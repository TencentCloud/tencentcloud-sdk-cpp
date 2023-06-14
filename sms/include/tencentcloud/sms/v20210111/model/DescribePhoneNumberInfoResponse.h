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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBEPHONENUMBERINFORESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBEPHONENUMBERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/PhoneNumberInfo.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribePhoneNumberInfo返回参数结构体
                */
                class DescribePhoneNumberInfoResponse : public AbstractModel
                {
                public:
                    DescribePhoneNumberInfoResponse();
                    ~DescribePhoneNumberInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取获取号码信息。
                     * @return PhoneNumberInfoSet 获取号码信息。
                     * 
                     */
                    std::vector<PhoneNumberInfo> GetPhoneNumberInfoSet() const;

                    /**
                     * 判断参数 PhoneNumberInfoSet 是否已赋值
                     * @return PhoneNumberInfoSet 是否已赋值
                     * 
                     */
                    bool PhoneNumberInfoSetHasBeenSet() const;

                private:

                    /**
                     * 获取号码信息。
                     */
                    std::vector<PhoneNumberInfo> m_phoneNumberInfoSet;
                    bool m_phoneNumberInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBEPHONENUMBERINFORESPONSE_H_
