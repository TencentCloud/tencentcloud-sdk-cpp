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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWSYNCSTATUSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWSYNCSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeFwSyncStatus返回参数结构体
                */
                class DescribeFwSyncStatusResponse : public AbstractModel
                {
                public:
                    DescribeFwSyncStatusResponse();
                    ~DescribeFwSyncStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取同步状态：1，同步中；0，同步完成
                     * @return SyncStatus 同步状态：1，同步中；0，同步完成
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                private:

                    /**
                     * 同步状态：1，同步中；0，同步完成
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWSYNCSTATUSRESPONSE_H_
