/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPHONEEMAILLISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPHONEEMAILLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/PhoneEmailData.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePhoneEmailList返回参数结构体
                */
                class DescribePhoneEmailListResponse : public AbstractModel
                {
                public:
                    DescribePhoneEmailListResponse();
                    ~DescribePhoneEmailListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取手机或者邮箱列表
                     * @return PhoneEmailList 手机或者邮箱列表
                     * 
                     */
                    std::vector<PhoneEmailData> GetPhoneEmailList() const;

                    /**
                     * 判断参数 PhoneEmailList 是否已赋值
                     * @return PhoneEmailList 是否已赋值
                     * 
                     */
                    bool PhoneEmailListHasBeenSet() const;

                    /**
                     * 获取总数量。
                     * @return TotalCount 总数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 手机或者邮箱列表
                     */
                    std::vector<PhoneEmailData> m_phoneEmailList;
                    bool m_phoneEmailListHasBeenSet;

                    /**
                     * 总数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPHONEEMAILLISTRESPONSE_H_
