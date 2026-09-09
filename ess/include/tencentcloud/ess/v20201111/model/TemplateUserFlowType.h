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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEUSERFLOWTYPE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEUSERFLOWTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 模板对应的合同类型
                */
                class TemplateUserFlowType : public AbstractModel
                {
                public:
                    TemplateUserFlowType();
                    ~TemplateUserFlowType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同类型id</p>
                     * @return UserFlowTypeId <p>合同类型id</p>
                     * 
                     */
                    std::string GetUserFlowTypeId() const;

                    /**
                     * 设置<p>合同类型id</p>
                     * @param _userFlowTypeId <p>合同类型id</p>
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
                     * 获取<p>合同类型名称</p>
                     * @return Name <p>合同类型名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>合同类型名称</p>
                     * @param _name <p>合同类型名称</p>
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
                     * 获取<p>合同类型的具体描述</p>
                     * @return Description <p>合同类型的具体描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>合同类型的具体描述</p>
                     * @param _description <p>合同类型的具体描述</p>
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
                     * 获取<p>每个合同类型绑定的模板数量</p>
                     * @return TemplateNum <p>每个合同类型绑定的模板数量</p>
                     * 
                     */
                    int64_t GetTemplateNum() const;

                    /**
                     * 设置<p>每个合同类型绑定的模板数量</p>
                     * @param _templateNum <p>每个合同类型绑定的模板数量</p>
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
                     * 获取<p>自定义合同类型状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * @return Status <p>自定义合同类型状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>自定义合同类型状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * @param _status <p>自定义合同类型状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>合同类型id</p>
                     */
                    std::string m_userFlowTypeId;
                    bool m_userFlowTypeIdHasBeenSet;

                    /**
                     * <p>合同类型名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>合同类型的具体描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>每个合同类型绑定的模板数量</p>
                     */
                    int64_t m_templateNum;
                    bool m_templateNumHasBeenSet;

                    /**
                     * <p>自定义合同类型状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_TEMPLATEUSERFLOWTYPE_H_
