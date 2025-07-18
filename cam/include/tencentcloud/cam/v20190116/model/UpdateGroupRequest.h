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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEGROUPREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdateGroup请求参数结构体
                */
                class UpdateGroupRequest : public AbstractModel
                {
                public:
                    UpdateGroupRequest();
                    ~UpdateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组 ID
                     * @return GroupId 用户组 ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置用户组 ID
                     * @param _groupId 用户组 ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取用户组名
                     * @return GroupName 用户组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组名
                     * @param _groupName 用户组名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取用户组描述
                     * @return Remark 用户组描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置用户组描述
                     * @param _remark 用户组描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 用户组 ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 用户组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户组描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEGROUPREQUEST_H_
