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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROISPPLAYSUMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROISPPLAYSUMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ProIspPlaySumInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeProIspPlaySumInfoList返回参数结构体
                */
                class DescribeProIspPlaySumInfoListResponse : public AbstractModel
                {
                public:
                    DescribeProIspPlaySumInfoListResponse();
                    ~DescribeProIspPlaySumInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总流量。
                     * @return TotalFlux 总流量。
                     * 
                     */
                    double GetTotalFlux() const;

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     * 
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取总请求数。
                     * @return TotalRequest 总请求数。
                     * 
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     * 
                     */
                    bool TotalRequestHasBeenSet() const;

                    /**
                     * 获取统计的类型。
                     * @return StatType 统计的类型。
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取每页的记录数。
                     * @return PageSize 每页的记录数。
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
                     * 获取页号。
                     * @return PageNum 页号。
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
                     * 获取总记录数。
                     * @return TotalNum 总记录数。
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
                     * 获取总页数。
                     * @return TotalPage 总页数。
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
                     * 获取省份，运营商，国家或地区汇总数据列表。
                     * @return DataInfoList 省份，运营商，国家或地区汇总数据列表。
                     * 
                     */
                    std::vector<ProIspPlaySumInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                    /**
                     * 获取下载速度，单位：MB/s，计算方式：总流量/总时长。
                     * @return AvgFluxPerSecond 下载速度，单位：MB/s，计算方式：总流量/总时长。
                     * 
                     */
                    double GetAvgFluxPerSecond() const;

                    /**
                     * 判断参数 AvgFluxPerSecond 是否已赋值
                     * @return AvgFluxPerSecond 是否已赋值
                     * 
                     */
                    bool AvgFluxPerSecondHasBeenSet() const;

                private:

                    /**
                     * 总流量。
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * 总请求数。
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                    /**
                     * 统计的类型。
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * 每页的记录数。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页号。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 总记录数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 总页数。
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 省份，运营商，国家或地区汇总数据列表。
                     */
                    std::vector<ProIspPlaySumInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                    /**
                     * 下载速度，单位：MB/s，计算方式：总流量/总时长。
                     */
                    double m_avgFluxPerSecond;
                    bool m_avgFluxPerSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROISPPLAYSUMINFOLISTRESPONSE_H_
