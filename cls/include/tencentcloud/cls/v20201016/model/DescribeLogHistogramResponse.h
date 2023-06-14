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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGHISTOGRAMRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGHISTOGRAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HistogramInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeLogHistogram返回参数结构体
                */
                class DescribeLogHistogramResponse : public AbstractModel
                {
                public:
                    DescribeLogHistogramResponse();
                    ~DescribeLogHistogramResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计周期： 单位ms
                     * @return Interval 统计周期： 单位ms
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取命中关键字的日志总条数
                     * @return TotalCount 命中关键字的日志总条数
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
                     * 获取周期内统计结果详情
                     * @return HistogramInfos 周期内统计结果详情
                     * 
                     */
                    std::vector<HistogramInfo> GetHistogramInfos() const;

                    /**
                     * 判断参数 HistogramInfos 是否已赋值
                     * @return HistogramInfos 是否已赋值
                     * 
                     */
                    bool HistogramInfosHasBeenSet() const;

                private:

                    /**
                     * 统计周期： 单位ms
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 命中关键字的日志总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 周期内统计结果详情
                     */
                    std::vector<HistogramInfo> m_histogramInfos;
                    bool m_histogramInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGHISTOGRAMRESPONSE_H_
