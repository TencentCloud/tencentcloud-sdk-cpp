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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHQUOTARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Quota.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribePushQuota返回参数结构体
                */
                class DescribePushQuotaResponse : public AbstractModel
                {
                public:
                    DescribePushQuotaResponse();
                    ~DescribePushQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Url预热用量及配额。
                     * @return UrlPush Url预热用量及配额。
                     * 
                     */
                    std::vector<Quota> GetUrlPush() const;

                    /**
                     * 判断参数 UrlPush 是否已赋值
                     * @return UrlPush 是否已赋值
                     * 
                     */
                    bool UrlPushHasBeenSet() const;

                private:

                    /**
                     * Url预热用量及配额。
                     */
                    std::vector<Quota> m_urlPush;
                    bool m_urlPushHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHQUOTARESPONSE_H_
