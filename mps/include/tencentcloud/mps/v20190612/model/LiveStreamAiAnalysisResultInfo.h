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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiAnalysisResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播流分析结果
                */
                class LiveStreamAiAnalysisResultInfo : public AbstractModel
                {
                public:
                    LiveStreamAiAnalysisResultInfo();
                    ~LiveStreamAiAnalysisResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播分析子任务结果，暂时只支持直播拆条。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultSet 直播分析子任务结果，暂时只支持直播拆条。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LiveStreamAiAnalysisResultItem> GetResultSet() const;

                    /**
                     * 设置直播分析子任务结果，暂时只支持直播拆条。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultSet 直播分析子任务结果，暂时只支持直播拆条。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultSet(const std::vector<LiveStreamAiAnalysisResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                private:

                    /**
                     * 直播分析子任务结果，暂时只支持直播拆条。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LiveStreamAiAnalysisResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTINFO_H_
