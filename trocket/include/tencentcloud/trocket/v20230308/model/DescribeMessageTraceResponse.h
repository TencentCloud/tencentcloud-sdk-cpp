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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/MessageTraceItem.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMessageTrace返回参数结构体
                */
                class DescribeMessageTraceResponse : public AbstractModel
                {
                public:
                    DescribeMessageTraceResponse();
                    ~DescribeMessageTraceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主题名称</p>
                     * @return ShowTopicName <p>主题名称</p>
                     * 
                     */
                    std::string GetShowTopicName() const;

                    /**
                     * 判断参数 ShowTopicName 是否已赋值
                     * @return ShowTopicName 是否已赋值
                     * 
                     */
                    bool ShowTopicNameHasBeenSet() const;

                    /**
                     * 获取<p>轻量主题名称</p>
                     * @return LiteTopic <p>轻量主题名称</p>
                     * 
                     */
                    std::string GetLiteTopic() const;

                    /**
                     * 判断参数 LiteTopic 是否已赋值
                     * @return LiteTopic 是否已赋值
                     * 
                     */
                    bool LiteTopicHasBeenSet() const;

                    /**
                     * 获取<p>轨迹详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data <p>轨迹详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MessageTraceItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>主题名称</p>
                     */
                    std::string m_showTopicName;
                    bool m_showTopicNameHasBeenSet;

                    /**
                     * <p>轻量主题名称</p>
                     */
                    std::string m_liteTopic;
                    bool m_liteTopicHasBeenSet;

                    /**
                     * <p>轨迹详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MessageTraceItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACERESPONSE_H_
