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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/EventPatchInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWindowsPatchList返回参数结构体
                */
                class DescribeWindowsPatchListResponse : public AbstractModel
                {
                public:
                    DescribeWindowsPatchListResponse();
                    ~DescribeWindowsPatchListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取补丁和漏洞的总数
                     * @return TotalCount 补丁和漏洞的总数
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
                     * 获取Windows补丁信息列表
                     * @return PatchInfoList Windows补丁信息列表
                     * 
                     */
                    std::vector<EventPatchInfo> GetPatchInfoList() const;

                    /**
                     * 判断参数 PatchInfoList 是否已赋值
                     * @return PatchInfoList 是否已赋值
                     * 
                     */
                    bool PatchInfoListHasBeenSet() const;

                private:

                    /**
                     * 补丁和漏洞的总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Windows补丁信息列表
                     */
                    std::vector<EventPatchInfo> m_patchInfoList;
                    bool m_patchInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTRESPONSE_H_
