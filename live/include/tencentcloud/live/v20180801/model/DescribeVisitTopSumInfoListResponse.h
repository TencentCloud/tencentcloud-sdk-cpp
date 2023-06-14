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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEVISITTOPSUMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEVISITTOPSUMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PlaySumStatInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeVisitTopSumInfoList返回参数结构体
                */
                class DescribeVisitTopSumInfoListResponse : public AbstractModel
                {
                public:
                    DescribeVisitTopSumInfoListResponse();
                    ~DescribeVisitTopSumInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取页号，
范围是[1,1000]，
默认值是1。
                     * @return PageNum 页号，
范围是[1,1000]，
默认值是1。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页个数，范围是[1,1000]，
默认值是20。
                     * @return PageSize 每页个数，范围是[1,1000]，
默认值是20。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取峰值指标，可选值包括”Domain”，”StreamId”。
                     * @return TopIndex 峰值指标，可选值包括”Domain”，”StreamId”。
                     * 
                     */
                    std::string GetTopIndex() const;

                    /**
                     * 判断参数 TopIndex 是否已赋值
                     * @return TopIndex 是否已赋值
                     * 
                     */
                    bool TopIndexHasBeenSet() const;

                    /**
                     * 获取排序指标，可选值包括” AvgFluxPerSecond”(按每秒平均流量排序)，”TotalRequest”（默认，按总请求数排序）,“TotalFlux”（按总流量排序）。
                     * @return OrderParam 排序指标，可选值包括” AvgFluxPerSecond”(按每秒平均流量排序)，”TotalRequest”（默认，按总请求数排序）,“TotalFlux”（按总流量排序）。
                     * 
                     */
                    std::string GetOrderParam() const;

                    /**
                     * 判断参数 OrderParam 是否已赋值
                     * @return OrderParam 是否已赋值
                     * 
                     */
                    bool OrderParamHasBeenSet() const;

                    /**
                     * 获取记录总数。
                     * @return TotalNum 记录总数。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取记录总页数。
                     * @return TotalPage 记录总页数。
                     * 
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取数据内容。
                     * @return DataInfoList 数据内容。
                     * 
                     */
                    std::vector<PlaySumStatInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * 页号，
范围是[1,1000]，
默认值是1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页个数，范围是[1,1000]，
默认值是20。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 峰值指标，可选值包括”Domain”，”StreamId”。
                     */
                    std::string m_topIndex;
                    bool m_topIndexHasBeenSet;

                    /**
                     * 排序指标，可选值包括” AvgFluxPerSecond”(按每秒平均流量排序)，”TotalRequest”（默认，按总请求数排序）,“TotalFlux”（按总流量排序）。
                     */
                    std::string m_orderParam;
                    bool m_orderParamHasBeenSet;

                    /**
                     * 记录总数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 记录总页数。
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 数据内容。
                     */
                    std::vector<PlaySumStatInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEVISITTOPSUMINFOLISTRESPONSE_H_
