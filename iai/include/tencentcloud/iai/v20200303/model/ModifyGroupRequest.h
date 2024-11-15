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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYGROUPREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/GroupExDescriptionInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
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
                     * 获取人员库ID，取值为创建人员库接口中的GroupId。
                     * @return GroupId 人员库ID，取值为创建人员库接口中的GroupId。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库ID，取值为创建人员库接口中的GroupId。
                     * @param _groupId 人员库ID，取值为创建人员库接口中的GroupId。
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
                     * 获取人员库名称。
                     * @return GroupName 人员库名称。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人员库名称。
                     * @param _groupName 人员库名称。
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
                     * 获取需要修改的人员库自定义描述字段，key-value。
                     * @return GroupExDescriptionInfos 需要修改的人员库自定义描述字段，key-value。
                     * 
                     */
                    std::vector<GroupExDescriptionInfo> GetGroupExDescriptionInfos() const;

                    /**
                     * 设置需要修改的人员库自定义描述字段，key-value。
                     * @param _groupExDescriptionInfos 需要修改的人员库自定义描述字段，key-value。
                     * 
                     */
                    void SetGroupExDescriptionInfos(const std::vector<GroupExDescriptionInfo>& _groupExDescriptionInfos);

                    /**
                     * 判断参数 GroupExDescriptionInfos 是否已赋值
                     * @return GroupExDescriptionInfos 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionInfosHasBeenSet() const;

                    /**
                     * 获取人员库信息备注。
                     * @return Tag 人员库信息备注。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人员库信息备注。
                     * @param _tag 人员库信息备注。
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
                     * 人员库ID，取值为创建人员库接口中的GroupId。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人员库名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 需要修改的人员库自定义描述字段，key-value。
                     */
                    std::vector<GroupExDescriptionInfo> m_groupExDescriptionInfos;
                    bool m_groupExDescriptionInfosHasBeenSet;

                    /**
                     * 人员库信息备注。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYGROUPREQUEST_H_
