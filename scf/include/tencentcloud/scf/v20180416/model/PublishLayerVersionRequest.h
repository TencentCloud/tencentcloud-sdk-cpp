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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHLAYERVERSIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHLAYERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Code.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PublishLayerVersion请求参数结构体
                */
                class PublishLayerVersionRequest : public AbstractModel
                {
                public:
                    PublishLayerVersionRequest();
                    ~PublishLayerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取层名称，支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度1-64
                     * @return LayerName 层名称，支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度1-64
                     * 
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置层名称，支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度1-64
                     * @param _layerName 层名称，支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度1-64
                     * 
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     * 
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取层适用的运行时，可多选，可选的值对应函数的 Runtime 可选值。
                     * @return CompatibleRuntimes 层适用的运行时，可多选，可选的值对应函数的 Runtime 可选值。
                     * 
                     */
                    std::vector<std::string> GetCompatibleRuntimes() const;

                    /**
                     * 设置层适用的运行时，可多选，可选的值对应函数的 Runtime 可选值。
                     * @param _compatibleRuntimes 层适用的运行时，可多选，可选的值对应函数的 Runtime 可选值。
                     * 
                     */
                    void SetCompatibleRuntimes(const std::vector<std::string>& _compatibleRuntimes);

                    /**
                     * 判断参数 CompatibleRuntimes 是否已赋值
                     * @return CompatibleRuntimes 是否已赋值
                     * 
                     */
                    bool CompatibleRuntimesHasBeenSet() const;

                    /**
                     * 获取层的文件来源或文件内容
                     * @return Content 层的文件来源或文件内容
                     * 
                     */
                    Code GetContent() const;

                    /**
                     * 设置层的文件来源或文件内容
                     * @param _content 层的文件来源或文件内容
                     * 
                     */
                    void SetContent(const Code& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取层的版本的描述
                     * @return Description 层的版本的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置层的版本的描述
                     * @param _description 层的版本的描述
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
                     * 获取层的软件许可证
                     * @return LicenseInfo 层的软件许可证
                     * 
                     */
                    std::string GetLicenseInfo() const;

                    /**
                     * 设置层的软件许可证
                     * @param _licenseInfo 层的软件许可证
                     * 
                     */
                    void SetLicenseInfo(const std::string& _licenseInfo);

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     * 
                     */
                    bool LicenseInfoHasBeenSet() const;

                    /**
                     * 获取层Tag 参数，以键值对数组形式传入
                     * @return Tags 层Tag 参数，以键值对数组形式传入
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置层Tag 参数，以键值对数组形式传入
                     * @param _tags 层Tag 参数，以键值对数组形式传入
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 层名称，支持26个英文字母大小写、数字、连接符和下划线，第一个字符只能以字母开头，最后一个字符不能为连接符或者下划线，名称长度1-64
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * 层适用的运行时，可多选，可选的值对应函数的 Runtime 可选值。
                     */
                    std::vector<std::string> m_compatibleRuntimes;
                    bool m_compatibleRuntimesHasBeenSet;

                    /**
                     * 层的文件来源或文件内容
                     */
                    Code m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 层的版本的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 层的软件许可证
                     */
                    std::string m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                    /**
                     * 层Tag 参数，以键值对数组形式传入
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHLAYERVERSIONREQUEST_H_
