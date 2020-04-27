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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ENTERQUEUERESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ENTERQUEUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * EnterQueue返回参数结构体
                */
                class EnterQueueResponse : public AbstractModel
                {
                public:
                    EnterQueueResponse();
                    ~EnterQueueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取排名
                     * @return Rank 排名
                     */
                    uint64_t GetRank() const;

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取机器锁定成功
                     * @return LockSuccess 机器锁定成功
                     */
                    bool GetLockSuccess() const;

                    /**
                     * 判断参数 LockSuccess 是否已赋值
                     * @return LockSuccess 是否已赋值
                     */
                    bool LockSuccessHasBeenSet() const;

                private:

                    /**
                     * 排名
                     */
                    uint64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * 机器锁定成功
                     */
                    bool m_lockSuccess;
                    bool m_lockSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ENTERQUEUERESPONSE_H_
