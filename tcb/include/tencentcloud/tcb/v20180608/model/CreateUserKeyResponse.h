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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEUSERKEYRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEUSERKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateUserKey返回参数结构体
                */
                class CreateUserKeyResponse : public AbstractModel
                {
                public:
                    CreateUserKeyResponse();
                    ~CreateUserKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>创建成功记录条数</p>
                     * @return CreateResult <p>创建成功记录条数</p>
                     * 
                     */
                    uint64_t GetCreateResult() const;

                    /**
                     * 判断参数 CreateResult 是否已赋值
                     * @return CreateResult 是否已赋值
                     * 
                     */
                    bool CreateResultHasBeenSet() const;

                private:

                    /**
                     * <p>创建成功记录条数</p>
                     */
                    uint64_t m_createResult;
                    bool m_createResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEUSERKEYRESPONSE_H_
