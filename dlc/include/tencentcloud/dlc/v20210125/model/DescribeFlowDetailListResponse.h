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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEFLOWDETAILLISTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEFLOWDETAILLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/FlowDetail.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeFlowDetailList返回参数结构体
                */
                class DescribeFlowDetailListResponse : public AbstractModel
                {
                public:
                    DescribeFlowDetailListResponse();
                    ~DescribeFlowDetailListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流程详情列表
                     * @return FlowDetailList 流程详情列表
                     * 
                     */
                    std::vector<FlowDetail> GetFlowDetailList() const;

                    /**
                     * 判断参数 FlowDetailList 是否已赋值
                     * @return FlowDetailList 是否已赋值
                     * 
                     */
                    bool FlowDetailListHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return Total 总记录数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 流程详情列表
                     */
                    std::vector<FlowDetail> m_flowDetailList;
                    bool m_flowDetailListHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEFLOWDETAILLISTRESPONSE_H_
