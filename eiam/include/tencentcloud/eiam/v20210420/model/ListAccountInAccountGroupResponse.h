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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTACCOUNTINACCOUNTGROUPRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTACCOUNTINACCOUNTGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AppAccountInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListAccountInAccountGroup返回参数结构体
                */
                class ListAccountInAccountGroupResponse : public AbstractModel
                {
                public:
                    ListAccountInAccountGroupResponse();
                    ~ListAccountInAccountGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询返回的相关账号列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountList 查询返回的相关账号列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AppAccountInfo> GetAccountList() const;

                    /**
                     * 判断参数 AccountList 是否已赋值
                     * @return AccountList 是否已赋值
                     * 
                     */
                    bool AccountListHasBeenSet() const;

                    /**
                     * 获取返回查询账号的总数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 返回查询账号的总数量。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取账号组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId 账号组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                private:

                    /**
                     * 查询返回的相关账号列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AppAccountInfo> m_accountList;
                    bool m_accountListHasBeenSet;

                    /**
                     * 返回查询账号的总数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 账号组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTACCOUNTINACCOUNTGROUPRESPONSE_H_
