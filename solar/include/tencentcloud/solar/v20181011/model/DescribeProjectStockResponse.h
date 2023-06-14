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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTSTOCKRESPONSE_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTSTOCKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/solar/v20181011/model/ProjectStock.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeProjectStock返回参数结构体
                */
                class DescribeProjectStockResponse : public AbstractModel
                {
                public:
                    DescribeProjectStockResponse();
                    ~DescribeProjectStockResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取项目库存列表
                     * @return ProjectStocks 项目库存列表
                     * 
                     */
                    std::vector<ProjectStock> GetProjectStocks() const;

                    /**
                     * 判断参数 ProjectStocks 是否已赋值
                     * @return ProjectStocks 是否已赋值
                     * 
                     */
                    bool ProjectStocksHasBeenSet() const;

                private:

                    /**
                     * 项目库存列表
                     */
                    std::vector<ProjectStock> m_projectStocks;
                    bool m_projectStocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTSTOCKRESPONSE_H_
