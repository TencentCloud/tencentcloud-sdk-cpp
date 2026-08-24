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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBECOPYPAIRSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBECOPYPAIRSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/CopyPair.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeCopyPairs返回参数结构体
                */
                class DescribeCopyPairsResponse : public AbstractModel
                {
                public:
                    DescribeCopyPairsResponse();
                    ~DescribeCopyPairsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>符合条件的复制对总数</p>
                     * @return TotalCount <p>符合条件的复制对总数</p>
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
                     * 获取<p>复制对列表。</p>
                     * @return CopyPairSet <p>复制对列表。</p>
                     * 
                     */
                    std::vector<CopyPair> GetCopyPairSet() const;

                    /**
                     * 判断参数 CopyPairSet 是否已赋值
                     * @return CopyPairSet 是否已赋值
                     * 
                     */
                    bool CopyPairSetHasBeenSet() const;

                private:

                    /**
                     * <p>符合条件的复制对总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>复制对列表。</p>
                     */
                    std::vector<CopyPair> m_copyPairSet;
                    bool m_copyPairSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBECOPYPAIRSRESPONSE_H_
