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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETRISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETRISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetRiskItem.h>
#include <tencentcloud/csip/v20221121/model/StandardItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetRiskList返回参数结构体
                */
                class DescribeAssetRiskListResponse : public AbstractModel
                {
                public:
                    DescribeAssetRiskListResponse();
                    ~DescribeAssetRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产视角下风险数量
                     * @return TotalCount 资产视角下风险数量
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
                     * 获取资产视角下风险列表
                     * @return AssetRiskList 资产视角下风险列表
                     * 
                     */
                    std::vector<AssetRiskItem> GetAssetRiskList() const;

                    /**
                     * 判断参数 AssetRiskList 是否已赋值
                     * @return AssetRiskList 是否已赋值
                     * 
                     */
                    bool AssetRiskListHasBeenSet() const;

                    /**
                     * 获取等保规范名称集合
                     * @return StandardNameList 等保规范名称集合
                     * 
                     */
                    std::vector<StandardItem> GetStandardNameList() const;

                    /**
                     * 判断参数 StandardNameList 是否已赋值
                     * @return StandardNameList 是否已赋值
                     * 
                     */
                    bool StandardNameListHasBeenSet() const;

                private:

                    /**
                     * 资产视角下风险数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资产视角下风险列表
                     */
                    std::vector<AssetRiskItem> m_assetRiskList;
                    bool m_assetRiskListHasBeenSet;

                    /**
                     * 等保规范名称集合
                     */
                    std::vector<StandardItem> m_standardNameList;
                    bool m_standardNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETRISKLISTRESPONSE_H_
