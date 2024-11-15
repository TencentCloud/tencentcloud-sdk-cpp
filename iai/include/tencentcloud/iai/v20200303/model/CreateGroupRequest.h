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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
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
                     * 获取人员库名称，[1,60]个字符，可修改，不可重复。
                     * @return GroupName 人员库名称，[1,60]个字符，可修改，不可重复。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人员库名称，[1,60]个字符，可修改，不可重复。
                     * @param _groupName 人员库名称，[1,60]个字符，可修改，不可重复。
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
                     * 获取人员库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * @return GroupId 人员库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * @param _groupId 人员库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
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
                     * 获取人员库自定义描述字段，用于描述人员库中人员属性，该人员库下所有人员将拥有此描述字段。 
- 最多可以创建5个。 
- 每个自定义描述字段支持[1,30]个字符。 
- 在同一人员库中自定义描述字段不可重复。 
- 例： 设置某人员库“自定义描述字段”为["学号","工号","手机号"]， 则该人员库下所有人员将拥有名为“学号”、“工号”、“手机号”的描述字段， 可在对应人员描述字段中填写内容，登记该人员的学号、工号、手机号等信息。
                     * @return GroupExDescriptions 人员库自定义描述字段，用于描述人员库中人员属性，该人员库下所有人员将拥有此描述字段。 
- 最多可以创建5个。 
- 每个自定义描述字段支持[1,30]个字符。 
- 在同一人员库中自定义描述字段不可重复。 
- 例： 设置某人员库“自定义描述字段”为["学号","工号","手机号"]， 则该人员库下所有人员将拥有名为“学号”、“工号”、“手机号”的描述字段， 可在对应人员描述字段中填写内容，登记该人员的学号、工号、手机号等信息。
                     * 
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 设置人员库自定义描述字段，用于描述人员库中人员属性，该人员库下所有人员将拥有此描述字段。 
- 最多可以创建5个。 
- 每个自定义描述字段支持[1,30]个字符。 
- 在同一人员库中自定义描述字段不可重复。 
- 例： 设置某人员库“自定义描述字段”为["学号","工号","手机号"]， 则该人员库下所有人员将拥有名为“学号”、“工号”、“手机号”的描述字段， 可在对应人员描述字段中填写内容，登记该人员的学号、工号、手机号等信息。
                     * @param _groupExDescriptions 人员库自定义描述字段，用于描述人员库中人员属性，该人员库下所有人员将拥有此描述字段。 
- 最多可以创建5个。 
- 每个自定义描述字段支持[1,30]个字符。 
- 在同一人员库中自定义描述字段不可重复。 
- 例： 设置某人员库“自定义描述字段”为["学号","工号","手机号"]， 则该人员库下所有人员将拥有名为“学号”、“工号”、“手机号”的描述字段， 可在对应人员描述字段中填写内容，登记该人员的学号、工号、手机号等信息。
                     * 
                     */
                    void SetGroupExDescriptions(const std::vector<std::string>& _groupExDescriptions);

                    /**
                     * 判断参数 GroupExDescriptions 是否已赋值
                     * @return GroupExDescriptions 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionsHasBeenSet() const;

                    /**
                     * 获取人员库信息备注，[0，40]个字符。
                     * @return Tag 人员库信息备注，[0，40]个字符。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人员库信息备注，[0，40]个字符。
                     * @param _tag 人员库信息备注，[0，40]个字符。
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
                     * 获取人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * @return FaceModelVersion 人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * @param _faceModelVersion 人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * 
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * 人员库名称，[1,60]个字符，可修改，不可重复。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 人员库 ID，不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人员库自定义描述字段，用于描述人员库中人员属性，该人员库下所有人员将拥有此描述字段。 
- 最多可以创建5个。 
- 每个自定义描述字段支持[1,30]个字符。 
- 在同一人员库中自定义描述字段不可重复。 
- 例： 设置某人员库“自定义描述字段”为["学号","工号","手机号"]， 则该人员库下所有人员将拥有名为“学号”、“工号”、“手机号”的描述字段， 可在对应人员描述字段中填写内容，登记该人员的学号、工号、手机号等信息。
                     */
                    std::vector<std::string> m_groupExDescriptions;
                    bool m_groupExDescriptionsHasBeenSet;

                    /**
                     * 人员库信息备注，[0，40]个字符。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEGROUPREQUEST_H_
