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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHIGHBASELINERISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHIGHBASELINERISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HighBaseLineRiskItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeHighBaseLineRiskList返回参数结构体
                */
                class DescribeHighBaseLineRiskListResponse : public AbstractModel
                {
                public:
                    DescribeHighBaseLineRiskListResponse();
                    ~DescribeHighBaseLineRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取高危基线风险数量
                     * @return TotalCount 高危基线风险数量
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
                     * 获取高危基线风险列表
                     * @return HighBaseLineRiskList 高危基线风险列表
                     * 
                     */
                    std::vector<HighBaseLineRiskItem> GetHighBaseLineRiskList() const;

                    /**
                     * 判断参数 HighBaseLineRiskList 是否已赋值
                     * @return HighBaseLineRiskList 是否已赋值
                     * 
                     */
                    bool HighBaseLineRiskListHasBeenSet() const;

                private:

                    /**
                     * 高危基线风险数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 高危基线风险列表
                     */
                    std::vector<HighBaseLineRiskItem> m_highBaseLineRiskList;
                    bool m_highBaseLineRiskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHIGHBASELINERISKLISTRESPONSE_H_
