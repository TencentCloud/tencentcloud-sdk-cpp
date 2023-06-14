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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESPEEDTESTINGDETAILSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESPEEDTESTINGDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingDetailData.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSpeedTestingDetails返回参数结构体
                */
                class DescribeSpeedTestingDetailsResponse : public AbstractModel
                {
                public:
                    DescribeSpeedTestingDetailsResponse();
                    ~DescribeSpeedTestingDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分地域拨测统计数据。
                     * @return SpeedTestingDetailData 分地域拨测统计数据。
                     * 
                     */
                    SpeedTestingDetailData GetSpeedTestingDetailData() const;

                    /**
                     * 判断参数 SpeedTestingDetailData 是否已赋值
                     * @return SpeedTestingDetailData 是否已赋值
                     * 
                     */
                    bool SpeedTestingDetailDataHasBeenSet() const;

                private:

                    /**
                     * 分地域拨测统计数据。
                     */
                    SpeedTestingDetailData m_speedTestingDetailData;
                    bool m_speedTestingDetailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESPEEDTESTINGDETAILSRESPONSE_H_
