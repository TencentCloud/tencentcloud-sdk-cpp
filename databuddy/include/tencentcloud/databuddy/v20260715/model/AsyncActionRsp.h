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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASYNCACTIONRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASYNCACTIONRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RunActionBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 批量异步操作的逐项结果
                */
                class AsyncActionRsp : public AbstractModel
                {
                public:
                    AsyncActionRsp();
                    ~AsyncActionRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多个操作项的结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionResults 多个操作项的结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RunActionBrief> GetActionResults() const;

                    /**
                     * 设置多个操作项的结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actionResults 多个操作项的结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActionResults(const std::vector<RunActionBrief>& _actionResults);

                    /**
                     * 判断参数 ActionResults 是否已赋值
                     * @return ActionResults 是否已赋值
                     * 
                     */
                    bool ActionResultsHasBeenSet() const;

                private:

                    /**
                     * 多个操作项的结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RunActionBrief> m_actionResults;
                    bool m_actionResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ASYNCACTIONRSP_H_
