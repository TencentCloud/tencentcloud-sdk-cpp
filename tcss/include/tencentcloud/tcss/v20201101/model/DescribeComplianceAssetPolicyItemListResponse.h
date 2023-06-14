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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceAssetPolicyItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceAssetPolicyItemList返回参数结构体
                */
                class DescribeComplianceAssetPolicyItemListResponse : public AbstractModel
                {
                public:
                    DescribeComplianceAssetPolicyItemListResponse();
                    ~DescribeComplianceAssetPolicyItemListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回检测项的总数。如果用户未启用基线检查，此处返回0。
                     * @return TotalCount 返回检测项的总数。如果用户未启用基线检查，此处返回0。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回某个资产下的检测项的列表。
                     * @return AssetPolicyItemList 返回某个资产下的检测项的列表。
                     * 
                     */
                    std::vector<ComplianceAssetPolicyItem> GetAssetPolicyItemList() const;

                    /**
                     * 判断参数 AssetPolicyItemList 是否已赋值
                     * @return AssetPolicyItemList 是否已赋值
                     * 
                     */
                    bool AssetPolicyItemListHasBeenSet() const;

                private:

                    /**
                     * 返回检测项的总数。如果用户未启用基线检查，此处返回0。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回某个资产下的检测项的列表。
                     */
                    std::vector<ComplianceAssetPolicyItem> m_assetPolicyItemList;
                    bool m_assetPolicyItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTRESPONSE_H_
