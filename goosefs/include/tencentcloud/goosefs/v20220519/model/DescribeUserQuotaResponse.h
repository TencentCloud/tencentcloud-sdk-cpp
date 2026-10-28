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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEUSERQUOTARESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEUSERQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/UserQuotaInfo.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeUserQuota返回参数结构体
                */
                class DescribeUserQuotaResponse : public AbstractModel
                {
                public:
                    DescribeUserQuotaResponse();
                    ~DescribeUserQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>配额信息列表</p>
                     * @return QuotaList <p>配额信息列表</p>
                     * 
                     */
                    std::vector<UserQuotaInfo> GetQuotaList() const;

                    /**
                     * 判断参数 QuotaList 是否已赋值
                     * @return QuotaList 是否已赋值
                     * 
                     */
                    bool QuotaListHasBeenSet() const;

                private:

                    /**
                     * <p>配额信息列表</p>
                     */
                    std::vector<UserQuotaInfo> m_quotaList;
                    bool m_quotaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEUSERQUOTARESPONSE_H_
