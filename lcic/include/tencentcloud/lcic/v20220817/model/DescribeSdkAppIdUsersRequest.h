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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESDKAPPIDUSERSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESDKAPPIDUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeSdkAppIdUsers请求参数结构体
                */
                class DescribeSdkAppIdUsersRequest : public AbstractModel
                {
                public:
                    DescribeSdkAppIdUsersRequest();
                    ~DescribeSdkAppIdUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return SdkAppId 应用ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID
                     * @param _sdkAppId 应用ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页，默认值为1
                     * @return Page 分页，默认值为1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页，默认值为1
                     * @param _page 分页，默认值为1
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取分页数据限制，默认值为20
                     * @return Limit 分页数据限制，默认值为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页数据限制，默认值为20
                     * @param _limit 分页数据限制，默认值为20
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
                     * 应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页，默认值为1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 分页数据限制，默认值为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESDKAPPIDUSERSREQUEST_H_
