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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPACTIVITIESRESPONSE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPACTIVITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/RsgAsGroupActivity.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeRsgAsGroupActivities返回参数结构体
                */
                class DescribeRsgAsGroupActivitiesResponse : public AbstractModel
                {
                public:
                    DescribeRsgAsGroupActivitiesResponse();
                    ~DescribeRsgAsGroupActivitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组活动数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RsgAsGroupActivitySet 伸缩组活动数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RsgAsGroupActivity> GetRsgAsGroupActivitySet() const;

                    /**
                     * 判断参数 RsgAsGroupActivitySet 是否已赋值
                     * @return RsgAsGroupActivitySet 是否已赋值
                     * 
                     */
                    bool RsgAsGroupActivitySetHasBeenSet() const;

                    /**
                     * 获取所查询的伸缩组活动总数目
                     * @return TotalCount 所查询的伸缩组活动总数目
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 伸缩组活动数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RsgAsGroupActivity> m_rsgAsGroupActivitySet;
                    bool m_rsgAsGroupActivitySetHasBeenSet;

                    /**
                     * 所查询的伸缩组活动总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPACTIVITIESRESPONSE_H_
