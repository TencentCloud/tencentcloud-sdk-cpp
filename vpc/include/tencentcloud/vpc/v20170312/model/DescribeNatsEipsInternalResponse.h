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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATSEIPSINTERNALRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATSEIPSINTERNALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatsEipsInternal返回参数结构体
                */
                class DescribeNatsEipsInternalResponse : public AbstractModel
                {
                public:
                    DescribeNatsEipsInternalResponse();
                    ~DescribeNatsEipsInternalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取eip Ip列表
                     * @return EipSet eip Ip列表
                     * 
                     */
                    std::vector<std::string> GetEipSet() const;

                    /**
                     * 判断参数 EipSet 是否已赋值
                     * @return EipSet 是否已赋值
                     * 
                     */
                    bool EipSetHasBeenSet() const;

                    /**
                     * 获取eip ip列表总数
                     * @return TotalCount eip ip列表总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * eip Ip列表
                     */
                    std::vector<std::string> m_eipSet;
                    bool m_eipSetHasBeenSet;

                    /**
                     * eip ip列表总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATSEIPSINTERNALRESPONSE_H_
