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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateAccessCert返回参数结构体
                */
                class CreateAccessCertResponse : public AbstractModel
                {
                public:
                    CreateAccessCertResponse();
                    ~CreateAccessCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取凭证唯一标识
                     * @return CertId 凭证唯一标识
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * 凭证唯一标识
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTRESPONSE_H_
