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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETAGRULEASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETAGRULEASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTagPreviewAssetItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTagRuleAssets返回参数结构体
                */
                class DescribeTagRuleAssetsResponse : public AbstractModel
                {
                public:
                    DescribeTagRuleAssetsResponse();
                    ~DescribeTagRuleAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产数量
                     * @return TotalCount 资产数量
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
                     * 获取资产集合
                     * @return Assets 资产集合
                     * 
                     */
                    std::vector<AssetTagPreviewAssetItem> GetAssets() const;

                    /**
                     * 判断参数 Assets 是否已赋值
                     * @return Assets 是否已赋值
                     * 
                     */
                    bool AssetsHasBeenSet() const;

                    /**
                     * 获取资产类型集合
                     * @return AssetTypeList 资产类型集合
                     * 
                     */
                    std::vector<AttributeOptionSet> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                private:

                    /**
                     * 资产数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资产集合
                     */
                    std::vector<AssetTagPreviewAssetItem> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * 资产类型集合
                     */
                    std::vector<AttributeOptionSet> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETAGRULEASSETSRESPONSE_H_
