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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeAccounts请求参数结构体
                */
                class DescribeAccountsRequest : public AbstractModel
                {
                public:
                    DescribeAccountsRequest();
                    ~DescribeAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取手机号码。指定手机号获取账号信息，目前仅支持国内手机号，且号码不加地区码 `+86` 等。
                     * @return Phone 手机号码。指定手机号获取账号信息，目前仅支持国内手机号，且号码不加地区码 `+86` 等。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号码。指定手机号获取账号信息，目前仅支持国内手机号，且号码不加地区码 `+86` 等。
                     * @param _phone 手机号码。指定手机号获取账号信息，目前仅支持国内手机号，且号码不加地区码 `+86` 等。
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。
                     * @return Offset 分页返回的起始偏移量，默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。
                     * @param _offset 分页返回的起始偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回的记录条数，默认值：10，最大值：20。
                     * @return Limit 分页返回的记录条数，默认值：10，最大值：20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：10，最大值：20。
                     * @param _limit 分页返回的记录条数，默认值：10，最大值：20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 手机号码。指定手机号获取账号信息，目前仅支持国内手机号，且号码不加地区码 `+86` 等。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：10，最大值：20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEACCOUNTSREQUEST_H_
