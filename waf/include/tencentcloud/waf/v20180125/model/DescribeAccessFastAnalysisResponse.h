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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSFASTANALYSISRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSFASTANALYSISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AccessFieldValueRatioInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAccessFastAnalysis返回参数结构体
                */
                class DescribeAccessFastAnalysisResponse : public AbstractModel
                {
                public:
                    DescribeAccessFastAnalysisResponse();
                    ~DescribeAccessFastAnalysisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取注意：此字段可能返回 null，表示取不到有效值
                     * @return FieldValueRatioInfos 注意：此字段可能返回 null，表示取不到有效值
                     * 
                     */
                    std::vector<AccessFieldValueRatioInfo> GetFieldValueRatioInfos() const;

                    /**
                     * 判断参数 FieldValueRatioInfos 是否已赋值
                     * @return FieldValueRatioInfos 是否已赋值
                     * 
                     */
                    bool FieldValueRatioInfosHasBeenSet() const;

                    /**
                     * 获取日志条数
                     * @return TotalCount 日志条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 注意：此字段可能返回 null，表示取不到有效值
                     */
                    std::vector<AccessFieldValueRatioInfo> m_fieldValueRatioInfos;
                    bool m_fieldValueRatioInfosHasBeenSet;

                    /**
                     * 日志条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEACCESSFASTANALYSISRESPONSE_H_
