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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGETRACEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGETRACEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消息轨迹
                */
                class MessageTraceItem : public AbstractModel
                {
                public:
                    MessageTraceItem();
                    ~MessageTraceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stage 步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stage 步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取轨迹详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 轨迹详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置轨迹详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 轨迹详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 步骤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 轨迹详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGETRACEITEM_H_
