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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/PreReleaseInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePreReleaseList返回参数结构体
                */
                class DescribePreReleaseListResponse : public AbstractModel
                {
                public:
                    DescribePreReleaseListResponse();
                    ~DescribePreReleaseListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数量
                     * @return TotalCount 数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取预释放列表
                     * @return PreReleaseList 预释放列表
                     * 
                     */
                    std::vector<PreReleaseInfo> GetPreReleaseList() const;

                    /**
                     * 判断参数 PreReleaseList 是否已赋值
                     * @return PreReleaseList 是否已赋值
                     * 
                     */
                    bool PreReleaseListHasBeenSet() const;

                private:

                    /**
                     * 数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 预释放列表
                     */
                    std::vector<PreReleaseInfo> m_preReleaseList;
                    bool m_preReleaseListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPRERELEASELISTRESPONSE_H_
