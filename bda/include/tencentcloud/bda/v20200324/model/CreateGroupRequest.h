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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_CREATEGROUPREQUEST_H_

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
                * CreateGroup请求参数结构体
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人体库名称，[1,60]个字符，可修改，不可重复。
                     * @return GroupName 人体库名称，[1,60]个字符，可修改，不可重复。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人体库名称，[1,60]个字符，可修改，不可重复。
                     * @param _groupName 人体库名称，[1,60]个字符，可修改，不可重复。
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
                     * 获取人体库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * @return GroupId 人体库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人体库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * @param _groupId 人体库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
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
                     * 获取人体库信息备注，[0，40]个字符。
                     * @return Tag 人体库信息备注，[0，40]个字符。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人体库信息备注，[0，40]个字符。
                     * @param _tag 人体库信息备注，[0，40]个字符。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取人体识别所用的算法模型版本。 
目前入参仅支持 “1.0”1个输入。 默认为"1.0"。  
不同算法模型版本对应的人体识别算法不同，新版本的整体效果会优于旧版本，后续我们将推出更新版本。
                     * @return BodyModelVersion 人体识别所用的算法模型版本。 
目前入参仅支持 “1.0”1个输入。 默认为"1.0"。  
不同算法模型版本对应的人体识别算法不同，新版本的整体效果会优于旧版本，后续我们将推出更新版本。
                     * 
                     */
                    std::string GetBodyModelVersion() const;

                    /**
                     * 设置人体识别所用的算法模型版本。 
目前入参仅支持 “1.0”1个输入。 默认为"1.0"。  
不同算法模型版本对应的人体识别算法不同，新版本的整体效果会优于旧版本，后续我们将推出更新版本。
                     * @param _bodyModelVersion 人体识别所用的算法模型版本。 
目前入参仅支持 “1.0”1个输入。 默认为"1.0"。  
不同算法模型版本对应的人体识别算法不同，新版本的整体效果会优于旧版本，后续我们将推出更新版本。
                     * 
                     */
                    void SetBodyModelVersion(const std::string& _bodyModelVersion);

                    /**
                     * 判断参数 BodyModelVersion 是否已赋值
                     * @return BodyModelVersion 是否已赋值
                     * 
                     */
                    bool BodyModelVersionHasBeenSet() const;

                private:

                    /**
                     * 人体库名称，[1,60]个字符，可修改，不可重复。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 人体库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人体库信息备注，[0，40]个字符。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 人体识别所用的算法模型版本。 
目前入参仅支持 “1.0”1个输入。 默认为"1.0"。  
不同算法模型版本对应的人体识别算法不同，新版本的整体效果会优于旧版本，后续我们将推出更新版本。
                     */
                    std::string m_bodyModelVersion;
                    bool m_bodyModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_CREATEGROUPREQUEST_H_
