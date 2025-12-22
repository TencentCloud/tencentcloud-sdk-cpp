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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECLUSTERBASEMETRICCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECLUSTERBASEMETRICCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/BaseMetricCollectConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeClusterBaseMetricConfigs返回参数结构体
                */
                class DescribeClusterBaseMetricConfigsResponse : public AbstractModel
                {
                public:
                    DescribeClusterBaseMetricConfigsResponse();
                    ~DescribeClusterBaseMetricConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数目
                     * @return TotalCount 总数目
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
                     * 获取指标采集配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Datas 指标采集配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaseMetricCollectConfig> GetDatas() const;

                    /**
                     * 判断参数 Datas 是否已赋值
                     * @return Datas 是否已赋值
                     * 
                     */
                    bool DatasHasBeenSet() const;

                private:

                    /**
                     * 总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 指标采集配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaseMetricCollectConfig> m_datas;
                    bool m_datasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECLUSTERBASEMETRICCONFIGSRESPONSE_H_
