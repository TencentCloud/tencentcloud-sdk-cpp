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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONDETAILRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/PartitionDetail.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribePartitionDetail返回参数结构体
                */
                class DescribePartitionDetailResponse : public AbstractModel
                {
                public:
                    DescribePartitionDetailResponse();
                    ~DescribePartitionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分区详情
                     * @return PartitionDetail 分区详情
                     * 
                     */
                    PartitionDetail GetPartitionDetail() const;

                    /**
                     * 判断参数 PartitionDetail 是否已赋值
                     * @return PartitionDetail 是否已赋值
                     * 
                     */
                    bool PartitionDetailHasBeenSet() const;

                private:

                    /**
                     * 分区详情
                     */
                    PartitionDetail m_partitionDetail;
                    bool m_partitionDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONDETAILRESPONSE_H_
