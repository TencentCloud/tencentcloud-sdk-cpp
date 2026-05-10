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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCADVANCEDCUSTOMELEMENTSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCADVANCEDCUSTOMELEMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAdvancedCustomElementInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeAigcAdvancedCustomElements返回参数结构体
                */
                class DescribeAigcAdvancedCustomElementsResponse : public AbstractModel
                {
                public:
                    DescribeAigcAdvancedCustomElementsResponse();
                    ~DescribeAigcAdvancedCustomElementsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AIGC 高级自定义主体信息。</p>
                     * @return ElementSet <p>AIGC 高级自定义主体信息。</p>
                     * 
                     */
                    std::vector<AigcAdvancedCustomElementInfo> GetElementSet() const;

                    /**
                     * 判断参数 ElementSet 是否已赋值
                     * @return ElementSet 是否已赋值
                     * 
                     */
                    bool ElementSetHasBeenSet() const;

                    /**
                     * 获取<p>记录总数。</p>
                     * @return TotalCount <p>记录总数。</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>AIGC 高级自定义主体信息。</p>
                     */
                    std::vector<AigcAdvancedCustomElementInfo> m_elementSet;
                    bool m_elementSetHasBeenSet;

                    /**
                     * <p>记录总数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCADVANCEDCUSTOMELEMENTSRESPONSE_H_
