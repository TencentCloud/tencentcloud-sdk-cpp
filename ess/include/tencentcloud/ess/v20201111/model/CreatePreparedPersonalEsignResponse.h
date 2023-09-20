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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePreparedPersonalEsign返回参数结构体
                */
                class CreatePreparedPersonalEsignResponse : public AbstractModel
                {
                public:
                    CreatePreparedPersonalEsignResponse();
                    ~CreatePreparedPersonalEsignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导入生成的印章ID，为32位字符串。
建议开发者保存此印章ID，开头实名认证后，通过此 ID查询导入的印章。
                     * @return SealId 导入生成的印章ID，为32位字符串。
建议开发者保存此印章ID，开头实名认证后，通过此 ID查询导入的印章。
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                private:

                    /**
                     * 导入生成的印章ID，为32位字符串。
建议开发者保存此印章ID，开头实名认证后，通过此 ID查询导入的印章。
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNRESPONSE_H_
