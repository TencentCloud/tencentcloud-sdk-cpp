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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESCANRESULTSRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESCANRESULTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/ScanSetInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeScanResults返回参数结构体
                */
                class DescribeScanResultsResponse : public AbstractModel
                {
                public:
                    DescribeScanResultsResponse();
                    ~DescribeScanResultsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取批量扫描的app结果集
                     * @return ScanSet 批量扫描的app结果集
                     */
                    std::vector<ScanSetInfo> GetScanSet() const;

                    /**
                     * 判断参数 ScanSet 是否已赋值
                     * @return ScanSet 是否已赋值
                     */
                    bool ScanSetHasBeenSet() const;

                    /**
                     * 获取批量扫描结果的个数
                     * @return TotalCount 批量扫描结果的个数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 批量扫描的app结果集
                     */
                    std::vector<ScanSetInfo> m_scanSet;
                    bool m_scanSetHasBeenSet;

                    /**
                     * 批量扫描结果的个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESCANRESULTSRESPONSE_H_
