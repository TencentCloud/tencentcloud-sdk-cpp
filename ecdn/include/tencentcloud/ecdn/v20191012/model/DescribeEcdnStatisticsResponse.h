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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/ResourceData.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnStatistics返回参数结构体
                */
                class DescribeEcdnStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeEcdnStatisticsResponse();
                    ~DescribeEcdnStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指定条件查询得到的数据明细
                     * @return Data 指定条件查询得到的数据明细
                     * 
                     */
                    std::vector<ResourceData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 指定条件查询得到的数据明细
                     */
                    std::vector<ResourceData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSRESPONSE_H_
