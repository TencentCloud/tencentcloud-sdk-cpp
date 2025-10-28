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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENATIVESPARKSESSIONSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENATIVESPARKSESSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkSessionInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeNativeSparkSessions返回参数结构体
                */
                class DescribeNativeSparkSessionsResponse : public AbstractModel
                {
                public:
                    DescribeNativeSparkSessionsResponse();
                    ~DescribeNativeSparkSessionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取spark session列表
                     * @return SparkSessionsList spark session列表
                     * 
                     */
                    std::vector<SparkSessionInfo> GetSparkSessionsList() const;

                    /**
                     * 判断参数 SparkSessionsList 是否已赋值
                     * @return SparkSessionsList 是否已赋值
                     * 
                     */
                    bool SparkSessionsListHasBeenSet() const;

                    /**
                     * 获取资源组总规格
                     * @return TotalSpec 资源组总规格
                     * 
                     */
                    int64_t GetTotalSpec() const;

                    /**
                     * 判断参数 TotalSpec 是否已赋值
                     * @return TotalSpec 是否已赋值
                     * 
                     */
                    bool TotalSpecHasBeenSet() const;

                    /**
                     * 获取资源组当前可用规格
                     * @return TotalAvailable 资源组当前可用规格
                     * 
                     */
                    int64_t GetTotalAvailable() const;

                    /**
                     * 判断参数 TotalAvailable 是否已赋值
                     * @return TotalAvailable 是否已赋值
                     * 
                     */
                    bool TotalAvailableHasBeenSet() const;

                private:

                    /**
                     * spark session列表
                     */
                    std::vector<SparkSessionInfo> m_sparkSessionsList;
                    bool m_sparkSessionsListHasBeenSet;

                    /**
                     * 资源组总规格
                     */
                    int64_t m_totalSpec;
                    bool m_totalSpecHasBeenSet;

                    /**
                     * 资源组当前可用规格
                     */
                    int64_t m_totalAvailable;
                    bool m_totalAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENATIVESPARKSESSIONSRESPONSE_H_
