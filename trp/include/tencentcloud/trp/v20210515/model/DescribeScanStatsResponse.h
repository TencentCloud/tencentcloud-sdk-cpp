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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANSTATSRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANSTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/ScanStat.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeScanStats返回参数结构体
                */
                class DescribeScanStatsResponse : public AbstractModel
                {
                public:
                    DescribeScanStatsResponse();
                    ~DescribeScanStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计记录
                     * @return ScanStats 统计记录
                     * 
                     */
                    std::vector<ScanStat> GetScanStats() const;

                    /**
                     * 判断参数 ScanStats 是否已赋值
                     * @return ScanStats 是否已赋值
                     * 
                     */
                    bool ScanStatsHasBeenSet() const;

                private:

                    /**
                     * 统计记录
                     */
                    std::vector<ScanStat> m_scanStats;
                    bool m_scanStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANSTATSRESPONSE_H_
