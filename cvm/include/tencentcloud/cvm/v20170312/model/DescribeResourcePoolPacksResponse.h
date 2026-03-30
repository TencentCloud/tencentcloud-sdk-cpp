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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ResourcePoolPack.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeResourcePoolPacks返回参数结构体
                */
                class DescribeResourcePoolPacksResponse : public AbstractModel
                {
                public:
                    DescribeResourcePoolPacksResponse();
                    ~DescribeResourcePoolPacksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例资源池列表。
                     * @return DedicatedResourcePackSet 符合条件的实例资源池列表。
                     * 
                     */
                    std::vector<ResourcePoolPack> GetDedicatedResourcePackSet() const;

                    /**
                     * 判断参数 DedicatedResourcePackSet 是否已赋值
                     * @return DedicatedResourcePackSet 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackSetHasBeenSet() const;

                    /**
                     * 获取下一页数据的标记，用于分页查询。值为空时表示已到最后一页。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextToken 下一页数据的标记，用于分页查询。值为空时表示已到最后一页。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例资源池列表。
                     */
                    std::vector<ResourcePoolPack> m_dedicatedResourcePackSet;
                    bool m_dedicatedResourcePackSetHasBeenSet;

                    /**
                     * 下一页数据的标记，用于分页查询。值为空时表示已到最后一页。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKSRESPONSE_H_
