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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASSEMBLYUSAGEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASSEMBLYUSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AssemblyUsageDetail.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装用量查询响应
                */
                class AssemblyUsageInfo : public AbstractModel
                {
                public:
                    AssemblyUsageInfo();
                    ~AssemblyUsageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取频道线性组装用量明细
                     * @return AssemblyUsageDetails 频道线性组装用量明细
                     * 
                     */
                    std::vector<AssemblyUsageDetail> GetAssemblyUsageDetails() const;

                    /**
                     * 设置频道线性组装用量明细
                     * @param _assemblyUsageDetails 频道线性组装用量明细
                     * 
                     */
                    void SetAssemblyUsageDetails(const std::vector<AssemblyUsageDetail>& _assemblyUsageDetails);

                    /**
                     * 判断参数 AssemblyUsageDetails 是否已赋值
                     * @return AssemblyUsageDetails 是否已赋值
                     * 
                     */
                    bool AssemblyUsageDetailsHasBeenSet() const;

                    /**
                     * 获取Basic频道类型总时长
                     * @return SumBasicChannelDuration Basic频道类型总时长
                     * 
                     */
                    int64_t GetSumBasicChannelDuration() const;

                    /**
                     * 设置Basic频道类型总时长
                     * @param _sumBasicChannelDuration Basic频道类型总时长
                     * 
                     */
                    void SetSumBasicChannelDuration(const int64_t& _sumBasicChannelDuration);

                    /**
                     * 判断参数 SumBasicChannelDuration 是否已赋值
                     * @return SumBasicChannelDuration 是否已赋值
                     * 
                     */
                    bool SumBasicChannelDurationHasBeenSet() const;

                    /**
                     * 获取Standard频道类型总时长
                     * @return SumStandardChannelDuration Standard频道类型总时长
                     * 
                     */
                    int64_t GetSumStandardChannelDuration() const;

                    /**
                     * 设置Standard频道类型总时长
                     * @param _sumStandardChannelDuration Standard频道类型总时长
                     * 
                     */
                    void SetSumStandardChannelDuration(const int64_t& _sumStandardChannelDuration);

                    /**
                     * 判断参数 SumStandardChannelDuration 是否已赋值
                     * @return SumStandardChannelDuration 是否已赋值
                     * 
                     */
                    bool SumStandardChannelDurationHasBeenSet() const;

                private:

                    /**
                     * 频道线性组装用量明细
                     */
                    std::vector<AssemblyUsageDetail> m_assemblyUsageDetails;
                    bool m_assemblyUsageDetailsHasBeenSet;

                    /**
                     * Basic频道类型总时长
                     */
                    int64_t m_sumBasicChannelDuration;
                    bool m_sumBasicChannelDurationHasBeenSet;

                    /**
                     * Standard频道类型总时长
                     */
                    int64_t m_sumStandardChannelDuration;
                    bool m_sumStandardChannelDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASSEMBLYUSAGEINFO_H_
