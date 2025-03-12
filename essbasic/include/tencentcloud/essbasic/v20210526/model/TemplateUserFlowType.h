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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEUSERFLOWTYPE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEUSERFLOWTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 模版对应的合同类型
                */
                class TemplateUserFlowType : public AbstractModel
                {
                public:
                    TemplateUserFlowType();
                    ~TemplateUserFlowType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同类型id
                     * @return UserFlowTypeId 合同类型id
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置合同类型id
                     * @param _userFlowTypeId 合同类型id
                     * 
                     */
                    void SetUserFlowTypeId(const std::string& _userFlowTypeId);

                    /**
                     * 判断参数 UserFlowTypeId 是否已赋值
                     * @return UserFlowTypeId 是否已赋值
                     * 
                     */
                    bool UserFlowTypeIdHasBeenSet() const;

                    /**
                     * 获取用户合同类型名称
                     * @return Name 用户合同类型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户合同类型名称
                     * @param _name 用户合同类型名称
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
                     * 获取每个合同类型绑定的模版数量	
                     * @return TemplateNum 每个合同类型绑定的模版数量	
                     * 
                     */
                    int64_t GetTemplateNum() const;

                    /**
                     * 设置每个合同类型绑定的模版数量	
                     * @param _templateNum 每个合同类型绑定的模版数量	
                     * 
                     */
                    void SetTemplateNum(const int64_t& _templateNum);

                    /**
                     * 判断参数 TemplateNum 是否已赋值
                     * @return TemplateNum 是否已赋值
                     * 
                     */
                    bool TemplateNumHasBeenSet() const;

                    /**
                     * 获取合同类型的具体描述
                     * @return Description 合同类型的具体描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置合同类型的具体描述
                     * @param _description 合同类型的具体描述
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
                     * 合同类型id
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * 用户合同类型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 每个合同类型绑定的模版数量	
                     */
                    int64_t m_templateNum;
                    bool m_templateNumHasBeenSet;

                    /**
                     * 合同类型的具体描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEUSERFLOWTYPE_H_
