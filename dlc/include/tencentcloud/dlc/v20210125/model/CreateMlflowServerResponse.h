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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMLFLOWSERVERRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMLFLOWSERVERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MlFlowServerInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateMlflowServer返回参数结构体
                */
                class CreateMlflowServerResponse : public AbstractModel
                {
                public:
                    CreateMlflowServerResponse();
                    ~CreateMlflowServerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MlFlow Server 业务信息</p>
                     * @return MlFlowServer <p>MlFlow Server 业务信息</p>
                     * 
                     */
                    MlFlowServerInfo GetMlFlowServer() const;

                    /**
                     * 判断参数 MlFlowServer 是否已赋值
                     * @return MlFlowServer 是否已赋值
                     * 
                     */
                    bool MlFlowServerHasBeenSet() const;

                private:

                    /**
                     * <p>MlFlow Server 业务信息</p>
                     */
                    MlFlowServerInfo m_mlFlowServer;
                    bool m_mlFlowServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMLFLOWSERVERRESPONSE_H_
