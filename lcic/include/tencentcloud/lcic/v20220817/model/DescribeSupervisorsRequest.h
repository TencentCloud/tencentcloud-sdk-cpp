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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSREQUEST_H_

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
                * DescribeSupervisors请求参数结构体
                */
                class DescribeSupervisorsRequest : public AbstractModel
                {
                public:
                    DescribeSupervisorsRequest();
                    ~DescribeSupervisorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。

                     * @return SdkAppId 低代码互动课堂的SdkAppId。

                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。

                     * @param _sdkAppId 低代码互动课堂的SdkAppId。

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
                     * 获取每页数据量，最大100。 不填默认20.
                     * @return Limit 每页数据量，最大100。 不填默认20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数据量，最大100。 不填默认20.
                     * @param _limit 每页数据量，最大100。 不填默认20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页查询当前页数，从1开始递增，不填默认为1。
                     * @return Page 分页查询当前页数，从1开始递增，不填默认为1。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置分页查询当前页数，从1开始递增，不填默认为1。
                     * @param _page 分页查询当前页数，从1开始递增，不填默认为1。
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 每页数据量，最大100。 不填默认20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页查询当前页数，从1开始递增，不填默认为1。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBESUPERVISORSREQUEST_H_
