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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_OPERATERESPONSEDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_OPERATERESPONSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 操作类型返回的Data结构
                */
                class OperateResponseData : public AbstractModel
                {
                public:
                    OperateResponseData();
                    ~OperateResponseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取FlowId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId FlowId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置FlowId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowId FlowId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * FlowId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_OPERATERESPONSEDATA_H_
