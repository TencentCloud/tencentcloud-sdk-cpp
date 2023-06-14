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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_TRIGGERJOBSAVEPOINTRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_TRIGGERJOBSAVEPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * TriggerJobSavepoint返回参数结构体
                */
                class TriggerJobSavepointResponse : public AbstractModel
                {
                public:
                    TriggerJobSavepointResponse();
                    ~TriggerJobSavepointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否成功
                     * @return SavepointTrigger 是否成功
                     * 
                     */
                    bool GetSavepointTrigger() const;

                    /**
                     * 判断参数 SavepointTrigger 是否已赋值
                     * @return SavepointTrigger 是否已赋值
                     * 
                     */
                    bool SavepointTriggerHasBeenSet() const;

                    /**
                     * 获取错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取快照路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalSavepointPath 快照路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinalSavepointPath() const;

                    /**
                     * 判断参数 FinalSavepointPath 是否已赋值
                     * @return FinalSavepointPath 是否已赋值
                     * 
                     */
                    bool FinalSavepointPathHasBeenSet() const;

                    /**
                     * 获取快照 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SavepointId 快照 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSavepointId() const;

                    /**
                     * 判断参数 SavepointId 是否已赋值
                     * @return SavepointId 是否已赋值
                     * 
                     */
                    bool SavepointIdHasBeenSet() const;

                private:

                    /**
                     * 是否成功
                     */
                    bool m_savepointTrigger;
                    bool m_savepointTriggerHasBeenSet;

                    /**
                     * 错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 快照路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalSavepointPath;
                    bool m_finalSavepointPathHasBeenSet;

                    /**
                     * 快照 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_savepointId;
                    bool m_savepointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_TRIGGERJOBSAVEPOINTRESPONSE_H_
