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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYSTUDIOPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYSTUDIOPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyStudioProduct请求参数结构体
                */
                class ModifyStudioProductRequest : public AbstractModel
                {
                public:
                    ModifyStudioProductRequest();
                    ~ModifyStudioProductRequest() = default;
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
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品描述
                     * @return ProductDesc 产品描述
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置产品描述
                     * @param _productDesc 产品描述
                     * 
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     * 
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取模型ID
                     * @return ModuleId 模型ID
                     * 
                     */
                    int64_t GetModuleId() const;

                    /**
                     * 设置模型ID
                     * @param _moduleId 模型ID
                     * 
                     */
                    void SetModuleId(const int64_t& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取是否打开二进制转Json功能, 取值为字符串 true/false
                     * @return EnableProductScript 是否打开二进制转Json功能, 取值为字符串 true/false
                     * 
                     */
                    std::string GetEnableProductScript() const;

                    /**
                     * 设置是否打开二进制转Json功能, 取值为字符串 true/false
                     * @param _enableProductScript 是否打开二进制转Json功能, 取值为字符串 true/false
                     * 
                     */
                    void SetEnableProductScript(const std::string& _enableProductScript);

                    /**
                     * 判断参数 EnableProductScript 是否已赋值
                     * @return EnableProductScript 是否已赋值
                     * 
                     */
                    bool EnableProductScriptHasBeenSet() const;

                    /**
                     * 获取传1或者2；1代表强踢，2代表非强踢。传其它值不做任何处理
                     * @return BindStrategy 传1或者2；1代表强踢，2代表非强踢。传其它值不做任何处理
                     * 
                     */
                    uint64_t GetBindStrategy() const;

                    /**
                     * 设置传1或者2；1代表强踢，2代表非强踢。传其它值不做任何处理
                     * @param _bindStrategy 传1或者2；1代表强踢，2代表非强踢。传其它值不做任何处理
                     * 
                     */
                    void SetBindStrategy(const uint64_t& _bindStrategy);

                    /**
                     * 判断参数 BindStrategy 是否已赋值
                     * @return BindStrategy 是否已赋值
                     * 
                     */
                    bool BindStrategyHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 模型ID
                     */
                    int64_t m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 是否打开二进制转Json功能, 取值为字符串 true/false
                     */
                    std::string m_enableProductScript;
                    bool m_enableProductScriptHasBeenSet;

                    /**
                     * 传1或者2；1代表强踢，2代表非强踢。传其它值不做任何处理
                     */
                    uint64_t m_bindStrategy;
                    bool m_bindStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYSTUDIOPRODUCTREQUEST_H_
