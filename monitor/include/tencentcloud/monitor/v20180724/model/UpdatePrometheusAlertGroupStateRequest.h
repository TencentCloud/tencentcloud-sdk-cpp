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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPSTATEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdatePrometheusAlertGroupState请求参数结构体
                */
                class UpdatePrometheusAlertGroupStateRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusAlertGroupStateRequest();
                    ~UpdatePrometheusAlertGroupStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param _instanceId Prometheus 实例 ID
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
                     * 获取告警分组ID列表，形如alert-xxxx
                     * @return GroupIds 告警分组ID列表，形如alert-xxxx
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置告警分组ID列表，形如alert-xxxx
                     * @param _groupIds 告警分组ID列表，形如alert-xxxx
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取告警分组状态
2 -- 启用
3 -- 禁用
                     * @return GroupState 告警分组状态
2 -- 启用
3 -- 禁用
                     * 
                     */
                    int64_t GetGroupState() const;

                    /**
                     * 设置告警分组状态
2 -- 启用
3 -- 禁用
                     * @param _groupState 告警分组状态
2 -- 启用
3 -- 禁用
                     * 
                     */
                    void SetGroupState(const int64_t& _groupState);

                    /**
                     * 判断参数 GroupState 是否已赋值
                     * @return GroupState 是否已赋值
                     * 
                     */
                    bool GroupStateHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 告警分组ID列表，形如alert-xxxx
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 告警分组状态
2 -- 启用
3 -- 禁用
                     */
                    int64_t m_groupState;
                    bool m_groupStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPSTATEREQUEST_H_
