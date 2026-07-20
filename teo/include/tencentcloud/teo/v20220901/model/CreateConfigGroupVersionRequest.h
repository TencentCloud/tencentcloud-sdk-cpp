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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateConfigGroupVersion请求参数结构体
                */
                class CreateConfigGroupVersionRequest : public AbstractModel
                {
                public:
                    CreateConfigGroupVersionRequest();
                    ~CreateConfigGroupVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>待新建版本的配置组 ID。您可以通过查询环境信息接口（DescribeEnvironments）获取完整的环境信息，环境信息中包含了每个配置组类型的配置组 ID。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101862">DescribeEnvironments</a> 返回值 <code>EnvInfos</code></p>
                     * @return GroupId <p>待新建版本的配置组 ID。您可以通过查询环境信息接口（DescribeEnvironments）获取完整的环境信息，环境信息中包含了每个配置组类型的配置组 ID。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101862">DescribeEnvironments</a> 返回值 <code>EnvInfos</code></p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>待新建版本的配置组 ID。您可以通过查询环境信息接口（DescribeEnvironments）获取完整的环境信息，环境信息中包含了每个配置组类型的配置组 ID。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101862">DescribeEnvironments</a> 返回值 <code>EnvInfos</code></p>
                     * @param _groupId <p>待新建版本的配置组 ID。您可以通过查询环境信息接口（DescribeEnvironments）获取完整的环境信息，环境信息中包含了每个配置组类型的配置组 ID。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101862">DescribeEnvironments</a> 返回值 <code>EnvInfos</code></p>
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
                     * 获取<p>待导入的配置内容。要求采用 JSON 格式，按照 UTF-8 方式进行编码。配置文件内容可参考下方示例和 <a href="https://cloud.tencent.com/document/product/1552/125342">配置组语法说明</a>。</p>
                     * @return Content <p>待导入的配置内容。要求采用 JSON 格式，按照 UTF-8 方式进行编码。配置文件内容可参考下方示例和 <a href="https://cloud.tencent.com/document/product/1552/125342">配置组语法说明</a>。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>待导入的配置内容。要求采用 JSON 格式，按照 UTF-8 方式进行编码。配置文件内容可参考下方示例和 <a href="https://cloud.tencent.com/document/product/1552/125342">配置组语法说明</a>。</p>
                     * @param _content <p>待导入的配置内容。要求采用 JSON 格式，按照 UTF-8 方式进行编码。配置文件内容可参考下方示例和 <a href="https://cloud.tencent.com/document/product/1552/125342">配置组语法说明</a>。</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>版本描述，可输入最大长度为 50 个字符，可以通过本字段填写该版本的使用场景等。</p>
                     * @return Description <p>版本描述，可输入最大长度为 50 个字符，可以通过本字段填写该版本的使用场景等。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>版本描述，可输入最大长度为 50 个字符，可以通过本字段填写该版本的使用场景等。</p>
                     * @param _description <p>版本描述，可输入最大长度为 50 个字符，可以通过本字段填写该版本的使用场景等。</p>
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
                     * 获取<p>新版本所基于的来源版本 ID。新版本将在该来源版本的配置基础上派生创建。该字段可选，未传入时默认采用当前生产环境正在生效的版本作为来源版本。</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return SourceVersion <p>新版本所基于的来源版本 ID。新版本将在该来源版本的配置基础上派生创建。该字段可选，未传入时默认采用当前生产环境正在生效的版本作为来源版本。</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置<p>新版本所基于的来源版本 ID。新版本将在该来源版本的配置基础上派生创建。该字段可选，未传入时默认采用当前生产环境正在生效的版本作为来源版本。</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _sourceVersion <p>新版本所基于的来源版本 ID。新版本将在该来源版本的配置基础上派生创建。该字段可选，未传入时默认采用当前生产环境正在生效的版本作为来源版本。</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>待新建版本的配置组 ID。您可以通过查询环境信息接口（DescribeEnvironments）获取完整的环境信息，环境信息中包含了每个配置组类型的配置组 ID。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101862">DescribeEnvironments</a> 返回值 <code>EnvInfos</code></p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>待导入的配置内容。要求采用 JSON 格式，按照 UTF-8 方式进行编码。配置文件内容可参考下方示例和 <a href="https://cloud.tencent.com/document/product/1552/125342">配置组语法说明</a>。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>版本描述，可输入最大长度为 50 个字符，可以通过本字段填写该版本的使用场景等。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>新版本所基于的来源版本 ID。新版本将在该来源版本的配置基础上派生创建。该字段可选，未传入时默认采用当前生产环境正在生效的版本作为来源版本。</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
