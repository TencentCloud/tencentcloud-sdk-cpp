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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEPSAREGULATIONSRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEPSAREGULATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/PsaRegulation.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribePsaRegulations返回参数结构体
                */
                class DescribePsaRegulationsResponse : public AbstractModel
                {
                public:
                    DescribePsaRegulationsResponse();
                    ~DescribePsaRegulationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回规则数量
                     * @return TotalCount 返回规则数量
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
                     * 获取返回规则列表
                     * @return PsaRegulations 返回规则列表
                     * 
                     */
                    std::vector<PsaRegulation> GetPsaRegulations() const;

                    /**
                     * 判断参数 PsaRegulations 是否已赋值
                     * @return PsaRegulations 是否已赋值
                     * 
                     */
                    bool PsaRegulationsHasBeenSet() const;

                private:

                    /**
                     * 返回规则数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回规则列表
                     */
                    std::vector<PsaRegulation> m_psaRegulations;
                    bool m_psaRegulationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEPSAREGULATIONSRESPONSE_H_
