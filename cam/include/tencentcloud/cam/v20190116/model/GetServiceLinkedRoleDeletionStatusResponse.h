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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetServiceLinkedRoleDeletionStatus返回参数结构体
                */
                class GetServiceLinkedRoleDeletionStatusResponse : public AbstractModel
                {
                public:
                    GetServiceLinkedRoleDeletionStatusResponse();
                    ~GetServiceLinkedRoleDeletionStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态：NOT_STARTED，IN_PROGRESS，SUCCEEDED，FAILED
                     * @return Status 状态：NOT_STARTED，IN_PROGRESS，SUCCEEDED，FAILED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return Reason 失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 状态：NOT_STARTED，IN_PROGRESS，SUCCEEDED，FAILED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_H_
