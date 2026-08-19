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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ExposeTrendItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeExposureTrend返回参数结构体
                */
                class DescribeExposureTrendResponse : public AbstractModel
                {
                public:
                    DescribeExposureTrendResponse();
                    ~DescribeExposureTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取暴露周期趋势数量统计信息
                     * @return ExposeTrendList 暴露周期趋势数量统计信息
                     * 
                     */
                    std::vector<ExposeTrendItem> GetExposeTrendList() const;

                    /**
                     * 判断参数 ExposeTrendList 是否已赋值
                     * @return ExposeTrendList 是否已赋值
                     * 
                     */
                    bool ExposeTrendListHasBeenSet() const;

                    /**
                     * 获取暴露周期新增数量统计
                     * @return ExposeIncrement 暴露周期新增数量统计
                     * 
                     */
                    uint64_t GetExposeIncrement() const;

                    /**
                     * 判断参数 ExposeIncrement 是否已赋值
                     * @return ExposeIncrement 是否已赋值
                     * 
                     */
                    bool ExposeIncrementHasBeenSet() const;

                    /**
                     * 获取近1天（24h）完全开放数量
                     * @return OpenCount 近1天（24h）完全开放数量
                     * 
                     */
                    uint64_t GetOpenCount() const;

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取近1天（24h）受限访问数量
                     * @return AclCount 近1天（24h）受限访问数量
                     * 
                     */
                    uint64_t GetAclCount() const;

                    /**
                     * 判断参数 AclCount 是否已赋值
                     * @return AclCount 是否已赋值
                     * 
                     */
                    bool AclCountHasBeenSet() const;

                    /**
                     * 获取近1天（24h）无法访问数量
                     * @return CloseCount 近1天（24h）无法访问数量
                     * 
                     */
                    uint64_t GetCloseCount() const;

                    /**
                     * 判断参数 CloseCount 是否已赋值
                     * @return CloseCount 是否已赋值
                     * 
                     */
                    bool CloseCountHasBeenSet() const;

                private:

                    /**
                     * 暴露周期趋势数量统计信息
                     */
                    std::vector<ExposeTrendItem> m_exposeTrendList;
                    bool m_exposeTrendListHasBeenSet;

                    /**
                     * 暴露周期新增数量统计
                     */
                    uint64_t m_exposeIncrement;
                    bool m_exposeIncrementHasBeenSet;

                    /**
                     * 近1天（24h）完全开放数量
                     */
                    uint64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * 近1天（24h）受限访问数量
                     */
                    uint64_t m_aclCount;
                    bool m_aclCountHasBeenSet;

                    /**
                     * 近1天（24h）无法访问数量
                     */
                    uint64_t m_closeCount;
                    bool m_closeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_
