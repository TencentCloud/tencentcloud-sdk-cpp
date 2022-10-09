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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEREPLICATIONGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEREPLICATIONGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CreateReplicationGroup请求参数结构体
                */
                class CreateReplicationGroupRequest : public AbstractModel
                {
                public:
                    CreateReplicationGroupRequest();
                    ~CreateReplicationGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定复制组中的主实例ID。
                     * @return InstanceId 指定复制组中的主实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定复制组中的主实例ID。
                     * @param InstanceId 指定复制组中的主实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取复制组名称。
                     * @return GroupName 复制组名称。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置复制组名称。
                     * @param GroupName 复制组名称。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取备注信息。
                     * @return Remark 备注信息。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息。
                     * @param Remark 备注信息。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 指定复制组中的主实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 复制组名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 备注信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEREPLICATIONGROUPREQUEST_H_
