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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLEVELCOUNTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLEVELCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulLevelCount请求参数结构体
                */
                class DescribeVulLevelCountRequest : public AbstractModel
                {
                public:
                    DescribeVulLevelCountRequest();
                    ~DescribeVulLevelCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1:web-cms 漏洞，2.应用漏洞 3:安全基线 4: Linux软件漏洞 5: windows系统漏洞 6:应急漏洞，不填或者填0时返回 1，2，4，5 的总统计数据
                     * @return VulCategory 1:web-cms 漏洞，2.应用漏洞 3:安全基线 4: Linux软件漏洞 5: windows系统漏洞 6:应急漏洞，不填或者填0时返回 1，2，4，5 的总统计数据
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置1:web-cms 漏洞，2.应用漏洞 3:安全基线 4: Linux软件漏洞 5: windows系统漏洞 6:应急漏洞，不填或者填0时返回 1，2，4，5 的总统计数据
                     * @param _vulCategory 1:web-cms 漏洞，2.应用漏洞 3:安全基线 4: Linux软件漏洞 5: windows系统漏洞 6:应急漏洞，不填或者填0时返回 1，2，4，5 的总统计数据
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取是否仅统计重点关注漏洞 1=仅统计重点关注漏洞, 0=统计全部漏洞
                     * @return IsFollowVul 是否仅统计重点关注漏洞 1=仅统计重点关注漏洞, 0=统计全部漏洞
                     * 
                     */
                    uint64_t GetIsFollowVul() const;

                    /**
                     * 设置是否仅统计重点关注漏洞 1=仅统计重点关注漏洞, 0=统计全部漏洞
                     * @param _isFollowVul 是否仅统计重点关注漏洞 1=仅统计重点关注漏洞, 0=统计全部漏洞
                     * 
                     */
                    void SetIsFollowVul(const uint64_t& _isFollowVul);

                    /**
                     * 判断参数 IsFollowVul 是否已赋值
                     * @return IsFollowVul 是否已赋值
                     * 
                     */
                    bool IsFollowVulHasBeenSet() const;

                private:

                    /**
                     * 1:web-cms 漏洞，2.应用漏洞 3:安全基线 4: Linux软件漏洞 5: windows系统漏洞 6:应急漏洞，不填或者填0时返回 1，2，4，5 的总统计数据
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * 是否仅统计重点关注漏洞 1=仅统计重点关注漏洞, 0=统计全部漏洞
                     */
                    uint64_t m_isFollowVul;
                    bool m_isFollowVulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLEVELCOUNTREQUEST_H_
