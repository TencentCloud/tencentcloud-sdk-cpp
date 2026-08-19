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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTagItem.h>
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
                * DescribeAssetTags返回参数结构体
                */
                class DescribeAssetTagsResponse : public AbstractModel
                {
                public:
                    DescribeAssetTagsResponse();
                    ~DescribeAssetTagsResponse() = default;
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
                     * @return AssetTags 资产集合
                     * 
                     */
                    std::vector<AssetTagItem> GetAssetTags() const;

                    /**
                     * 判断参数 AssetTags 是否已赋值
                     * @return AssetTags 是否已赋值
                     * 
                     */
                    bool AssetTagsHasBeenSet() const;

                    /**
                     * 获取自动打标策略是否开启集合
                     * @return AutoTaggingEnabledList 自动打标策略是否开启集合
                     * 
                     */
                    std::vector<AttributeOptionSet> GetAutoTaggingEnabledList() const;

                    /**
                     * 判断参数 AutoTaggingEnabledList 是否已赋值
                     * @return AutoTaggingEnabledList 是否已赋值
                     * 
                     */
                    bool AutoTaggingEnabledListHasBeenSet() const;

                private:

                    /**
                     * 资产数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资产集合
                     */
                    std::vector<AssetTagItem> m_assetTags;
                    bool m_assetTagsHasBeenSet;

                    /**
                     * 自动打标策略是否开启集合
                     */
                    std::vector<AttributeOptionSet> m_autoTaggingEnabledList;
                    bool m_autoTaggingEnabledListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGSRESPONSE_H_
