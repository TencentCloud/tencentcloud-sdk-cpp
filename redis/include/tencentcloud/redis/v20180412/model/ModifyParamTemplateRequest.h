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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceParam.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyParamTemplate请求参数结构体
                */
                class ModifyParamTemplateRequest : public AbstractModel
                {
                public:
                    ModifyParamTemplateRequest();
                    ~ModifyParamTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源参数模板 ID。 请通过接口[DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/239/58748)的返回参数 **TemplateId** 获取参数模板 ID。 
                     * @return TemplateId 源参数模板 ID。 请通过接口[DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/239/58748)的返回参数 **TemplateId** 获取参数模板 ID。 
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置源参数模板 ID。 请通过接口[DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/239/58748)的返回参数 **TemplateId** 获取参数模板 ID。 
                     * @param _templateId 源参数模板 ID。 请通过接口[DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/239/58748)的返回参数 **TemplateId** 获取参数模板 ID。 
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取参数模板修改后的新名称。
                     * @return Name 参数模板修改后的新名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数模板修改后的新名称。
                     * @param _name 参数模板修改后的新名称。
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
                     * 获取参数模板修改后的新描述。
                     * @return Description 参数模板修改后的新描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数模板修改后的新描述。
                     * @param _description 参数模板修改后的新描述。
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
                     * 获取修改后的新参数列表。
                     * @return ParamList 修改后的新参数列表。
                     * 
                     */
                    std::vector<InstanceParam> GetParamList() const;

                    /**
                     * 设置修改后的新参数列表。
                     * @param _paramList 修改后的新参数列表。
                     * 
                     */
                    void SetParamList(const std::vector<InstanceParam>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * 源参数模板 ID。 请通过接口[DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/239/58748)的返回参数 **TemplateId** 获取参数模板 ID。 
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 参数模板修改后的新名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数模板修改后的新描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修改后的新参数列表。
                     */
                    std::vector<InstanceParam> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_
