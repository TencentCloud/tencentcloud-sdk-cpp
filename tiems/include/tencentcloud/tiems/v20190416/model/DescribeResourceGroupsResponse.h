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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERESOURCEGROUPSRESPONSE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERESOURCEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/ResourceGroup.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeResourceGroups返回参数结构体
                */
                class DescribeResourceGroupsResponse : public AbstractModel
                {
                public:
                    DescribeResourceGroupsResponse();
                    ~DescribeResourceGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组总数
                     * @return TotalCount 资源组总数
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
                     * 获取资源组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroups 资源组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceGroup> GetResourceGroups() const;

                    /**
                     * 判断参数 ResourceGroups 是否已赋值
                     * @return ResourceGroups 是否已赋值
                     * 
                     */
                    bool ResourceGroupsHasBeenSet() const;

                private:

                    /**
                     * 资源组总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资源组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceGroup> m_resourceGroups;
                    bool m_resourceGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERESOURCEGROUPSRESPONSE_H_
