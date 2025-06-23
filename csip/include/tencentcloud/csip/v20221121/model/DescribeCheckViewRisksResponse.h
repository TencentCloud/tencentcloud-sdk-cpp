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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECHECKVIEWRISKSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECHECKVIEWRISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CheckViewRiskItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCheckViewRisks返回参数结构体
                */
                class DescribeCheckViewRisksResponse : public AbstractModel
                {
                public:
                    DescribeCheckViewRisksResponse();
                    ~DescribeCheckViewRisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检查视角下风险数量
                     * @return TotalCount 检查视角下风险数量
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
                     * 获取检查视角下风险列表
                     * @return CheckViewRiskList 检查视角下风险列表
                     * 
                     */
                    std::vector<CheckViewRiskItem> GetCheckViewRiskList() const;

                    /**
                     * 判断参数 CheckViewRiskList 是否已赋值
                     * @return CheckViewRiskList 是否已赋值
                     * 
                     */
                    bool CheckViewRiskListHasBeenSet() const;

                private:

                    /**
                     * 检查视角下风险数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 检查视角下风险列表
                     */
                    std::vector<CheckViewRiskItem> m_checkViewRiskList;
                    bool m_checkViewRiskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECHECKVIEWRISKSRESPONSE_H_
