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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CHECKTCBSERVICERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CHECKTCBSERVICERESPONSE_H_

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
                * CheckTcbService返回参数结构体
                */
                class CheckTcbServiceResponse : public AbstractModel
                {
                public:
                    CheckTcbServiceResponse();
                    ~CheckTcbServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true表示已开通
                     * @return Initialized true表示已开通
                     * 
                     */
                    bool GetInitialized() const;

                    /**
                     * 判断参数 Initialized 是否已赋值
                     * @return Initialized 是否已赋值
                     * 
                     */
                    bool InitializedHasBeenSet() const;

                private:

                    /**
                     * true表示已开通
                     */
                    bool m_initialized;
                    bool m_initializedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CHECKTCBSERVICERESPONSE_H_
