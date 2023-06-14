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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CMEEXPORTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CMEEXPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>
#include <tencentcloud/cme/v20191029/model/ThirdPartyPublishInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 多媒体创作引擎导出信息。
                */
                class CMEExportInfo : public AbstractModel
                {
                public:
                    CMEExportInfo();
                    ~CMEExportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导出媒体归属，个人或团队。
                     * @return Owner 导出媒体归属，个人或团队。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置导出媒体归属，个人或团队。
                     * @param _owner 导出媒体归属，个人或团队。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取导出的媒体名称，不得超过30个字符。
                     * @return Name 导出的媒体名称，不得超过30个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置导出的媒体名称，不得超过30个字符。
                     * @param _name 导出的媒体名称，不得超过30个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取导出的媒体信息，不得超过50个字符。
                     * @return Description 导出的媒体信息，不得超过50个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置导出的媒体信息，不得超过50个字符。
                     * @param _description 导出的媒体信息，不得超过50个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取导出的媒体分类路径，长度不能超过15字符。不存在默认创建。
                     * @return ClassPath 导出的媒体分类路径，长度不能超过15字符。不存在默认创建。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置导出的媒体分类路径，长度不能超过15字符。不存在默认创建。
                     * @param _classPath 导出的媒体分类路径，长度不能超过15字符。不存在默认创建。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取导出的媒体标签，单个标签不得超过10个字符。
                     * @return TagSet 导出的媒体标签，单个标签不得超过10个字符。
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置导出的媒体标签，单个标签不得超过10个字符。
                     * @param _tagSet 导出的媒体标签，单个标签不得超过10个字符。
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * @return ThirdPartyPublishInfos 第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * 
                     */
                    std::vector<ThirdPartyPublishInfo> GetThirdPartyPublishInfos() const;

                    /**
                     * 设置第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * @param _thirdPartyPublishInfos 第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * 
                     */
                    void SetThirdPartyPublishInfos(const std::vector<ThirdPartyPublishInfo>& _thirdPartyPublishInfos);

                    /**
                     * 判断参数 ThirdPartyPublishInfos 是否已赋值
                     * @return ThirdPartyPublishInfos 是否已赋值
                     * 
                     */
                    bool ThirdPartyPublishInfosHasBeenSet() const;

                private:

                    /**
                     * 导出媒体归属，个人或团队。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 导出的媒体名称，不得超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 导出的媒体信息，不得超过50个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 导出的媒体分类路径，长度不能超过15字符。不存在默认创建。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 导出的媒体标签，单个标签不得超过10个字符。
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 第三方平台发布信息列表。暂未正式对外，请勿使用。
                     */
                    std::vector<ThirdPartyPublishInfo> m_thirdPartyPublishInfos;
                    bool m_thirdPartyPublishInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CMEEXPORTINFO_H_
