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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNCONFFORGATEWAYRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNCONFFORGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunForGatewayConf.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunConfForGateWay返回参数结构体
                */
                class DescribeCloudBaseRunConfForGateWayResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunConfForGateWayResponse();
                    ~DescribeCloudBaseRunConfForGateWayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取最近更新时间
                     * @return LastUpTime 最近更新时间
                     * 
                     */
                    std::string GetLastUpTime() const;

                    /**
                     * 判断参数 LastUpTime 是否已赋值
                     * @return LastUpTime 是否已赋值
                     * 
                     */
                    bool LastUpTimeHasBeenSet() const;

                    /**
                     * 获取配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudBaseRunForGatewayConf> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 最近更新时间
                     */
                    std::string m_lastUpTime;
                    bool m_lastUpTimeHasBeenSet;

                    /**
                     * 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseRunForGatewayConf> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNCONFFORGATEWAYRESPONSE_H_
