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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBANDLOCKINTEGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBANDLOCKINTEGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RobLockState.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RobAndLockIntegrationTask返回参数结构体
                */
                class RobAndLockIntegrationTaskResponse : public AbstractModel
                {
                public:
                    RobAndLockIntegrationTaskResponse();
                    ~RobAndLockIntegrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取抢锁状态
                     * @return RobLockState 抢锁状态
                     * 
                     */
                    RobLockState GetRobLockState() const;

                    /**
                     * 判断参数 RobLockState 是否已赋值
                     * @return RobLockState 是否已赋值
                     * 
                     */
                    bool RobLockStateHasBeenSet() const;

                private:

                    /**
                     * 抢锁状态
                     */
                    RobLockState m_robLockState;
                    bool m_robLockStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBANDLOCKINTEGRATIONTASKRESPONSE_H_
