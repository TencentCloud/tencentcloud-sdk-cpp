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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DELETEGROUPSSTDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DELETEGROUPSSTDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DeleteGroupsSTD请求参数结构体
                */
                class DeleteGroupsSTDRequest : public AbstractModel
                {
                public:
                    DeleteGroupsSTDRequest();
                    ~DeleteGroupsSTDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名称
                     * @return InstanceId 集群名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群名称
                     * @param _instanceId 集群名称
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
                     * 获取用户组名称数组
                     * @return GroupNames 用户组名称数组
                     * 
                     */
                    std::vector<std::string> GetGroupNames() const;

                    /**
                     * 设置用户组名称数组
                     * @param _groupNames 用户组名称数组
                     * 
                     */
                    void SetGroupNames(const std::vector<std::string>& _groupNames);

                    /**
                     * 判断参数 GroupNames 是否已赋值
                     * @return GroupNames 是否已赋值
                     * 
                     */
                    bool GroupNamesHasBeenSet() const;

                private:

                    /**
                     * 集群名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户组名称数组
                     */
                    std::vector<std::string> m_groupNames;
                    bool m_groupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DELETEGROUPSSTDREQUEST_H_
