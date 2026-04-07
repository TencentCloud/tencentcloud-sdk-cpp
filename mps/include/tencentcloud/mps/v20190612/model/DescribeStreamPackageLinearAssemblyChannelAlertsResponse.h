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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELALERTSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELALERTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ChannelAlertResp.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageLinearAssemblyChannelAlerts返回参数结构体
                */
                class DescribeStreamPackageLinearAssemblyChannelAlertsResponse : public AbstractModel
                {
                public:
                    DescribeStreamPackageLinearAssemblyChannelAlertsResponse();
                    ~DescribeStreamPackageLinearAssemblyChannelAlertsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取频道告警信息。
                     * @return Infos 频道告警信息。
                     * 
                     */
                    ChannelAlertResp GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 频道告警信息。
                     */
                    ChannelAlertResp m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELALERTSRESPONSE_H_
