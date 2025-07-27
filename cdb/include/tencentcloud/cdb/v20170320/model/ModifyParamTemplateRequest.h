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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Parameter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取模板 ID。可通过 [DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/236/32660) 接口获取。
                     * @return TemplateId 模板 ID。可通过 [DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/236/32660) 接口获取。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板 ID。可通过 [DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/236/32660) 接口获取。
                     * @param _templateId 模板 ID。可通过 [DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/236/32660) 接口获取。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称，仅支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * @return Name 模板名称，仅支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称，仅支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * @param _name 模板名称，仅支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
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
                     * 获取模板描述，长度不超过255。
                     * @return Description 模板描述，长度不超过255。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述，长度不超过255。
                     * @param _description 模板描述，长度不超过255。
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
                     * 获取参数列表。
                     * @return ParamList 参数列表。
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置参数列表。
                     * @param _paramList 参数列表。
                     * 
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * 模板 ID。可通过 [DescribeParamTemplateInfo](https://cloud.tencent.com/document/product/236/32660) 接口获取。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称，仅支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述，长度不超过255。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参数列表。
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_
