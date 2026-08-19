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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPEXPOSURESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPEXPOSURESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ExposesItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPExposures返回参数结构体
                */
                class DescribeCWPExposuresResponse : public AbstractModel
                {
                public:
                    DescribeCWPExposuresResponse();
                    ~DescribeCWPExposuresResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云边界分析资产数量</p>
                     * @return TotalCount <p>云边界分析资产数量</p>
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
                     * 获取<p>云边界分析资产列表</p>
                     * @return ExposeList <p>云边界分析资产列表</p>
                     * 
                     */
                    std::vector<ExposesItem> GetExposeList() const;

                    /**
                     * 判断参数 ExposeList 是否已赋值
                     * @return ExposeList 是否已赋值
                     * 
                     */
                    bool ExposeListHasBeenSet() const;

                private:

                    /**
                     * <p>云边界分析资产数量</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>云边界分析资产列表</p>
                     */
                    std::vector<ExposesItem> m_exposeList;
                    bool m_exposeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPEXPOSURESRESPONSE_H_
