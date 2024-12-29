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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LivePackageInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePackageInfo返回参数结构体
                */
                class DescribeLivePackageInfoResponse : public AbstractModel
                {
                public:
                    DescribeLivePackageInfoResponse();
                    ~DescribeLivePackageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐包信息。
                     * @return LivePackageInfoList 套餐包信息。
                     * 
                     */
                    std::vector<LivePackageInfo> GetLivePackageInfoList() const;

                    /**
                     * 判断参数 LivePackageInfoList 是否已赋值
                     * @return LivePackageInfoList 是否已赋值
                     * 
                     */
                    bool LivePackageInfoListHasBeenSet() const;

                    /**
                     * 获取套餐包当前计费方式:
-1: 无计费方式或获取失败
0: 无计费方式
201: 月结带宽
202: 月结流量
203: 日结带宽
204: 日结流量
205: 日结时长
206: 月结时长
304: 日结流量。
                     * @return PackageBillMode 套餐包当前计费方式:
-1: 无计费方式或获取失败
0: 无计费方式
201: 月结带宽
202: 月结流量
203: 日结带宽
204: 日结流量
205: 日结时长
206: 月结时长
304: 日结流量。
                     * 
                     */
                    int64_t GetPackageBillMode() const;

                    /**
                     * 判断参数 PackageBillMode 是否已赋值
                     * @return PackageBillMode 是否已赋值
                     * 
                     */
                    bool PackageBillModeHasBeenSet() const;

                    /**
                     * 获取总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPage 总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNum 数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取当前页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNum 当前页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取当前每页数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 当前每页数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取当请求参数 PackageType = 0 时生效，逗号分隔，从第一个到最后一个分别表示：
标准直播，中国大陆（境内全地区）计费方式。
标准直播，国际/港澳台（境外多地区）计费方式。
快直播，中国大陆（境内全地区）计费方式。
快直播，国际/港澳台（境外多地区）计费方式。
                     * @return FluxPackageBillMode 当请求参数 PackageType = 0 时生效，逗号分隔，从第一个到最后一个分别表示：
标准直播，中国大陆（境内全地区）计费方式。
标准直播，国际/港澳台（境外多地区）计费方式。
快直播，中国大陆（境内全地区）计费方式。
快直播，国际/港澳台（境外多地区）计费方式。
                     * 
                     */
                    std::string GetFluxPackageBillMode() const;

                    /**
                     * 判断参数 FluxPackageBillMode 是否已赋值
                     * @return FluxPackageBillMode 是否已赋值
                     * 
                     */
                    bool FluxPackageBillModeHasBeenSet() const;

                private:

                    /**
                     * 套餐包信息。
                     */
                    std::vector<LivePackageInfo> m_livePackageInfoList;
                    bool m_livePackageInfoListHasBeenSet;

                    /**
                     * 套餐包当前计费方式:
-1: 无计费方式或获取失败
0: 无计费方式
201: 月结带宽
202: 月结流量
203: 日结带宽
204: 日结流量
205: 日结时长
206: 月结时长
304: 日结流量。
                     */
                    int64_t m_packageBillMode;
                    bool m_packageBillModeHasBeenSet;

                    /**
                     * 总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 当前页数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 当前每页数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当请求参数 PackageType = 0 时生效，逗号分隔，从第一个到最后一个分别表示：
标准直播，中国大陆（境内全地区）计费方式。
标准直播，国际/港澳台（境外多地区）计费方式。
快直播，中国大陆（境内全地区）计费方式。
快直播，国际/港澳台（境外多地区）计费方式。
                     */
                    std::string m_fluxPackageBillMode;
                    bool m_fluxPackageBillModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFORESPONSE_H_
