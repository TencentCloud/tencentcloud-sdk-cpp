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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICESESSIONDETAILSRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICESESSIONDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/SessionDeviceDetail.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeDeviceSessionDetails返回参数结构体
                */
                class DescribeDeviceSessionDetailsResponse : public AbstractModel
                {
                public:
                    DescribeDeviceSessionDetailsResponse();
                    ~DescribeDeviceSessionDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按设备区分的会话详细数据
                     * @return Details 按设备区分的会话详细数据
                     * 
                     */
                    std::vector<SessionDeviceDetail> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 按设备区分的会话详细数据
                     */
                    std::vector<SessionDeviceDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICESESSIONDETAILSRESPONSE_H_
