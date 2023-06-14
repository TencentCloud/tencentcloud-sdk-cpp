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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LOCKMETADATARESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LOCKMETADATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * LockMetaData返回参数结构体
                */
                class LockMetaDataResponse : public AbstractModel
                {
                public:
                    LockMetaDataResponse();
                    ~LockMetaDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取锁id
                     * @return LockId 锁id
                     * 
                     */
                    int64_t GetLockId() const;

                    /**
                     * 判断参数 LockId 是否已赋值
                     * @return LockId 是否已赋值
                     * 
                     */
                    bool LockIdHasBeenSet() const;

                    /**
                     * 获取锁状态：ACQUIRED、WAITING、ABORT、NOT_ACQUIRED
                     * @return LockState 锁状态：ACQUIRED、WAITING、ABORT、NOT_ACQUIRED
                     * 
                     */
                    std::string GetLockState() const;

                    /**
                     * 判断参数 LockState 是否已赋值
                     * @return LockState 是否已赋值
                     * 
                     */
                    bool LockStateHasBeenSet() const;

                private:

                    /**
                     * 锁id
                     */
                    int64_t m_lockId;
                    bool m_lockIdHasBeenSet;

                    /**
                     * 锁状态：ACQUIRED、WAITING、ABORT、NOT_ACQUIRED
                     */
                    std::string m_lockState;
                    bool m_lockStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LOCKMETADATARESPONSE_H_
