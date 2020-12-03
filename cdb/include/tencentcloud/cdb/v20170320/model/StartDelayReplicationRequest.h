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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_STARTDELAYREPLICATIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_STARTDELAYREPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * StartDelayReplication请求参数结构体
                */
                class StartDelayReplicationRequest : public AbstractModel
                {
                public:
                    StartDelayReplicationRequest();
                    ~StartDelayReplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param InstanceId 实例 ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取延迟复制类型。可选值 DEFAULT（按照延迟复制时间进行复制）、GTID（回放到指定GTID）、DUE_TIME（回放到指定时间点）。
                     * @return DelayReplicationType 延迟复制类型。可选值 DEFAULT（按照延迟复制时间进行复制）、GTID（回放到指定GTID）、DUE_TIME（回放到指定时间点）。
                     */
                    std::string GetDelayReplicationType() const;

                    /**
                     * 设置延迟复制类型。可选值 DEFAULT（按照延迟复制时间进行复制）、GTID（回放到指定GTID）、DUE_TIME（回放到指定时间点）。
                     * @param DelayReplicationType 延迟复制类型。可选值 DEFAULT（按照延迟复制时间进行复制）、GTID（回放到指定GTID）、DUE_TIME（回放到指定时间点）。
                     */
                    void SetDelayReplicationType(const std::string& _delayReplicationType);

                    /**
                     * 判断参数 DelayReplicationType 是否已赋值
                     * @return DelayReplicationType 是否已赋值
                     */
                    bool DelayReplicationTypeHasBeenSet() const;

                    /**
                     * 获取指定时间点，默认为0，最大值不能超过当前时间。
                     * @return DueTime 指定时间点，默认为0，最大值不能超过当前时间。
                     */
                    int64_t GetDueTime() const;

                    /**
                     * 设置指定时间点，默认为0，最大值不能超过当前时间。
                     * @param DueTime 指定时间点，默认为0，最大值不能超过当前时间。
                     */
                    void SetDueTime(const int64_t& _dueTime);

                    /**
                     * 判断参数 DueTime 是否已赋值
                     * @return DueTime 是否已赋值
                     */
                    bool DueTimeHasBeenSet() const;

                    /**
                     * 获取指定GITD。回放到指定GTID时必传。
                     * @return Gtid 指定GITD。回放到指定GTID时必传。
                     */
                    std::string GetGtid() const;

                    /**
                     * 设置指定GITD。回放到指定GTID时必传。
                     * @param Gtid 指定GITD。回放到指定GTID时必传。
                     */
                    void SetGtid(const std::string& _gtid);

                    /**
                     * 判断参数 Gtid 是否已赋值
                     * @return Gtid 是否已赋值
                     */
                    bool GtidHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 延迟复制类型。可选值 DEFAULT（按照延迟复制时间进行复制）、GTID（回放到指定GTID）、DUE_TIME（回放到指定时间点）。
                     */
                    std::string m_delayReplicationType;
                    bool m_delayReplicationTypeHasBeenSet;

                    /**
                     * 指定时间点，默认为0，最大值不能超过当前时间。
                     */
                    int64_t m_dueTime;
                    bool m_dueTimeHasBeenSet;

                    /**
                     * 指定GITD。回放到指定GTID时必传。
                     */
                    std::string m_gtid;
                    bool m_gtidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_STARTDELAYREPLICATIONREQUEST_H_
