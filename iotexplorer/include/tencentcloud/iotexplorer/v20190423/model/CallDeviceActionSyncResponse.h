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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICEACTIONSYNCRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICEACTIONSYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CallDeviceActionSync返回参数结构体
                */
                class CallDeviceActionSyncResponse : public AbstractModel
                {
                public:
                    CallDeviceActionSyncResponse();
                    ~CallDeviceActionSyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取调用Id
                     * @return ClientToken 调用Id
                     */
                    std::string GetClientToken() const;

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputParams 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutputParams() const;

                    /**
                     * 判断参数 OutputParams 是否已赋值
                     * @return OutputParams 是否已赋值
                     */
                    bool OutputParamsHasBeenSet() const;

                    /**
                     * 获取返回状态
                     * @return Status 返回状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 调用Id
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputParams;
                    bool m_outputParamsHasBeenSet;

                    /**
                     * 返回状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICEACTIONSYNCRESPONSE_H_
