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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYVERSIONRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/DescribeGatewayVersion.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关服务版本信息返回数据
                */
                class DescribeGatewayVersionResponse : public AbstractModel
                {
                public:
                    DescribeGatewayVersionResponse();
                    ~DescribeGatewayVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Services 网关服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeGatewayVersion> GetServices() const;

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * 网关服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeGatewayVersion> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYVERSIONRESPONSE_H_
