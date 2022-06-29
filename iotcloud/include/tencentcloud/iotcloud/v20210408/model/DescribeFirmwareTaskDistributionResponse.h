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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/StatusStatistic.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTaskDistribution返回参数结构体
                */
                class DescribeFirmwareTaskDistributionResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareTaskDistributionResponse();
                    ~DescribeFirmwareTaskDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取固件升级任务状态分布信息
                     * @return StatusInfos 固件升级任务状态分布信息
                     */
                    std::vector<StatusStatistic> GetStatusInfos() const;

                    /**
                     * 判断参数 StatusInfos 是否已赋值
                     * @return StatusInfos 是否已赋值
                     */
                    bool StatusInfosHasBeenSet() const;

                private:

                    /**
                     * 固件升级任务状态分布信息
                     */
                    std::vector<StatusStatistic> m_statusInfos;
                    bool m_statusInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDISTRIBUTIONRESPONSE_H_
