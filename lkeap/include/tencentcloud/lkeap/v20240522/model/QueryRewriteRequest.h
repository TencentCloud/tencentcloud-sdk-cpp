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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITEREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Message.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * QueryRewrite请求参数结构体
                */
                class QueryRewriteRequest : public AbstractModel
                {
                public:
                    QueryRewriteRequest();
                    ~QueryRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取说明：需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入
备注：由于模型字符限制，最多提供4轮对话。针对最后一轮对话进行改写。四轮对话最多包含3600个字符。
                     * @return Messages 说明：需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入
备注：由于模型字符限制，最多提供4轮对话。针对最后一轮对话进行改写。四轮对话最多包含3600个字符。
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置说明：需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入
备注：由于模型字符限制，最多提供4轮对话。针对最后一轮对话进行改写。四轮对话最多包含3600个字符。
                     * @param _messages 说明：需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入
备注：由于模型字符限制，最多提供4轮对话。针对最后一轮对话进行改写。四轮对话最多包含3600个字符。
                     * 
                     */
                    void SetMessages(const std::vector<Message>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取说明：模型名称
备注：仅一个模型可选
默认值：lke-query-rewrite-base
                     * @return Model 说明：模型名称
备注：仅一个模型可选
默认值：lke-query-rewrite-base
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置说明：模型名称
备注：仅一个模型可选
默认值：lke-query-rewrite-base
                     * @param _model 说明：模型名称
备注：仅一个模型可选
默认值：lke-query-rewrite-base
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * 说明：需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入
备注：由于模型字符限制，最多提供4轮对话。针对最后一轮对话进行改写。四轮对话最多包含3600个字符。
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 说明：模型名称
备注：仅一个模型可选
默认值：lke-query-rewrite-base
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITEREQUEST_H_
