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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulStoreListInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulStoreList返回参数结构体
                */
                class DescribeVulStoreListResponse : public AbstractModel
                {
                public:
                    DescribeVulStoreListResponse();
                    ~DescribeVulStoreListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞信息
                     * @return List 漏洞信息
                     * 
                     */
                    std::vector<VulStoreListInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
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
                     * 获取今日剩余搜索此时
                     * @return Remaining 今日剩余搜索此时
                     * 
                     */
                    uint64_t GetRemaining() const;

                    /**
                     * 判断参数 Remaining 是否已赋值
                     * @return Remaining 是否已赋值
                     * 
                     */
                    bool RemainingHasBeenSet() const;

                    /**
                     * 获取免费搜索次数
                     * @return FreeSearchTimes 免费搜索次数
                     * 
                     */
                    uint64_t GetFreeSearchTimes() const;

                    /**
                     * 判断参数 FreeSearchTimes 是否已赋值
                     * @return FreeSearchTimes 是否已赋值
                     * 
                     */
                    bool FreeSearchTimesHasBeenSet() const;

                private:

                    /**
                     * 漏洞信息
                     */
                    std::vector<VulStoreListInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 今日剩余搜索此时
                     */
                    uint64_t m_remaining;
                    bool m_remainingHasBeenSet;

                    /**
                     * 免费搜索次数
                     */
                    uint64_t m_freeSearchTimes;
                    bool m_freeSearchTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTRESPONSE_H_
