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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGEQUOTARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGEQUOTARESPONSE_H_

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
                * DescribePurgeQuota返回参数结构体
                */
                class DescribePurgeQuotaResponse : public AbstractModel
                {
                public:
                    DescribePurgeQuotaResponse();
                    ~DescribePurgeQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取URL刷新用量及配额。
                     * @return UrlPurge URL刷新用量及配额。
                     * 
                     */
                    std::vector<Quota> GetUrlPurge() const;

                    /**
                     * 判断参数 UrlPurge 是否已赋值
                     * @return UrlPurge 是否已赋值
                     * 
                     */
                    bool UrlPurgeHasBeenSet() const;

                    /**
                     * 获取目录刷新用量及配额。
                     * @return PathPurge 目录刷新用量及配额。
                     * 
                     */
                    std::vector<Quota> GetPathPurge() const;

                    /**
                     * 判断参数 PathPurge 是否已赋值
                     * @return PathPurge 是否已赋值
                     * 
                     */
                    bool PathPurgeHasBeenSet() const;

                private:

                    /**
                     * URL刷新用量及配额。
                     */
                    std::vector<Quota> m_urlPurge;
                    bool m_urlPurgeHasBeenSet;

                    /**
                     * 目录刷新用量及配额。
                     */
                    std::vector<Quota> m_pathPurge;
                    bool m_pathPurgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPURGEQUOTARESPONSE_H_
