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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_BLACKEMAILADDRESS_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_BLACKEMAILADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 邮箱黑名单结构，包含被拉黑的邮箱地址和被拉黑时间，以及被拉黑的理由
                */
                class BlackEmailAddress : public AbstractModel
                {
                public:
                    BlackEmailAddress();
                    ~BlackEmailAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取邮箱被拉黑时间
                     * @return BounceTime 邮箱被拉黑时间
                     * 
                     */
                    std::string GetBounceTime() const;

                    /**
                     * 设置邮箱被拉黑时间
                     * @param _bounceTime 邮箱被拉黑时间
                     * 
                     */
                    void SetBounceTime(const std::string& _bounceTime);

                    /**
                     * 判断参数 BounceTime 是否已赋值
                     * @return BounceTime 是否已赋值
                     * 
                     */
                    bool BounceTimeHasBeenSet() const;

                    /**
                     * 获取被拉黑的邮箱地址
                     * @return EmailAddress 被拉黑的邮箱地址
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置被拉黑的邮箱地址
                     * @param _emailAddress 被拉黑的邮箱地址
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取被拉黑的理由
                     * @return IspDesc 被拉黑的理由
                     * 
                     */
                    std::string GetIspDesc() const;

                    /**
                     * 设置被拉黑的理由
                     * @param _ispDesc 被拉黑的理由
                     * 
                     */
                    void SetIspDesc(const std::string& _ispDesc);

                    /**
                     * 判断参数 IspDesc 是否已赋值
                     * @return IspDesc 是否已赋值
                     * 
                     */
                    bool IspDescHasBeenSet() const;

                private:

                    /**
                     * 邮箱被拉黑时间
                     */
                    std::string m_bounceTime;
                    bool m_bounceTimeHasBeenSet;

                    /**
                     * 被拉黑的邮箱地址
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 被拉黑的理由
                     */
                    std::string m_ispDesc;
                    bool m_ispDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_BLACKEMAILADDRESS_H_
