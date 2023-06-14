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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_UPDATEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_UPDATEPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DataTemplate.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * UpdateProduct请求参数结构体
                */
                class UpdateProductRequest : public AbstractModel
                {
                public:
                    UpdateProductRequest();
                    ~UpdateProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return Name 产品名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置产品名称
                     * @param _name 产品名称
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
                     * 获取产品描述
                     * @return Description 产品描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置产品描述
                     * @param _description 产品描述
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
                     * 获取数据模版
                     * @return DataTemplate 数据模版
                     * 
                     */
                    std::vector<DataTemplate> GetDataTemplate() const;

                    /**
                     * 设置数据模版
                     * @param _dataTemplate 数据模版
                     * 
                     */
                    void SetDataTemplate(const std::vector<DataTemplate>& _dataTemplate);

                    /**
                     * 判断参数 DataTemplate 是否已赋值
                     * @return DataTemplate 是否已赋值
                     * 
                     */
                    bool DataTemplateHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据模版
                     */
                    std::vector<DataTemplate> m_dataTemplate;
                    bool m_dataTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_UPDATEPRODUCTREQUEST_H_
