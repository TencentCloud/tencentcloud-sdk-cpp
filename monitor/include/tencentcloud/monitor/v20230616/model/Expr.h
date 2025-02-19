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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_EXPR_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_EXPR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 计算算子
                */
                class Expr : public AbstractModel
                {
                public:
                    Expr();
                    ~Expr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取算子名称
                     * @return Function 算子名称
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置算子名称
                     * @param _function 算子名称
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取算子入参值
                     * @return N 算子入参值
                     * 
                     */
                    double GetN() const;

                    /**
                     * 设置算子入参值
                     * @param _n 算子入参值
                     * 
                     */
                    void SetN(const double& _n);

                    /**
                     * 判断参数 N 是否已赋值
                     * @return N 是否已赋值
                     * 
                     */
                    bool NHasBeenSet() const;

                private:

                    /**
                     * 算子名称
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 算子入参值
                     */
                    double m_n;
                    bool m_nHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_EXPR_H_
