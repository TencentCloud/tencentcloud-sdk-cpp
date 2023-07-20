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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCECONDITION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCECONDITION_H_

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
                * 实例检索条件
                */
                class InstanceCondition : public AbstractModel
                {
                public:
                    InstanceCondition();
                    ~InstanceCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行类型
                     * @return ExecutionSpace 执行类型
                     * 
                     */
                    std::string GetExecutionSpace() const;

                    /**
                     * 设置执行类型
                     * @param _executionSpace 执行类型
                     * 
                     */
                    void SetExecutionSpace(const std::string& _executionSpace);

                    /**
                     * 判断参数 ExecutionSpace 是否已赋值
                     * @return ExecutionSpace 是否已赋值
                     * 
                     */
                    bool ExecutionSpaceHasBeenSet() const;

                    /**
                     * 获取任务产品类型
                     * @return ProductName 任务产品类型
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置任务产品类型
                     * @param _productName 任务产品类型
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                private:

                    /**
                     * 执行类型
                     */
                    std::string m_executionSpace;
                    bool m_executionSpaceHasBeenSet;

                    /**
                     * 任务产品类型
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCECONDITION_H_
