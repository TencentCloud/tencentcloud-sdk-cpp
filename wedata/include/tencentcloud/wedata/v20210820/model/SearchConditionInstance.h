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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 查询框架
                */
                class SearchConditionInstance : public AbstractModel
                {
                public:
                    SearchConditionInstance();
                    ~SearchConditionInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行空间 "DRY_RUN"
                     * @return ExecutionSpace 执行空间 "DRY_RUN"
                     * 
                     */
                    uint64_t GetExecutionSpace() const;

                    /**
                     * 设置执行空间 "DRY_RUN"
                     * @param _executionSpace 执行空间 "DRY_RUN"
                     * 
                     */
                    void SetExecutionSpace(const uint64_t& _executionSpace);

                    /**
                     * 判断参数 ExecutionSpace 是否已赋值
                     * @return ExecutionSpace 是否已赋值
                     * 
                     */
                    bool ExecutionSpaceHasBeenSet() const;

                    /**
                     * 获取产品名称，可选
                     * @return ProductName 产品名称，可选
                     * 
                     */
                    uint64_t GetProductName() const;

                    /**
                     * 设置产品名称，可选
                     * @param _productName 产品名称，可选
                     * 
                     */
                    void SetProductName(const uint64_t& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取资源组
                     * @return ResourceGroup 资源组
                     * 
                     */
                    uint64_t GetResourceGroup() const;

                    /**
                     * 设置资源组
                     * @param _resourceGroup 资源组
                     * 
                     */
                    void SetResourceGroup(const uint64_t& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                private:

                    /**
                     * 执行空间 "DRY_RUN"
                     */
                    uint64_t m_executionSpace;
                    bool m_executionSpaceHasBeenSet;

                    /**
                     * 产品名称，可选
                     */
                    uint64_t m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 资源组
                     */
                    uint64_t m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONINSTANCE_H_
