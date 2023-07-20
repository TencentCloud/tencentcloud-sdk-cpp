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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINETASKDAGRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINETASKDAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaselineDto.h>
#include <tencentcloud/wedata/v20210820/model/BaselineTaskDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeBaselineTaskDagResponse
                */
                class DescribeBaselineTaskDagResponse : public AbstractModel
                {
                public:
                    DescribeBaselineTaskDagResponse();
                    ~DescribeBaselineTaskDagResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Baseline 基线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineDto GetBaseline() const;

                    /**
                     * 设置基线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseline 基线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseline(const BaselineDto& _baseline);

                    /**
                     * 判断参数 Baseline 是否已赋值
                     * @return Baseline 是否已赋值
                     * 
                     */
                    bool BaselineHasBeenSet() const;

                    /**
                     * 获取基线任务dag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineTaskDag 基线任务dag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaselineTaskDto> GetBaselineTaskDag() const;

                    /**
                     * 设置基线任务dag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineTaskDag 基线任务dag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineTaskDag(const std::vector<BaselineTaskDto>& _baselineTaskDag);

                    /**
                     * 判断参数 BaselineTaskDag 是否已赋值
                     * @return BaselineTaskDag 是否已赋值
                     * 
                     */
                    bool BaselineTaskDagHasBeenSet() const;

                private:

                    /**
                     * 基线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineDto m_baseline;
                    bool m_baselineHasBeenSet;

                    /**
                     * 基线任务dag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaselineTaskDto> m_baselineTaskDag;
                    bool m_baselineTaskDagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINETASKDAGRESPONSE_H_
