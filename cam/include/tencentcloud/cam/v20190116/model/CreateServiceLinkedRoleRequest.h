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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/RoleTags.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateServiceLinkedRole请求参数结构体
                */
                class CreateServiceLinkedRoleRequest : public AbstractModel
                {
                public:
                    CreateServiceLinkedRoleRequest();
                    ~CreateServiceLinkedRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取填写此角色的腾讯云服务载体，具体可查询文档（角色载体）字段
https://cloud.tencent.com/document/product/598/85165
                     * @return QCSServiceName 填写此角色的腾讯云服务载体，具体可查询文档（角色载体）字段
https://cloud.tencent.com/document/product/598/85165
                     * 
                     */
                    std::vector<std::string> GetQCSServiceName() const;

                    /**
                     * 设置填写此角色的腾讯云服务载体，具体可查询文档（角色载体）字段
https://cloud.tencent.com/document/product/598/85165
                     * @param _qCSServiceName 填写此角色的腾讯云服务载体，具体可查询文档（角色载体）字段
https://cloud.tencent.com/document/product/598/85165
                     * 
                     */
                    void SetQCSServiceName(const std::vector<std::string>& _qCSServiceName);

                    /**
                     * 判断参数 QCSServiceName 是否已赋值
                     * @return QCSServiceName 是否已赋值
                     * 
                     */
                    bool QCSServiceNameHasBeenSet() const;

                    /**
                     * 获取自定义后缀，根据您提供的字符串，与服务提供的前缀组合在一起以形成完整的角色名称。
                     * @return CustomSuffix 自定义后缀，根据您提供的字符串，与服务提供的前缀组合在一起以形成完整的角色名称。
                     * 
                     */
                    std::string GetCustomSuffix() const;

                    /**
                     * 设置自定义后缀，根据您提供的字符串，与服务提供的前缀组合在一起以形成完整的角色名称。
                     * @param _customSuffix 自定义后缀，根据您提供的字符串，与服务提供的前缀组合在一起以形成完整的角色名称。
                     * 
                     */
                    void SetCustomSuffix(const std::string& _customSuffix);

                    /**
                     * 判断参数 CustomSuffix 是否已赋值
                     * @return CustomSuffix 是否已赋值
                     * 
                     */
                    bool CustomSuffixHasBeenSet() const;

                    /**
                     * 获取角色说明。
                     * @return Description 角色说明。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置角色说明。
                     * @param _description 角色说明。
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
                     * 获取角色绑定标签。
                     * @return Tags 角色绑定标签。
                     * 
                     */
                    std::vector<RoleTags> GetTags() const;

                    /**
                     * 设置角色绑定标签。
                     * @param _tags 角色绑定标签。
                     * 
                     */
                    void SetTags(const std::vector<RoleTags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 填写此角色的腾讯云服务载体，具体可查询文档（角色载体）字段
https://cloud.tencent.com/document/product/598/85165
                     */
                    std::vector<std::string> m_qCSServiceName;
                    bool m_qCSServiceNameHasBeenSet;

                    /**
                     * 自定义后缀，根据您提供的字符串，与服务提供的前缀组合在一起以形成完整的角色名称。
                     */
                    std::string m_customSuffix;
                    bool m_customSuffixHasBeenSet;

                    /**
                     * 角色说明。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色绑定标签。
                     */
                    std::vector<RoleTags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLEREQUEST_H_
