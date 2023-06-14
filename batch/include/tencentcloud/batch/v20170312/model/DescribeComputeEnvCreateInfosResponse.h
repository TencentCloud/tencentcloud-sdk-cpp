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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVCREATEINFOSRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVCREATEINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/ComputeEnvCreateInfo.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnvCreateInfos返回参数结构体
                */
                class DescribeComputeEnvCreateInfosResponse : public AbstractModel
                {
                public:
                    DescribeComputeEnvCreateInfosResponse();
                    ~DescribeComputeEnvCreateInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境数量
                     * @return TotalCount 计算环境数量
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
                     * 获取计算环境创建信息列表
                     * @return ComputeEnvCreateInfoSet 计算环境创建信息列表
                     * 
                     */
                    std::vector<ComputeEnvCreateInfo> GetComputeEnvCreateInfoSet() const;

                    /**
                     * 判断参数 ComputeEnvCreateInfoSet 是否已赋值
                     * @return ComputeEnvCreateInfoSet 是否已赋值
                     * 
                     */
                    bool ComputeEnvCreateInfoSetHasBeenSet() const;

                private:

                    /**
                     * 计算环境数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 计算环境创建信息列表
                     */
                    std::vector<ComputeEnvCreateInfo> m_computeEnvCreateInfoSet;
                    bool m_computeEnvCreateInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVCREATEINFOSRESPONSE_H_
