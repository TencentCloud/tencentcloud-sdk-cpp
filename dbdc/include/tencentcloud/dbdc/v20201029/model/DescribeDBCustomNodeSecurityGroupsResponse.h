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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODESECURITYGROUPSRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODESECURITYGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/SecurityGroup.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomNodeSecurityGroups返回参数结构体
                */
                class DescribeDBCustomNodeSecurityGroupsResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomNodeSecurityGroupsResponse();
                    ~DescribeDBCustomNodeSecurityGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>与节点绑定的安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups <p>与节点绑定的安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecurityGroup> GetGroups() const;

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * <p>与节点绑定的安全组id，数组格式，根据内部安全组ID的顺序来确认优先级。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityGroup> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODESECURITYGROUPSRESPONSE_H_
