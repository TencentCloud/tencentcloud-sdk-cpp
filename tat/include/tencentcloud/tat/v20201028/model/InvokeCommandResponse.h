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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * InvokeCommand返回参数结构体
                */
                class InvokeCommandResponse : public AbstractModel
                {
                public:
                    InvokeCommandResponse();
                    ~InvokeCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取执行活动ID。
                     * @return InvocationId 执行活动ID。
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                private:

                    /**
                     * 执行活动ID。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDRESPONSE_H_
