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

#ifndef TENCENTCLOUD_TBP_V20190627_MODEL_RESPONSEMESSAGE_H_
#define TENCENTCLOUD_TBP_V20190627_MODEL_RESPONSEMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbp/v20190627/model/Group.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190627
        {
            namespace Model
            {
                /**
                * 从TBP-RTS服务v1.3版本起，机器人以消息组列表的形式响应，消息组列表GroupList包含多组消息，用户根据需要对部分或全部消息组进行组合使用。
                */
                class ResponseMessage : public AbstractModel
                {
                public:
                    ResponseMessage();
                    ~ResponseMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupList 消息组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Group> GetGroupList() const;

                    /**
                     * 设置消息组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupList 消息组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupList(const std::vector<Group>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     * 
                     */
                    bool GroupListHasBeenSet() const;

                private:

                    /**
                     * 消息组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Group> m_groupList;
                    bool m_groupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190627_MODEL_RESPONSEMESSAGE_H_
