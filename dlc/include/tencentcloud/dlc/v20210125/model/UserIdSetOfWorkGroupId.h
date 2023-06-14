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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERIDSETOFWORKGROUPID_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERIDSETOFWORKGROUPID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 绑定到同一个工作组的用户Id的集合
                */
                class UserIdSetOfWorkGroupId : public AbstractModel
                {
                public:
                    UserIdSetOfWorkGroupId();
                    ~UserIdSetOfWorkGroupId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作组Id
                     * @return WorkGroupId 工作组Id
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置工作组Id
                     * @param _workGroupId 工作组Id
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取用户Id集合，和CAM侧Uin匹配
                     * @return UserIds 用户Id集合，和CAM侧Uin匹配
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置用户Id集合，和CAM侧Uin匹配
                     * @param _userIds 用户Id集合，和CAM侧Uin匹配
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * 工作组Id
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * 用户Id集合，和CAM侧Uin匹配
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERIDSETOFWORKGROUPID_H_
