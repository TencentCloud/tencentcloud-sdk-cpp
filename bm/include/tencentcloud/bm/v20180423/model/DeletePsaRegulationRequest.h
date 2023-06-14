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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DELETEPSAREGULATIONREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DELETEPSAREGULATIONREQUEST_H_

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
                * DeletePsaRegulation请求参数结构体
                */
                class DeletePsaRegulationRequest : public AbstractModel
                {
                public:
                    DeletePsaRegulationRequest();
                    ~DeletePsaRegulationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预授权规则ID
                     * @return PsaId 预授权规则ID
                     * 
                     */
                    std::string GetPsaId() const;

                    /**
                     * 设置预授权规则ID
                     * @param _psaId 预授权规则ID
                     * 
                     */
                    void SetPsaId(const std::string& _psaId);

                    /**
                     * 判断参数 PsaId 是否已赋值
                     * @return PsaId 是否已赋值
                     * 
                     */
                    bool PsaIdHasBeenSet() const;

                private:

                    /**
                     * 预授权规则ID
                     */
                    std::string m_psaId;
                    bool m_psaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DELETEPSAREGULATIONREQUEST_H_
