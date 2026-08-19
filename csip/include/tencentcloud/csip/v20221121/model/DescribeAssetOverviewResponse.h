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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetStatisticsInfo.h>
#include <tencentcloud/csip/v20221121/model/AssetProviderDistributeInfo.h>
#include <tencentcloud/csip/v20221121/model/AssetTypeStatisticsInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetOverview返回参数结构体
                */
                class DescribeAssetOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAssetOverviewResponse();
                    ~DescribeAssetOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产概览统计
                     * @return AssetOverview 资产概览统计
                     * 
                     */
                    AssetStatisticsInfo GetAssetOverview() const;

                    /**
                     * 判断参数 AssetOverview 是否已赋值
                     * @return AssetOverview 是否已赋值
                     * 
                     */
                    bool AssetOverviewHasBeenSet() const;

                    /**
                     * 获取云厂商资产数量
                     * @return AssetProviderDistribute 云厂商资产数量
                     * 
                     */
                    AssetProviderDistributeInfo GetAssetProviderDistribute() const;

                    /**
                     * 判断参数 AssetProviderDistribute 是否已赋值
                     * @return AssetProviderDistribute 是否已赋值
                     * 
                     */
                    bool AssetProviderDistributeHasBeenSet() const;

                    /**
                     * 获取资产类型以及存在风险的资产类型数量
                     * @return AssetTypeOverview 资产类型以及存在风险的资产类型数量
                     * 
                     */
                    AssetTypeStatisticsInfo GetAssetTypeOverview() const;

                    /**
                     * 判断参数 AssetTypeOverview 是否已赋值
                     * @return AssetTypeOverview 是否已赋值
                     * 
                     */
                    bool AssetTypeOverviewHasBeenSet() const;

                private:

                    /**
                     * 资产概览统计
                     */
                    AssetStatisticsInfo m_assetOverview;
                    bool m_assetOverviewHasBeenSet;

                    /**
                     * 云厂商资产数量
                     */
                    AssetProviderDistributeInfo m_assetProviderDistribute;
                    bool m_assetProviderDistributeHasBeenSet;

                    /**
                     * 资产类型以及存在风险的资产类型数量
                     */
                    AssetTypeStatisticsInfo m_assetTypeOverview;
                    bool m_assetTypeOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_
