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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_CREATEBOTRESPONSE_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_CREATEBOTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * CreateBot返回参数结构体
                */
                class CreateBotResponse : public AbstractModel
                {
                public:
                    CreateBotResponse();
                    ~CreateBotResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskRequestId 任务ID
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                    /**
                     * 获取任务信息
                     * @return Msg 任务信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                    /**
                     * 任务信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_CREATEBOTRESPONSE_H_
