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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTRESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/UpgradeItem.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeUpgradeList返回参数结构体
                */
                class DescribeUpgradeListResponse : public AbstractModel
                {
                public:
                    DescribeUpgradeListResponse();
                    ~DescribeUpgradeListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取升级记录具体数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeItems 升级记录具体数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UpgradeItem> GetUpgradeItems() const;

                    /**
                     * 判断参数 UpgradeItems 是否已赋值
                     * @return UpgradeItems 是否已赋值
                     * 
                     */
                    bool UpgradeItemsHasBeenSet() const;

                    /**
                     * 获取升级记录总数
                     * @return TotalCount 升级记录总数
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 升级记录具体数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UpgradeItem> m_upgradeItems;
                    bool m_upgradeItemsHasBeenSet;

                    /**
                     * 升级记录总数
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTRESPONSE_H_
