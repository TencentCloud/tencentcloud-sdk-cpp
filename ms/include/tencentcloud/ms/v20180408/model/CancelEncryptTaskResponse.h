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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CANCELENCRYPTTASKRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CANCELENCRYPTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CancelEncryptTask返回参数结构体
                */
                class CancelEncryptTaskResponse : public AbstractModel
                {
                public:
                    CancelEncryptTaskResponse();
                    ~CancelEncryptTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1: 取消任务成功 ； -1 ：取消任务失败，原因为任务进程已结束，不能取消。
                     * @return State 1: 取消任务成功 ； -1 ：取消任务失败，原因为任务进程已结束，不能取消。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 1: 取消任务成功 ； -1 ：取消任务失败，原因为任务进程已结束，不能取消。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CANCELENCRYPTTASKRESPONSE_H_
