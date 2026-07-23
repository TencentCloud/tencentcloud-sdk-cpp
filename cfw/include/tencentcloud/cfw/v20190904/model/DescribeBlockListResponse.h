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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BlockInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockList返回参数结构体
                */
                class DescribeBlockListResponse : public AbstractModel
                {
                public:
                    DescribeBlockListResponse();
                    ~DescribeBlockListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取阻断记录集合
                     * @return Data 阻断记录集合
                     * 
                     */
                    std::vector<BlockInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取置顶阻断记录集合
                     * @return TopData 置顶阻断记录集合
                     * 
                     */
                    std::vector<BlockInfo> GetTopData() const;

                    /**
                     * 判断参数 TopData 是否已赋值
                     * @return TopData 是否已赋值
                     * 
                     */
                    bool TopDataHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Total 数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取置顶数量
                     * @return TopCount 置顶数量
                     * 
                     */
                    int64_t GetTopCount() const;

                    /**
                     * 判断参数 TopCount 是否已赋值
                     * @return TopCount 是否已赋值
                     * 
                     */
                    bool TopCountHasBeenSet() const;

                private:

                    /**
                     * 阻断记录集合
                     */
                    std::vector<BlockInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 置顶阻断记录集合
                     */
                    std::vector<BlockInfo> m_topData;
                    bool m_topDataHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 置顶数量
                     */
                    int64_t m_topCount;
                    bool m_topCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKLISTRESPONSE_H_
