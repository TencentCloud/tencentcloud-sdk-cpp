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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPMACHINEDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPMACHINEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MachineDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPMachineDetail返回参数结构体
                */
                class DescribeCWPMachineDetailResponse : public AbstractModel
                {
                public:
                    DescribeCWPMachineDetailResponse();
                    ~DescribeCWPMachineDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主机详情</p>
                     * @return MachineDetail <p>主机详情</p>
                     * 
                     */
                    MachineDetail GetMachineDetail() const;

                    /**
                     * 判断参数 MachineDetail 是否已赋值
                     * @return MachineDetail 是否已赋值
                     * 
                     */
                    bool MachineDetailHasBeenSet() const;

                private:

                    /**
                     * <p>主机详情</p>
                     */
                    MachineDetail m_machineDetail;
                    bool m_machineDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPMACHINEDETAILRESPONSE_H_
