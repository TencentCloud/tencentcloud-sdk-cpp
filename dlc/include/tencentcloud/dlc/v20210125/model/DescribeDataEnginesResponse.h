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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngines返回参数结构体
                */
                class DescribeDataEnginesResponse : public AbstractModel
                {
                public:
                    DescribeDataEnginesResponse();
                    ~DescribeDataEnginesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据引擎列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngines 数据引擎列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataEngineInfo> GetDataEngines() const;

                    /**
                     * 判断参数 DataEngines 是否已赋值
                     * @return DataEngines 是否已赋值
                     * 
                     */
                    bool DataEnginesHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
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
                     * 数据引擎列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataEngineInfo> m_dataEngines;
                    bool m_dataEnginesHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESRESPONSE_H_
