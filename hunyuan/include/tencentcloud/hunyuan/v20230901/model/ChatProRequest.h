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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATPROREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATPROREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Message.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * ChatPro请求参数结构体
                */
                class ChatProRequest : public AbstractModel
                {
                public:
                    ChatProRequest();
                    ~ChatProRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聊天上下文信息。
说明：
1.长度最多为40, 按对话时间从旧到新在数组中排列。
2.Message的Role当前可选值：user、assistant，其中，user和assistant需要交替出现(一问一答)，最后一个为user提问, 且Content不能为空。
3.Messages中Content总长度不超过16000token，超过则会截断最前面的内容，只保留尾部内容。建议不超过4000token。
                     * @return Messages 聊天上下文信息。
说明：
1.长度最多为40, 按对话时间从旧到新在数组中排列。
2.Message的Role当前可选值：user、assistant，其中，user和assistant需要交替出现(一问一答)，最后一个为user提问, 且Content不能为空。
3.Messages中Content总长度不超过16000token，超过则会截断最前面的内容，只保留尾部内容。建议不超过4000token。
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置聊天上下文信息。
说明：
1.长度最多为40, 按对话时间从旧到新在数组中排列。
2.Message的Role当前可选值：user、assistant，其中，user和assistant需要交替出现(一问一答)，最后一个为user提问, 且Content不能为空。
3.Messages中Content总长度不超过16000token，超过则会截断最前面的内容，只保留尾部内容。建议不超过4000token。
                     * @param _messages 聊天上下文信息。
说明：
1.长度最多为40, 按对话时间从旧到新在数组中排列。
2.Message的Role当前可选值：user、assistant，其中，user和assistant需要交替出现(一问一答)，最后一个为user提问, 且Content不能为空。
3.Messages中Content总长度不超过16000token，超过则会截断最前面的内容，只保留尾部内容。建议不超过4000token。
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
                     * 获取说明：
1.影响输出文本的多样性，取值越大，生成文本的多样性越强。
2.默认1.0，取值区间为[0.0, 1.0]。
3.非必要不建议使用, 不合理的取值会影响效果。
                     * @return TopP 说明：
1.影响输出文本的多样性，取值越大，生成文本的多样性越强。
2.默认1.0，取值区间为[0.0, 1.0]。
3.非必要不建议使用, 不合理的取值会影响效果。
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置说明：
1.影响输出文本的多样性，取值越大，生成文本的多样性越强。
2.默认1.0，取值区间为[0.0, 1.0]。
3.非必要不建议使用, 不合理的取值会影响效果。
                     * @param _topP 说明：
1.影响输出文本的多样性，取值越大，生成文本的多样性越强。
2.默认1.0，取值区间为[0.0, 1.0]。
3.非必要不建议使用, 不合理的取值会影响效果。
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取说明：
1.较高的数值会使输出更加随机，而较低的数值会使其更加集中和确定。
2.默认1.0，取值区间为[0.0，2.0]。
3.非必要不建议使用,不合理的取值会影响效果。
                     * @return Temperature 说明：
1.较高的数值会使输出更加随机，而较低的数值会使其更加集中和确定。
2.默认1.0，取值区间为[0.0，2.0]。
3.非必要不建议使用,不合理的取值会影响效果。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置说明：
1.较高的数值会使输出更加随机，而较低的数值会使其更加集中和确定。
2.默认1.0，取值区间为[0.0，2.0]。
3.非必要不建议使用,不合理的取值会影响效果。
                     * @param _temperature 说明：
1.较高的数值会使输出更加随机，而较低的数值会使其更加集中和确定。
2.默认1.0，取值区间为[0.0，2.0]。
3.非必要不建议使用,不合理的取值会影响效果。
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                private:

                    /**
                     * 聊天上下文信息。
说明：
1.长度最多为40, 按对话时间从旧到新在数组中排列。
2.Message的Role当前可选值：user、assistant，其中，user和assistant需要交替出现(一问一答)，最后一个为user提问, 且Content不能为空。
3.Messages中Content总长度不超过16000token，超过则会截断最前面的内容，只保留尾部内容。建议不超过4000token。
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 说明：
1.影响输出文本的多样性，取值越大，生成文本的多样性越强。
2.默认1.0，取值区间为[0.0, 1.0]。
3.非必要不建议使用, 不合理的取值会影响效果。
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 说明：
1.较高的数值会使输出更加随机，而较低的数值会使其更加集中和确定。
2.默认1.0，取值区间为[0.0，2.0]。
3.非必要不建议使用,不合理的取值会影响效果。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATPROREQUEST_H_
