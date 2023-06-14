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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINTEGRATIONRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINTEGRATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateGrafanaIntegration返回参数结构体
                */
                class CreateGrafanaIntegrationResponse : public AbstractModel
                {
                public:
                    CreateGrafanaIntegrationResponse();
                    ~CreateGrafanaIntegrationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集成 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationId 集成 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 判断参数 IntegrationId 是否已赋值
                     * @return IntegrationId 是否已赋值
                     * 
                     */
                    bool IntegrationIdHasBeenSet() const;

                private:

                    /**
                     * 集成 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANAINTEGRATIONRESPONSE_H_
