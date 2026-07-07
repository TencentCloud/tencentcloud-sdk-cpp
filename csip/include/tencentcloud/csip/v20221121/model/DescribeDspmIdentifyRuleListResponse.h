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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULELISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyRuleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyRuleList返回参数结构体
                */
                class DescribeDspmIdentifyRuleListResponse : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyRuleListResponse();
                    ~DescribeDspmIdentifyRuleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p><p>单位：数量</p>
                     * @return TotalCount <p>总数</p><p>单位：数量</p>
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
                     * 获取<p>结果</p>
                     * @return DataSet <p>结果</p>
                     * 
                     */
                    std::vector<DspmIdentifyRuleItem> GetDataSet() const;

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p><p>单位：数量</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>结果</p>
                     */
                    std::vector<DspmIdentifyRuleItem> m_dataSet;
                    bool m_dataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULELISTRESPONSE_H_
