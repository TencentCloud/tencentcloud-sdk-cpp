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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulInfoList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulList返回参数结构体
                */
                class DescribeVulListResponse : public AbstractModel
                {
                public:
                    DescribeVulListResponse();
                    ~DescribeVulListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞列表
                     * @return VulInfoList 漏洞列表
                     * 
                     */
                    std::vector<VulInfoList> GetVulInfoList() const;

                    /**
                     * 判断参数 VulInfoList 是否已赋值
                     * @return VulInfoList 是否已赋值
                     * 
                     */
                    bool VulInfoListHasBeenSet() const;

                    /**
                     * 获取漏洞总条数
                     * @return TotalCount 漏洞总条数
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
                     * 获取重点关注漏洞总数
                     * @return FollowVulCount 重点关注漏洞总数
                     * 
                     */
                    uint64_t GetFollowVulCount() const;

                    /**
                     * 判断参数 FollowVulCount 是否已赋值
                     * @return FollowVulCount 是否已赋值
                     * 
                     */
                    bool FollowVulCountHasBeenSet() const;

                private:

                    /**
                     * 漏洞列表
                     */
                    std::vector<VulInfoList> m_vulInfoList;
                    bool m_vulInfoListHasBeenSet;

                    /**
                     * 漏洞总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 重点关注漏洞总数
                     */
                    uint64_t m_followVulCount;
                    bool m_followVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTRESPONSE_H_
