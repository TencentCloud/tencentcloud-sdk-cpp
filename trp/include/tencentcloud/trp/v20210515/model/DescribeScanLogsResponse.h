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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANLOGSRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/ScanLog.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeScanLogs返回参数结构体
                */
                class DescribeScanLogsResponse : public AbstractModel
                {
                public:
                    DescribeScanLogsResponse();
                    ~DescribeScanLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取【弃用】
                     * @return Products 【弃用】
                     * @deprecated
                     */
                    std::vector<ScanLog> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * @deprecated
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return TotalCount 条数
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
                     * 获取扫描记录
                     * @return ScanLogs 扫描记录
                     * 
                     */
                    std::vector<ScanLog> GetScanLogs() const;

                    /**
                     * 判断参数 ScanLogs 是否已赋值
                     * @return ScanLogs 是否已赋值
                     * 
                     */
                    bool ScanLogsHasBeenSet() const;

                private:

                    /**
                     * 【弃用】
                     */
                    std::vector<ScanLog> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 扫描记录
                     */
                    std::vector<ScanLog> m_scanLogs;
                    bool m_scanLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANLOGSRESPONSE_H_
