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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GROUPDETAILFORUSER_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GROUPDETAILFORUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 组织详情信息
                */
                class GroupDetailForUser : public AbstractModel
                {
                public:
                    GroupDetailForUser();
                    ~GroupDetailForUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组织名称
                     * @return GroupName 组织名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置组织名称
                     * @param GroupName 组织名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取组织MSP Identity
                     * @return GroupMSPId 组织MSP Identity
                     */
                    std::string GetGroupMSPId() const;

                    /**
                     * 设置组织MSP Identity
                     * @param GroupMSPId 组织MSP Identity
                     */
                    void SetGroupMSPId(const std::string& _groupMSPId);

                    /**
                     * 判断参数 GroupMSPId 是否已赋值
                     * @return GroupMSPId 是否已赋值
                     */
                    bool GroupMSPIdHasBeenSet() const;

                private:

                    /**
                     * 组织名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 组织MSP Identity
                     */
                    std::string m_groupMSPId;
                    bool m_groupMSPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GROUPDETAILFORUSER_H_
