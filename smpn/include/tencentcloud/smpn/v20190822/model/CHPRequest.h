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

#ifndef TENCENTCLOUD_SMPN_V20190822_MODEL_CHPREQUEST_H_
#define TENCENTCLOUD_SMPN_V20190822_MODEL_CHPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            namespace Model
            {
                /**
                * 终端骚扰保护请求内容
                */
                class CHPRequest : public AbstractModel
                {
                public:
                    CHPRequest();
                    ~CHPRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电话号码
                     * @return PhoneNumber 电话号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置电话号码
                     * @param _phoneNumber 电话号码
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                private:

                    /**
                     * 电话号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_MODEL_CHPREQUEST_H_
