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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_REPLACECERTRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_REPLACECERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ReplaceCert返回参数结构体
                */
                class ReplaceCertResponse : public AbstractModel
                {
                public:
                    ReplaceCertResponse();
                    ~ReplaceCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新证书ID。
                     * @return NewCertId 新证书ID。
                     * 
                     */
                    std::string GetNewCertId() const;

                    /**
                     * 判断参数 NewCertId 是否已赋值
                     * @return NewCertId 是否已赋值
                     * 
                     */
                    bool NewCertIdHasBeenSet() const;

                    /**
                     * 获取旧证书ID。
                     * @return OldCertId 旧证书ID。
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 判断参数 OldCertId 是否已赋值
                     * @return OldCertId 是否已赋值
                     * 
                     */
                    bool OldCertIdHasBeenSet() const;

                private:

                    /**
                     * 新证书ID。
                     */
                    std::string m_newCertId;
                    bool m_newCertIdHasBeenSet;

                    /**
                     * 旧证书ID。
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_REPLACECERTRESPONSE_H_
