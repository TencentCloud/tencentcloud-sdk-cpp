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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CREATEPSAREGULATIONRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CREATEPSAREGULATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * CreatePsaRegulation返回参数结构体
                */
                class CreatePsaRegulationResponse : public AbstractModel
                {
                public:
                    CreatePsaRegulationResponse();
                    ~CreatePsaRegulationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的预授权规则ID
                     * @return PsaId 创建的预授权规则ID
                     * 
                     */
                    std::string GetPsaId() const;

                    /**
                     * 判断参数 PsaId 是否已赋值
                     * @return PsaId 是否已赋值
                     * 
                     */
                    bool PsaIdHasBeenSet() const;

                private:

                    /**
                     * 创建的预授权规则ID
                     */
                    std::string m_psaId;
                    bool m_psaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CREATEPSAREGULATIONRESPONSE_H_
