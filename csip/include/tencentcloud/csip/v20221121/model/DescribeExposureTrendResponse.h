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
                     * 获取<p>暴露周期趋势数量统计信息</p>
                     * @return ExposeTrendList <p>暴露周期趋势数量统计信息</p>
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
                     * 获取<p>暴露周期新增数量统计</p>
                     * @return ExposeIncrement <p>暴露周期新增数量统计</p>
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
                     * 获取<p>近1天（24h）完全开放数量</p>
                     * @return OpenCount <p>近1天（24h）完全开放数量</p>
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
                     * 获取<p>近1天（24h）受限访问数量</p>
                     * @return AclCount <p>近1天（24h）受限访问数量</p>
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
                     * 获取<p>近1天（24h）无法访问数量</p>
                     * @return CloseCount <p>近1天（24h）无法访问数量</p>
                     * 
                     */
                    uint64_t GetCloseCount() const;

                    /**
                     * 判断参数 CloseCount 是否已赋值
                     * @return CloseCount 是否已赋值
                     * 
                     */
                    bool CloseCountHasBeenSet() const;

                    /**
                     * 获取<p>互联网边界总数</p>
                     * @return ExposeTotalCount <p>互联网边界总数</p>
                     * 
                     */
                    uint64_t GetExposeTotalCount() const;

                    /**
                     * 判断参数 ExposeTotalCount 是否已赋值
                     * @return ExposeTotalCount 是否已赋值
                     * 
                     */
                    bool ExposeTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>待处理边界数量</p>
                     * @return ToGovernRiskCount <p>待处理边界数量</p>
                     * 
                     */
                    uint64_t GetToGovernRiskCount() const;

                    /**
                     * 判断参数 ToGovernRiskCount 是否已赋值
                     * @return ToGovernRiskCount 是否已赋值
                     * 
                     */
                    bool ToGovernRiskCountHasBeenSet() const;

                private:

                    /**
                     * <p>暴露周期趋势数量统计信息</p>
                     */
                    std::vector<ExposeTrendItem> m_exposeTrendList;
                    bool m_exposeTrendListHasBeenSet;

                    /**
                     * <p>暴露周期新增数量统计</p>
                     */
                    uint64_t m_exposeIncrement;
                    bool m_exposeIncrementHasBeenSet;

                    /**
                     * <p>近1天（24h）完全开放数量</p>
                     */
                    uint64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * <p>近1天（24h）受限访问数量</p>
                     */
                    uint64_t m_aclCount;
                    bool m_aclCountHasBeenSet;

                    /**
                     * <p>近1天（24h）无法访问数量</p>
                     */
                    uint64_t m_closeCount;
                    bool m_closeCountHasBeenSet;

                    /**
                     * <p>互联网边界总数</p>
                     */
                    uint64_t m_exposeTotalCount;
                    bool m_exposeTotalCountHasBeenSet;

                    /**
                     * <p>待处理边界数量</p>
                     */
                    uint64_t m_toGovernRiskCount;
                    bool m_toGovernRiskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_
