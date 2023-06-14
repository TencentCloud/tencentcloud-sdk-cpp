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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MODIFYMODELDEFINITIONREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MODIFYMODELDEFINITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * ModifyModelDefinition请求参数结构体
                */
                class ModifyModelDefinitionRequest : public AbstractModel
                {
                public:
                    ModifyModelDefinitionRequest();
                    ~ModifyModelDefinitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取数据模板定义
                     * @return ModelSchema 数据模板定义
                     * 
                     */
                    std::string GetModelSchema() const;

                    /**
                     * 设置数据模板定义
                     * @param _modelSchema 数据模板定义
                     * 
                     */
                    void SetModelSchema(const std::string& _modelSchema);

                    /**
                     * 判断参数 ModelSchema 是否已赋值
                     * @return ModelSchema 是否已赋值
                     * 
                     */
                    bool ModelSchemaHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 数据模板定义
                     */
                    std::string m_modelSchema;
                    bool m_modelSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MODIFYMODELDEFINITIONREQUEST_H_
