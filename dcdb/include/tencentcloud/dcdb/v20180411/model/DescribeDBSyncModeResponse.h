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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSYNCMODERESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSYNCMODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDBSyncMode返回参数结构体
                */
                class DescribeDBSyncModeResponse : public AbstractModel
                {
                public:
                    DescribeDBSyncModeResponse();
                    ~DescribeDBSyncModeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取同步模式：0 异步，1 强同步， 2 强同步可退化
                     * @return SyncMode 同步模式：0 异步，1 强同步， 2 强同步可退化
                     * 
                     */
                    int64_t GetSyncMode() const;

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取是否有修改流程在执行中：1 是， 0 否。
                     * @return IsModifying 是否有修改流程在执行中：1 是， 0 否。
                     * 
                     */
                    int64_t GetIsModifying() const;

                    /**
                     * 判断参数 IsModifying 是否已赋值
                     * @return IsModifying 是否已赋值
                     * 
                     */
                    bool IsModifyingHasBeenSet() const;

                    /**
                     * 获取当前复制方式，0 异步，1 同步
                     * @return CurrentSyncMode 当前复制方式，0 异步，1 同步
                     * 
                     */
                    int64_t GetCurrentSyncMode() const;

                    /**
                     * 判断参数 CurrentSyncMode 是否已赋值
                     * @return CurrentSyncMode 是否已赋值
                     * 
                     */
                    bool CurrentSyncModeHasBeenSet() const;

                private:

                    /**
                     * 同步模式：0 异步，1 强同步， 2 强同步可退化
                     */
                    int64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * 是否有修改流程在执行中：1 是， 0 否。
                     */
                    int64_t m_isModifying;
                    bool m_isModifyingHasBeenSet;

                    /**
                     * 当前复制方式，0 异步，1 同步
                     */
                    int64_t m_currentSyncMode;
                    bool m_currentSyncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSYNCMODERESPONSE_H_
