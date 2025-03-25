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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKECONDITION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 触发器触发条件
                */
                class TriggerInvokeCondition : public AbstractModel
                {
                public:
                    TriggerInvokeCondition();
                    ~TriggerInvokeCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发方式
                     * @return InvokeMethod 触发方式
                     * 
                     */
                    std::string GetInvokeMethod() const;

                    /**
                     * 设置触发方式
                     * @param _invokeMethod 触发方式
                     * 
                     */
                    void SetInvokeMethod(const std::string& _invokeMethod);

                    /**
                     * 判断参数 InvokeMethod 是否已赋值
                     * @return InvokeMethod 是否已赋值
                     * 
                     */
                    bool InvokeMethodHasBeenSet() const;

                    /**
                     * 获取触发表达式
                     * @return InvokeExpr 触发表达式
                     * 
                     */
                    std::string GetInvokeExpr() const;

                    /**
                     * 设置触发表达式
                     * @param _invokeExpr 触发表达式
                     * 
                     */
                    void SetInvokeExpr(const std::string& _invokeExpr);

                    /**
                     * 判断参数 InvokeExpr 是否已赋值
                     * @return InvokeExpr 是否已赋值
                     * 
                     */
                    bool InvokeExprHasBeenSet() const;

                private:

                    /**
                     * 触发方式
                     */
                    std::string m_invokeMethod;
                    bool m_invokeMethodHasBeenSet;

                    /**
                     * 触发表达式
                     */
                    std::string m_invokeExpr;
                    bool m_invokeExprHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKECONDITION_H_
