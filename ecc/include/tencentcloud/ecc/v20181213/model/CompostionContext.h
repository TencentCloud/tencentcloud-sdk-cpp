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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_COMPOSTIONCONTEXT_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_COMPOSTIONCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/CorrectData.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 图像识别批改接口返回的作文文本信息或批改信息
                */
                class CompostionContext : public AbstractModel
                {
                public:
                    CompostionContext();
                    ~CompostionContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作文内容
                     * @return Content 作文内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置作文内容
                     * @param _content 作文内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorrectData 批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CorrectData GetCorrectData() const;

                    /**
                     * 设置批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _correctData 批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorrectData(const CorrectData& _correctData);

                    /**
                     * 判断参数 CorrectData 是否已赋值
                     * @return CorrectData 是否已赋值
                     * 
                     */
                    bool CorrectDataHasBeenSet() const;

                    /**
                     * 获取任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取图像识别唯一标识，一次识别一个 SessionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 图像识别唯一标识，一次识别一个 SessionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置图像识别唯一标识，一次识别一个 SessionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId 图像识别唯一标识，一次识别一个 SessionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 作文内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CorrectData m_correctData;
                    bool m_correctDataHasBeenSet;

                    /**
                     * 任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 图像识别唯一标识，一次识别一个 SessionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_COMPOSTIONCONTEXT_H_
