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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/StatDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNUsageData返回参数结构体
                */
                class DescribeCDNUsageDataResponse : public AbstractModel
                {
                public:
                    DescribeCDNUsageDataResponse();
                    ~DescribeCDNUsageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取时间粒度，单位：分钟。
                     * @return DataInterval 时间粒度，单位：分钟。
                     * 
                     */
                    int64_t GetDataInterval() const;

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     * 
                     */
                    bool DataIntervalHasBeenSet() const;

                    /**
                     * 获取CDN 统计数据。
                     * @return Data CDN 统计数据。
                     * 
                     */
                    std::vector<StatDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 时间粒度，单位：分钟。
                     */
                    int64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                    /**
                     * CDN 统计数据。
                     */
                    std::vector<StatDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATARESPONSE_H_
