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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICACONFIG_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * dcn 配置情况
                */
                class DCNReplicaConfig : public AbstractModel
                {
                public:
                    DCNReplicaConfig();
                    ~DCNReplicaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DCN 运行状态，START为正常运行，STOP为暂停
                     * @return RoReplicationMode DCN 运行状态，START为正常运行，STOP为暂停
                     * 
                     */
                    std::string GetRoReplicationMode() const;

                    /**
                     * 设置DCN 运行状态，START为正常运行，STOP为暂停
                     * @param _roReplicationMode DCN 运行状态，START为正常运行，STOP为暂停
                     * 
                     */
                    void SetRoReplicationMode(const std::string& _roReplicationMode);

                    /**
                     * 判断参数 RoReplicationMode 是否已赋值
                     * @return RoReplicationMode 是否已赋值
                     * 
                     */
                    bool RoReplicationModeHasBeenSet() const;

                    /**
                     * 获取延迟复制的类型，DEFAULT为正常，DUE_TIME为指定时间
                     * @return DelayReplicationType 延迟复制的类型，DEFAULT为正常，DUE_TIME为指定时间
                     * 
                     */
                    std::string GetDelayReplicationType() const;

                    /**
                     * 设置延迟复制的类型，DEFAULT为正常，DUE_TIME为指定时间
                     * @param _delayReplicationType 延迟复制的类型，DEFAULT为正常，DUE_TIME为指定时间
                     * 
                     */
                    void SetDelayReplicationType(const std::string& _delayReplicationType);

                    /**
                     * 判断参数 DelayReplicationType 是否已赋值
                     * @return DelayReplicationType 是否已赋值
                     * 
                     */
                    bool DelayReplicationTypeHasBeenSet() const;

                    /**
                     * 获取延迟复制的指定时间
                     * @return DueTime 延迟复制的指定时间
                     * 
                     */
                    std::string GetDueTime() const;

                    /**
                     * 设置延迟复制的指定时间
                     * @param _dueTime 延迟复制的指定时间
                     * 
                     */
                    void SetDueTime(const std::string& _dueTime);

                    /**
                     * 判断参数 DueTime 是否已赋值
                     * @return DueTime 是否已赋值
                     * 
                     */
                    bool DueTimeHasBeenSet() const;

                    /**
                     * 获取延迟复制时的延迟秒数
                     * @return ReplicationDelay 延迟复制时的延迟秒数
                     * 
                     */
                    int64_t GetReplicationDelay() const;

                    /**
                     * 设置延迟复制时的延迟秒数
                     * @param _replicationDelay 延迟复制时的延迟秒数
                     * 
                     */
                    void SetReplicationDelay(const int64_t& _replicationDelay);

                    /**
                     * 判断参数 ReplicationDelay 是否已赋值
                     * @return ReplicationDelay 是否已赋值
                     * 
                     */
                    bool ReplicationDelayHasBeenSet() const;

                private:

                    /**
                     * DCN 运行状态，START为正常运行，STOP为暂停
                     */
                    std::string m_roReplicationMode;
                    bool m_roReplicationModeHasBeenSet;

                    /**
                     * 延迟复制的类型，DEFAULT为正常，DUE_TIME为指定时间
                     */
                    std::string m_delayReplicationType;
                    bool m_delayReplicationTypeHasBeenSet;

                    /**
                     * 延迟复制的指定时间
                     */
                    std::string m_dueTime;
                    bool m_dueTimeHasBeenSet;

                    /**
                     * 延迟复制时的延迟秒数
                     */
                    int64_t m_replicationDelay;
                    bool m_replicationDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICACONFIG_H_
