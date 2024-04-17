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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreatePolicy请求参数结构体
                */
                class CreatePolicyRequest : public AbstractModel
                {
                public:
                    CreatePolicyRequest();
                    ~CreatePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略名。
长度为1~128个字符，可以包含汉字、英文字母、数字和下划线（_）
                     * @return Name 策略名。
长度为1~128个字符，可以包含汉字、英文字母、数字和下划线（_）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名。
长度为1~128个字符，可以包含汉字、英文字母、数字和下划线（_）
                     * @param _name 策略名。
长度为1~128个字符，可以包含汉字、英文字母、数字和下划线（_）
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
                     * 获取策略内容。参考CAM策略语法
                     * @return Content 策略内容。参考CAM策略语法
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置策略内容。参考CAM策略语法
                     * @param _content 策略内容。参考CAM策略语法
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
                     * 获取策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * @return Type 策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * @param _type 策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取策略描述。
                     * @return Description 策略描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述。
                     * @param _description 策略描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 策略名。
长度为1~128个字符，可以包含汉字、英文字母、数字和下划线（_）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略内容。参考CAM策略语法
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEPOLICYREQUEST_H_
