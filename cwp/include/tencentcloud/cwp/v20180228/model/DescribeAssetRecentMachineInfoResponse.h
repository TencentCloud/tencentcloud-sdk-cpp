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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetKeyVal.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetRecentMachineInfo返回参数结构体
                */
                class DescribeAssetRecentMachineInfoResponse : public AbstractModel
                {
                public:
                    DescribeAssetRecentMachineInfoResponse();
                    ~DescribeAssetRecentMachineInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量列表
                     * @return TotalList 总数量列表
                     * 
                     */
                    std::vector<AssetKeyVal> GetTotalList() const;

                    /**
                     * 判断参数 TotalList 是否已赋值
                     * @return TotalList 是否已赋值
                     * 
                     */
                    bool TotalListHasBeenSet() const;

                    /**
                     * 获取在线数量列表
                     * @return LiveList 在线数量列表
                     * 
                     */
                    std::vector<AssetKeyVal> GetLiveList() const;

                    /**
                     * 判断参数 LiveList 是否已赋值
                     * @return LiveList 是否已赋值
                     * 
                     */
                    bool LiveListHasBeenSet() const;

                    /**
                     * 获取离线数量列表
                     * @return OfflineList 离线数量列表
                     * 
                     */
                    std::vector<AssetKeyVal> GetOfflineList() const;

                    /**
                     * 判断参数 OfflineList 是否已赋值
                     * @return OfflineList 是否已赋值
                     * 
                     */
                    bool OfflineListHasBeenSet() const;

                    /**
                     * 获取风险数量列表
                     * @return RiskList 风险数量列表
                     * 
                     */
                    std::vector<AssetKeyVal> GetRiskList() const;

                    /**
                     * 判断参数 RiskList 是否已赋值
                     * @return RiskList 是否已赋值
                     * 
                     */
                    bool RiskListHasBeenSet() const;

                private:

                    /**
                     * 总数量列表
                     */
                    std::vector<AssetKeyVal> m_totalList;
                    bool m_totalListHasBeenSet;

                    /**
                     * 在线数量列表
                     */
                    std::vector<AssetKeyVal> m_liveList;
                    bool m_liveListHasBeenSet;

                    /**
                     * 离线数量列表
                     */
                    std::vector<AssetKeyVal> m_offlineList;
                    bool m_offlineListHasBeenSet;

                    /**
                     * 风险数量列表
                     */
                    std::vector<AssetKeyVal> m_riskList;
                    bool m_riskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFORESPONSE_H_
