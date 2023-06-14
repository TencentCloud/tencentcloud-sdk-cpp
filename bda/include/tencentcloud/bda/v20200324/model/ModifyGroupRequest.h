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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_MODIFYGROUPREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_MODIFYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyGroup请求参数结构体
                */
                class ModifyGroupRequest : public AbstractModel
                {
                public:
                    ModifyGroupRequest();
                    ~ModifyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人体库ID。
                     * @return GroupId 人体库ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人体库ID。
                     * @param _groupId 人体库ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取人体库名称。
                     * @return GroupName 人体库名称。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人体库名称。
                     * @param _groupName 人体库名称。
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
                     * 获取人体库信息备注。
                     * @return Tag 人体库信息备注。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人体库信息备注。
                     * @param _tag 人体库信息备注。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 人体库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人体库名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 人体库信息备注。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_MODIFYGROUPREQUEST_H_
