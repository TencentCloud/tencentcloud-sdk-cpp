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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSALERTGROUPSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSALERTGROUPSREQUEST_H_

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
                * DeletePrometheusAlertGroups请求参数结构体
                */
                class DeletePrometheusAlertGroupsRequest : public AbstractModel
                {
                public:
                    DeletePrometheusAlertGroupsRequest();
                    ~DeletePrometheusAlertGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取prometheus实例id
                     * @return InstanceId prometheus实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置prometheus实例id
                     * @param _instanceId prometheus实例id
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
                     * 获取需要删除的告警分组ID，形如alert-xxxxx
                     * @return GroupIds 需要删除的告警分组ID，形如alert-xxxxx
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置需要删除的告警分组ID，形如alert-xxxxx
                     * @param _groupIds 需要删除的告警分组ID，形如alert-xxxxx
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * prometheus实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要删除的告警分组ID，形如alert-xxxxx
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSALERTGROUPSREQUEST_H_
