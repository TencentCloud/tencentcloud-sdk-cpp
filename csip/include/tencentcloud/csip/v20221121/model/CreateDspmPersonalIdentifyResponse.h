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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMPERSONALIDENTIFYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMPERSONALIDENTIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmPersonalIdentify返回参数结构体
                */
                class CreateDspmPersonalIdentifyResponse : public AbstractModel
                {
                public:
                    CreateDspmPersonalIdentifyResponse();
                    ~CreateDspmPersonalIdentifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取个人id
                     * @return PersonId 个人id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取身份id
                     * @return IdentifyId 身份id
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                private:

                    /**
                     * 个人id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 身份id
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMPERSONALIDENTIFYRESPONSE_H_
