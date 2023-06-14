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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/KeyValue.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBasicDeviceStatus返回参数结构体
                */
                class DescribeBasicDeviceStatusResponse : public AbstractModel
                {
                public:
                    DescribeBasicDeviceStatusResponse();
                    ~DescribeBasicDeviceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回资源及状态，状态码：
1 - 封堵状态
2 - 正常状态
3 - 攻击状态
                     * @return Data 返回资源及状态，状态码：
1 - 封堵状态
2 - 正常状态
3 - 攻击状态
                     * 
                     */
                    std::vector<KeyValue> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取域名化资产的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLBData 域名化资产的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValue> GetCLBData() const;

                    /**
                     * 判断参数 CLBData 是否已赋值
                     * @return CLBData 是否已赋值
                     * 
                     */
                    bool CLBDataHasBeenSet() const;

                private:

                    /**
                     * 返回资源及状态，状态码：
1 - 封堵状态
2 - 正常状态
3 - 攻击状态
                     */
                    std::vector<KeyValue> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 域名化资产的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValue> m_cLBData;
                    bool m_cLBDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSRESPONSE_H_
