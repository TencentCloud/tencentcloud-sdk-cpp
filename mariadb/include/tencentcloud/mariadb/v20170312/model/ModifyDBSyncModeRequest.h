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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBSYNCMODEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBSYNCMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBSyncMode请求参数结构体
                */
                class ModifyDBSyncModeRequest : public AbstractModel
                {
                public:
                    ModifyDBSyncModeRequest();
                    ~ModifyDBSyncModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改同步模式的实例ID。形如：tdsql-ow728lmc。
                     * @return InstanceId 待修改同步模式的实例ID。形如：tdsql-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待修改同步模式的实例ID。形如：tdsql-ow728lmc。
                     * @param _instanceId 待修改同步模式的实例ID。形如：tdsql-ow728lmc。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取同步模式：0 异步，1 强同步， 2 强同步可退化
                     * @return SyncMode 同步模式：0 异步，1 强同步， 2 强同步可退化
                     * 
                     */
                    int64_t GetSyncMode() const;

                    /**
                     * 设置同步模式：0 异步，1 强同步， 2 强同步可退化
                     * @param _syncMode 同步模式：0 异步，1 强同步， 2 强同步可退化
                     * 
                     */
                    void SetSyncMode(const int64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * 待修改同步模式的实例ID。形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 同步模式：0 异步，1 强同步， 2 强同步可退化
                     */
                    int64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBSYNCMODEREQUEST_H_
