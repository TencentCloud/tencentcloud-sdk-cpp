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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TERMINATECONTRACTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TERMINATECONTRACTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ResponseTerminateContract.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * TerminateContract返回参数结构体
                */
                class TerminateContractResponse : public AbstractModel
                {
                public:
                    TerminateContractResponse();
                    ~TerminateContractResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解约数据
                     * @return ContractTerminateData 解约数据
                     * 
                     */
                    ResponseTerminateContract GetContractTerminateData() const;

                    /**
                     * 判断参数 ContractTerminateData 是否已赋值
                     * @return ContractTerminateData 是否已赋值
                     * 
                     */
                    bool ContractTerminateDataHasBeenSet() const;

                    /**
                     * 获取请求处理信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 请求处理信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 解约数据
                     */
                    ResponseTerminateContract m_contractTerminateData;
                    bool m_contractTerminateDataHasBeenSet;

                    /**
                     * 请求处理信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TERMINATECONTRACTRESPONSE_H_
