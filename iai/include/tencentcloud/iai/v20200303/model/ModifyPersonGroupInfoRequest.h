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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONGROUPINFOREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * ModifyPersonGroupInfo请求参数结构体
                */
                class ModifyPersonGroupInfoRequest : public AbstractModel
                {
                public:
                    ModifyPersonGroupInfoRequest();
                    ~ModifyPersonGroupInfoRequest() = default;
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
                     * 获取人员ID，取值为创建人员接口中的PersonId。
                     * @return PersonId 人员ID，取值为创建人员接口中的PersonId。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID，取值为创建人员接口中的PersonId。
                     * @param _personId 人员ID，取值为创建人员接口中的PersonId。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取需要修改的人员描述字段内容，key-value。
                     * @return PersonExDescriptionInfos 需要修改的人员描述字段内容，key-value。
                     * 
                     */
                    std::vector<PersonExDescriptionInfo> GetPersonExDescriptionInfos() const;

                    /**
                     * 设置需要修改的人员描述字段内容，key-value。
                     * @param _personExDescriptionInfos 需要修改的人员描述字段内容，key-value。
                     * 
                     */
                    void SetPersonExDescriptionInfos(const std::vector<PersonExDescriptionInfo>& _personExDescriptionInfos);

                    /**
                     * 判断参数 PersonExDescriptionInfos 是否已赋值
                     * @return PersonExDescriptionInfos 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionInfosHasBeenSet() const;

                private:

                    /**
                     * 人员库ID，取值为创建人员库接口中的GroupId。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人员ID，取值为创建人员接口中的PersonId。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 需要修改的人员描述字段内容，key-value。
                     */
                    std::vector<PersonExDescriptionInfo> m_personExDescriptionInfos;
                    bool m_personExDescriptionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONGROUPINFOREQUEST_H_
