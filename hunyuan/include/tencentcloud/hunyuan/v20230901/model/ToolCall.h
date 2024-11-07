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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOLCALL_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOLCALL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ToolCallFunction.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 模型生成的工具调用
                */
                class ToolCall : public AbstractModel
                {
                public:
                    ToolCall();
                    ~ToolCall() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具调用id
                     * @return Id 工具调用id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置工具调用id
                     * @param _id 工具调用id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取工具调用类型，当前只支持function
                     * @return Type 工具调用类型，当前只支持function
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置工具调用类型，当前只支持function
                     * @param _type 工具调用类型，当前只支持function
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
                     * 获取具体的function调用
                     * @return Function 具体的function调用
                     * 
                     */
                    ToolCallFunction GetFunction() const;

                    /**
                     * 设置具体的function调用
                     * @param _function 具体的function调用
                     * 
                     */
                    void SetFunction(const ToolCallFunction& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取索引值
                     * @return Index 索引值
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置索引值
                     * @param _index 索引值
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 工具调用id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 工具调用类型，当前只支持function
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 具体的function调用
                     */
                    ToolCallFunction m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 索引值
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TOOLCALL_H_
