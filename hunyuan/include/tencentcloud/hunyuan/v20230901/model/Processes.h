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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_PROCESSES_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_PROCESSES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 大模型执行状态
                */
                class Processes : public AbstractModel
                {
                public:
                    Processes();
                    ~Processes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出信息
                     * @return Message 输出信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置输出信息
                     * @param _message 输出信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取plan:开始获取资料…
recall:找到 n 篇相关资料
quote:引用 n 篇资料作为参考

                     * @return State plan:开始获取资料…
recall:找到 n 篇相关资料
quote:引用 n 篇资料作为参考

                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置plan:开始获取资料…
recall:找到 n 篇相关资料
quote:引用 n 篇资料作为参考

                     * @param _state plan:开始获取资料…
recall:找到 n 篇相关资料
quote:引用 n 篇资料作为参考

                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取当状态是recall和quote，会给出来相关数量
                     * @return Num 当状态是recall和quote，会给出来相关数量
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置当状态是recall和quote，会给出来相关数量
                     * @param _num 当状态是recall和quote，会给出来相关数量
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * 输出信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * plan:开始获取资料…
recall:找到 n 篇相关资料
quote:引用 n 篇资料作为参考

                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 当状态是recall和quote，会给出来相关数量
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_PROCESSES_H_
