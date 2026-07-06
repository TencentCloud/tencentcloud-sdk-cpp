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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDisasterRecoverGroup返回参数结构体
                */
                class CreateDisasterRecoverGroupResponse : public AbstractModel
                {
                public:
                    CreateDisasterRecoverGroupResponse();
                    ~CreateDisasterRecoverGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分散置放群组ID列表。</p>
                     * @return DisasterRecoverGroupId <p>分散置放群组ID列表。</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     * @return Type <p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * @return Name <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内可容纳的云服务器数量。</p>
                     * @return CvmQuotaTotal <p>置放群组内可容纳的云服务器数量。</p>
                     * 
                     */
                    int64_t GetCvmQuotaTotal() const;

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     * 
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内已有的云服务器数量。</p>
                     * @return CurrentNum <p>置放群组内已有的云服务器数量。</p>
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     * @return CreateTime <p>分散置放群组创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，默认是分散置放群组。</p>
                     * @return Strategy <p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，默认是分散置放群组。</p>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时，才有该值(分区置放群组功能灰度中)。</p>
                     * @return PartitionCount <p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时，才有该值(分区置放群组功能灰度中)。</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                private:

                    /**
                     * <p>分散置放群组ID列表。</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>置放群组内可容纳的云服务器数量。</p>
                     */
                    int64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * <p>置放群组内已有的云服务器数量。</p>
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * <p>分散置放群组创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(功能灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，默认是分散置放群组。</p>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时，才有该值(分区置放群组功能灰度中)。</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPRESPONSE_H_
