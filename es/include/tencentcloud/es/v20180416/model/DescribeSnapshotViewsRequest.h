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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESNAPSHOTVIEWSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESNAPSHOTVIEWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeSnapshotViews请求参数结构体
                */
                class DescribeSnapshotViewsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotViewsRequest();
                    ~DescribeSnapshotViewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群实例ID</p>
                     * @return InstanceId <p>集群实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceId() const;

                    /**
                     * 设置<p>集群实例ID</p>
                     * @param _instanceId <p>集群实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::vector<std::string>& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>快照状态，IN_PROGRESS,SUCCESS,FAILED,PARTIAL</p>
                     * @return State <p>快照状态，IN_PROGRESS,SUCCESS,FAILED,PARTIAL</p>
                     * 
                     */
                    std::vector<std::string> GetState() const;

                    /**
                     * 设置<p>快照状态，IN_PROGRESS,SUCCESS,FAILED,PARTIAL</p>
                     * @param _state <p>快照状态，IN_PROGRESS,SUCCESS,FAILED,PARTIAL</p>
                     * 
                     */
                    void SetState(const std::vector<std::string>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>创建方式: true(手动备份); false(自动备份); 空字符串表示全部</p>
                     * @return UserBackUp <p>创建方式: true(手动备份); false(自动备份); 空字符串表示全部</p>
                     * 
                     */
                    std::string GetUserBackUp() const;

                    /**
                     * 设置<p>创建方式: true(手动备份); false(自动备份); 空字符串表示全部</p>
                     * @param _userBackUp <p>创建方式: true(手动备份); false(自动备份); 空字符串表示全部</p>
                     * 
                     */
                    void SetUserBackUp(const std::string& _userBackUp);

                    /**
                     * 判断参数 UserBackUp 是否已赋值
                     * @return UserBackUp 是否已赋值
                     * 
                     */
                    bool UserBackUpHasBeenSet() const;

                    /**
                     * 获取<p>时间范围, 最近多少天, 0表示查询所有时间范围</p>
                     * @return Duration <p>时间范围, 最近多少天, 0表示查询所有时间范围</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>时间范围, 最近多少天, 0表示查询所有时间范围</p>
                     * @param _duration <p>时间范围, 最近多少天, 0表示查询所有时间范围</p>
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例ID</p>
                     */
                    std::vector<std::string> m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>快照状态，IN_PROGRESS,SUCCESS,FAILED,PARTIAL</p>
                     */
                    std::vector<std::string> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>创建方式: true(手动备份); false(自动备份); 空字符串表示全部</p>
                     */
                    std::string m_userBackUp;
                    bool m_userBackUpHasBeenSet;

                    /**
                     * <p>时间范围, 最近多少天, 0表示查询所有时间范围</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESNAPSHOTVIEWSREQUEST_H_
