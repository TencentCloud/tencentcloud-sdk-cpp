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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBELABELVALUESRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBELABELVALUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeLabelValues返回参数结构体
                */
                class DescribeLabelValuesResponse : public AbstractModel
                {
                public:
                    DescribeLabelValuesResponse();
                    ~DescribeLabelValuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取标签值数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValueSet 标签值数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelValueSet() const;

                    /**
                     * 判断参数 LabelValueSet 是否已赋值
                     * @return LabelValueSet 是否已赋值
                     * 
                     */
                    bool LabelValueSetHasBeenSet() const;

                private:

                    /**
                     * 标签值数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelValueSet;
                    bool m_labelValueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBELABELVALUESRESPONSE_H_
