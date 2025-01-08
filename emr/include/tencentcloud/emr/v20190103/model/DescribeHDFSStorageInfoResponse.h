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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHDFSSTORAGEINFORESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHDFSSTORAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/StorageSummaryDistribution.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHDFSStorageInfo返回参数结构体
                */
                class DescribeHDFSStorageInfoResponse : public AbstractModel
                {
                public:
                    DescribeHDFSStorageInfoResponse();
                    ~DescribeHDFSStorageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取采样时间
                     * @return SampleTime 采样时间
                     * 
                     */
                    int64_t GetSampleTime() const;

                    /**
                     * 判断参数 SampleTime 是否已赋值
                     * @return SampleTime 是否已赋值
                     * 
                     */
                    bool SampleTimeHasBeenSet() const;

                    /**
                     * 获取hdfs存储详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSummaryDistribution hdfs存储详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StorageSummaryDistribution> GetStorageSummaryDistribution() const;

                    /**
                     * 判断参数 StorageSummaryDistribution 是否已赋值
                     * @return StorageSummaryDistribution 是否已赋值
                     * 
                     */
                    bool StorageSummaryDistributionHasBeenSet() const;

                private:

                    /**
                     * 采样时间
                     */
                    int64_t m_sampleTime;
                    bool m_sampleTimeHasBeenSet;

                    /**
                     * hdfs存储详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StorageSummaryDistribution> m_storageSummaryDistribution;
                    bool m_storageSummaryDistributionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHDFSSTORAGEINFORESPONSE_H_
