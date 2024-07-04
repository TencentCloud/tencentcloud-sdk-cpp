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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOL_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ToolFunction.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 用户指定模型使用的工具
                */
                class Tool : public AbstractModel
                {
                public:
                    Tool();
                    ~Tool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具类型，当前只支持function
                     * @return Type 工具类型，当前只支持function
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置工具类型，当前只支持function
                     * @param _type 工具类型，当前只支持function
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取具体要调用的function
                     * @return Function 具体要调用的function
                     * 
                     */
                    ToolFunction GetFunction() const;

                    /**
                     * 设置具体要调用的function
                     * @param _function 具体要调用的function
                     * 
                     */
                    void SetFunction(const ToolFunction& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                private:

                    /**
                     * 工具类型，当前只支持function
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 具体要调用的function
                     */
                    ToolFunction m_function;
                    bool m_functionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOL_H_
