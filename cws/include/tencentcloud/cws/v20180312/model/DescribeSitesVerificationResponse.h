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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBESITESVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBESITESVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cws/v20180312/model/SitesVerification.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DescribeSitesVerification返回参数结构体
                */
                class DescribeSitesVerificationResponse : public AbstractModel
                {
                public:
                    DescribeSitesVerificationResponse();
                    ~DescribeSitesVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验证信息数量。
                     * @return TotalCount 验证信息数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取验证信息列表。
                     * @return SitesVerification 验证信息列表。
                     * 
                     */
                    std::vector<SitesVerification> GetSitesVerification() const;

                    /**
                     * 判断参数 SitesVerification 是否已赋值
                     * @return SitesVerification 是否已赋值
                     * 
                     */
                    bool SitesVerificationHasBeenSet() const;

                private:

                    /**
                     * 验证信息数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 验证信息列表。
                     */
                    std::vector<SitesVerification> m_sitesVerification;
                    bool m_sitesVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBESITESVERIFICATIONRESPONSE_H_
