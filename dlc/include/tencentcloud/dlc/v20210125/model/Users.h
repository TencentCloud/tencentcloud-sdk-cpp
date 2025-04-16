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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserMessage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 用户信息集合
                */
                class Users : public AbstractModel
                {
                public:
                    Users();
                    ~Users() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSet 用户信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserMessage> GetUserSet() const;

                    /**
                     * 设置用户信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userSet 用户信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserSet(const std::vector<UserMessage>& _userSet);

                    /**
                     * 判断参数 UserSet 是否已赋值
                     * @return UserSet 是否已赋值
                     * 
                     */
                    bool UserSetHasBeenSet() const;

                    /**
                     * 获取用户总数
                     * @return TotalCount 用户总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置用户总数
                     * @param _totalCount 用户总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 用户信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserMessage> m_userSet;
                    bool m_userSetHasBeenSet;

                    /**
                     * 用户总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERS_H_
