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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEACCOUNTGROUPRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEACCOUNTGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AccountGroupInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeAccountGroup返回参数结构体
                */
                class DescribeAccountGroupResponse : public AbstractModel
                {
                public:
                    DescribeAccountGroupResponse();
                    ~DescribeAccountGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回查询的总记录数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 返回查询的总记录数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取返回符合条件的数据列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupList 返回符合条件的数据列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccountGroupInfo> GetAccountGroupList() const;

                    /**
                     * 判断参数 AccountGroupList 是否已赋值
                     * @return AccountGroupList 是否已赋值
                     * 
                     */
                    bool AccountGroupListHasBeenSet() const;

                private:

                    /**
                     * 返回查询的总记录数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 应用ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 返回符合条件的数据列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccountGroupInfo> m_accountGroupList;
                    bool m_accountGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEACCOUNTGROUPRESPONSE_H_
