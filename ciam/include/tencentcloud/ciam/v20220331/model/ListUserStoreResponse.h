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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERSTORERESPONSE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERSTORERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/UserStore.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUserStore返回参数结构体
                */
                class ListUserStoreResponse : public AbstractModel
                {
                public:
                    ListUserStoreResponse();
                    ~ListUserStoreResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserStoreSet 用户目录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserStore> GetUserStoreSet() const;

                    /**
                     * 判断参数 UserStoreSet 是否已赋值
                     * @return UserStoreSet 是否已赋值
                     * 
                     */
                    bool UserStoreSetHasBeenSet() const;

                private:

                    /**
                     * 用户目录列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserStore> m_userStoreSet;
                    bool m_userStoreSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERSTORERESPONSE_H_
