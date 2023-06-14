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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPVISITRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPVISITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ResourceData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeIpVisit返回参数结构体
                */
                class DescribeIpVisitResponse : public AbstractModel
                {
                public:
                    DescribeIpVisitResponse();
                    ~DescribeIpVisitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据统计的时间粒度，支持5min,  day，分别表示5分钟，1天的时间粒度。
                     * @return Interval 数据统计的时间粒度，支持5min,  day，分别表示5分钟，1天的时间粒度。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取各个资源的回源数据详情。
                     * @return Data 各个资源的回源数据详情。
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
                     * 数据统计的时间粒度，支持5min,  day，分别表示5分钟，1天的时间粒度。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 各个资源的回源数据详情。
                     */
                    std::vector<ResourceData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPVISITRESPONSE_H_
