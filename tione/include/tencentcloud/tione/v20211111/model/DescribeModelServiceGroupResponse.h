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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ServiceGroup.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelServiceGroup返回参数结构体
                */
                class DescribeModelServiceGroupResponse : public AbstractModel
                {
                public:
                    DescribeModelServiceGroupResponse();
                    ~DescribeModelServiceGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceGroup 服务组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceGroup GetServiceGroup() const;

                    /**
                     * 判断参数 ServiceGroup 是否已赋值
                     * @return ServiceGroup 是否已赋值
                     * 
                     */
                    bool ServiceGroupHasBeenSet() const;

                private:

                    /**
                     * 服务组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceGroup m_serviceGroup;
                    bool m_serviceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPRESPONSE_H_
