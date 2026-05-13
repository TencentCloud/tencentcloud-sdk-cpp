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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMPERSONAPPLYHISTORYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMPERSONAPPLYHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonApplyHistoryItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmPersonApplyHistory返回参数结构体
                */
                class DescribeDspmPersonApplyHistoryResponse : public AbstractModel
                {
                public:
                    DescribeDspmPersonApplyHistoryResponse();
                    ~DescribeDspmPersonApplyHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取申请记录总数
                     * @return TotalCount 申请记录总数
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
                     * 获取申请记录信息
                     * @return ApplySet 申请记录信息
                     * 
                     */
                    std::vector<DspmPersonApplyHistoryItem> GetApplySet() const;

                    /**
                     * 判断参数 ApplySet 是否已赋值
                     * @return ApplySet 是否已赋值
                     * 
                     */
                    bool ApplySetHasBeenSet() const;

                private:

                    /**
                     * 申请记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 申请记录信息
                     */
                    std::vector<DspmPersonApplyHistoryItem> m_applySet;
                    bool m_applySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMPERSONAPPLYHISTORYRESPONSE_H_
