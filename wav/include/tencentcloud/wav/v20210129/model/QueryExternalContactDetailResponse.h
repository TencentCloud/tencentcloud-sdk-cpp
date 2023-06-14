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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALCONTACTDETAILRESPONSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALCONTACTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/ExternalContact.h>
#include <tencentcloud/wav/v20210129/model/FollowUser.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryExternalContactDetail返回参数结构体
                */
                class QueryExternalContactDetailResponse : public AbstractModel
                {
                public:
                    QueryExternalContactDetailResponse();
                    ~QueryExternalContactDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页游标，再下次请求时填写以获取之后分页的记录，如果已经没有更多的数据则返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextCursor 分页游标，再下次请求时填写以获取之后分页的记录，如果已经没有更多的数据则返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Customer 客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExternalContact GetCustomer() const;

                    /**
                     * 判断参数 Customer 是否已赋值
                     * @return Customer 是否已赋值
                     * 
                     */
                    bool CustomerHasBeenSet() const;

                    /**
                     * 获取添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowUser 添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FollowUser> GetFollowUser() const;

                    /**
                     * 判断参数 FollowUser 是否已赋值
                     * @return FollowUser 是否已赋值
                     * 
                     */
                    bool FollowUserHasBeenSet() const;

                private:

                    /**
                     * 分页游标，再下次请求时填写以获取之后分页的记录，如果已经没有更多的数据则返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * 客户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExternalContact m_customer;
                    bool m_customerHasBeenSet;

                    /**
                     * 添加了此外部联系人的企业成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FollowUser> m_followUser;
                    bool m_followUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALCONTACTDETAILRESPONSE_H_
