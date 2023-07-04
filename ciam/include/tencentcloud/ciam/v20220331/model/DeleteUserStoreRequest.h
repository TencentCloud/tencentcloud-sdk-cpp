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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_DELETEUSERSTOREREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_DELETEUSERSTOREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * DeleteUserStore请求参数结构体
                */
                class DeleteUserStoreRequest : public AbstractModel
                {
                public:
                    DeleteUserStoreRequest();
                    ~DeleteUserStoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户池ID
                     * @return UserPoolId 用户池ID
                     * 
                     */
                    std::string GetUserPoolId() const;

                    /**
                     * 设置用户池ID
                     * @param _userPoolId 用户池ID
                     * 
                     */
                    void SetUserPoolId(const std::string& _userPoolId);

                    /**
                     * 判断参数 UserPoolId 是否已赋值
                     * @return UserPoolId 是否已赋值
                     * 
                     */
                    bool UserPoolIdHasBeenSet() const;

                private:

                    /**
                     * 用户池ID
                     */
                    std::string m_userPoolId;
                    bool m_userPoolIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_DELETEUSERSTOREREQUEST_H_
