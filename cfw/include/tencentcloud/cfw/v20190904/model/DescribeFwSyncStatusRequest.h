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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWSYNCSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWSYNCSTATUSREQUEST_H_

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
                * DescribeFwSyncStatus请求参数结构体
                */
                class DescribeFwSyncStatusRequest : public AbstractModel
                {
                public:
                    DescribeFwSyncStatusRequest();
                    ~DescribeFwSyncStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的同步状态类型：Route,同步路由状态
                     * @return SyncType 查询的同步状态类型：Route,同步路由状态
                     * 
                     */
                    std::string GetSyncType() const;

                    /**
                     * 设置查询的同步状态类型：Route,同步路由状态
                     * @param _syncType 查询的同步状态类型：Route,同步路由状态
                     * 
                     */
                    void SetSyncType(const std::string& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                private:

                    /**
                     * 查询的同步状态类型：Route,同步路由状态
                     */
                    std::string m_syncType;
                    bool m_syncTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWSYNCSTATUSREQUEST_H_
