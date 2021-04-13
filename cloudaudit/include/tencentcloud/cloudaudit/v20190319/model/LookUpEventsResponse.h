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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Event.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * LookUpEvents返回参数结构体
                */
                class LookUpEventsResponse : public AbstractModel
                {
                public:
                    LookUpEventsResponse();
                    ~LookUpEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取查看更多日志的凭证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextToken 查看更多日志的凭证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取日志集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Events 日志集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Event> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取日志集合是否结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListOver 日志集合是否结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     */
                    bool ListOverHasBeenSet() const;

                private:

                    /**
                     * 查看更多日志的凭证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 日志集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Event> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 日志集合是否结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSRESPONSE_H_
