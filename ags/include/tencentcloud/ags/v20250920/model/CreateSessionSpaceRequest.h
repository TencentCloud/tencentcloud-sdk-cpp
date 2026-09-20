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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATESESSIONSPACEREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATESESSIONSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateSessionSpace请求参数结构体
                */
                class CreateSessionSpaceRequest : public AbstractModel
                {
                public:
                    CreateSessionSpaceRequest();
                    ~CreateSessionSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话空间名称，用于标识会话空间的业务用途。</p><p>入参限制：必填；去除首尾空白后不能为空；最大长度为 128 个字符。</p><p>建议名称包含业务和环境信息，便于识别和管理。</p>
                     * @return Name <p>会话空间名称，用于标识会话空间的业务用途。</p><p>入参限制：必填；去除首尾空白后不能为空；最大长度为 128 个字符。</p><p>建议名称包含业务和环境信息，便于识别和管理。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>会话空间名称，用于标识会话空间的业务用途。</p><p>入参限制：必填；去除首尾空白后不能为空；最大长度为 128 个字符。</p><p>建议名称包含业务和环境信息，便于识别和管理。</p>
                     * @param _name <p>会话空间名称，用于标识会话空间的业务用途。</p><p>入参限制：必填；去除首尾空白后不能为空；最大长度为 128 个字符。</p><p>建议名称包含业务和环境信息，便于识别和管理。</p>
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
                     * 获取<p>会话空间描述，用于补充说明会话空间的业务用途。</p><p>入参限制：选填；最大长度为 512 个字符。</p><p>未传入时创建为空描述。</p>
                     * @return Description <p>会话空间描述，用于补充说明会话空间的业务用途。</p><p>入参限制：选填；最大长度为 512 个字符。</p><p>未传入时创建为空描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>会话空间描述，用于补充说明会话空间的业务用途。</p><p>入参限制：选填；最大长度为 512 个字符。</p><p>未传入时创建为空描述。</p>
                     * @param _description <p>会话空间描述，用于补充说明会话空间的业务用途。</p><p>入参限制：选填；最大长度为 512 个字符。</p><p>未传入时创建为空描述。</p>
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
                     * 获取<p>创建 SessionSpace 时为资源绑定标签。</p>
                     * @return Tags <p>创建 SessionSpace 时为资源绑定标签。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>创建 SessionSpace 时为资源绑定标签。</p>
                     * @param _tags <p>创建 SessionSpace 时为资源绑定标签。</p>
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
                     * <p>会话空间名称，用于标识会话空间的业务用途。</p><p>入参限制：必填；去除首尾空白后不能为空；最大长度为 128 个字符。</p><p>建议名称包含业务和环境信息，便于识别和管理。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>会话空间描述，用于补充说明会话空间的业务用途。</p><p>入参限制：选填；最大长度为 512 个字符。</p><p>未传入时创建为空描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建 SessionSpace 时为资源绑定标签。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATESESSIONSPACEREQUEST_H_
