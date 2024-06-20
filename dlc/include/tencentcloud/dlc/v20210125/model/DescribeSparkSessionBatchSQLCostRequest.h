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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLCOSTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLCOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkSessionBatchSQLCost请求参数结构体
                */
                class DescribeSparkSessionBatchSQLCostRequest : public AbstractModel
                {
                public:
                    DescribeSparkSessionBatchSQLCostRequest();
                    ~DescribeSparkSessionBatchSQLCostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SparkSQL唯一标识
                     * @return BatchIds SparkSQL唯一标识
                     * 
                     */
                    std::vector<std::string> GetBatchIds() const;

                    /**
                     * 设置SparkSQL唯一标识
                     * @param _batchIds SparkSQL唯一标识
                     * 
                     */
                    void SetBatchIds(const std::vector<std::string>& _batchIds);

                    /**
                     * 判断参数 BatchIds 是否已赋值
                     * @return BatchIds 是否已赋值
                     * 
                     */
                    bool BatchIdsHasBeenSet() const;

                private:

                    /**
                     * SparkSQL唯一标识
                     */
                    std::vector<std::string> m_batchIds;
                    bool m_batchIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLCOSTREQUEST_H_
