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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_UNLOCKUSERREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_UNLOCKUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * UnlockUser请求参数结构体
                */
                class UnlockUserRequest : public AbstractModel
                {
                public:
                    UnlockUserRequest();
                    ~UnlockUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户id
                     * @return IdSet 用户id
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置用户id
                     * @param _idSet 用户id
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                private:

                    /**
                     * 用户id
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_UNLOCKUSERREQUEST_H_
