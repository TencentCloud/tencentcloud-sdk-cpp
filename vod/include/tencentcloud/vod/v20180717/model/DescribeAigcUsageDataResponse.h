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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcUsageDataItem.h>
#include <tencentcloud/vod/v20180717/model/AigcTextDetail.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeAigcUsageData返回参数结构体
                */
                class DescribeAigcUsageDataResponse : public AbstractModel
                {
                public:
                    DescribeAigcUsageDataResponse();
                    ~DescribeAigcUsageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AIGC统计数据。</p>
                     * @return AigcUsageDataSet <p>AIGC统计数据。</p>
                     * 
                     */
                    std::vector<AigcUsageDataItem> GetAigcUsageDataSet() const;

                    /**
                     * 判断参数 AigcUsageDataSet 是否已赋值
                     * @return AigcUsageDataSet 是否已赋值
                     * 
                     */
                    bool AigcUsageDataSetHasBeenSet() const;

                    /**
                     * 获取<p>生文详细日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AigcTextDetails <p>生文详细日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AigcTextDetail GetAigcTextDetails() const;

                    /**
                     * 判断参数 AigcTextDetails 是否已赋值
                     * @return AigcTextDetails 是否已赋值
                     * 
                     */
                    bool AigcTextDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>AIGC统计数据。</p>
                     */
                    std::vector<AigcUsageDataItem> m_aigcUsageDataSet;
                    bool m_aigcUsageDataSetHasBeenSet;

                    /**
                     * <p>生文详细日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AigcTextDetail m_aigcTextDetails;
                    bool m_aigcTextDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATARESPONSE_H_
