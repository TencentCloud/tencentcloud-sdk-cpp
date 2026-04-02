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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOOLCALL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOOLCALL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ToolCallFunction.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
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
                     * 获取<p>工具调用id</p>
                     * @return Id <p>工具调用id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>工具调用id</p>
                     * @param _id <p>工具调用id</p>
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
                     * 获取<p>工具调用类型，当前只支持function</p>
                     * @return Type <p>工具调用类型，当前只支持function</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>工具调用类型，当前只支持function</p>
                     * @param _type <p>工具调用类型，当前只支持function</p>
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
                     * 获取<p>具体的function调用</p>
                     * @return Function <p>具体的function调用</p>
                     * 
                     */
                    ToolCallFunction GetFunction() const;

                    /**
                     * 设置<p>具体的function调用</p>
                     * @param _function <p>具体的function调用</p>
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
                     * 获取<p>索引值</p>
                     * @return Index <p>索引值</p>
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置<p>索引值</p>
                     * @param _index <p>索引值</p>
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * <p>工具调用id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>工具调用类型，当前只支持function</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>具体的function调用</p>
                     */
                    ToolCallFunction m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>索引值</p>
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOOLCALL_H_
