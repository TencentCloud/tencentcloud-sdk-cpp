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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/BatchDomainOperateErrors.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveDomainCertBindings返回参数结构体
                */
                class ModifyLiveDomainCertBindingsResponse : public AbstractModel
                {
                public:
                    ModifyLiveDomainCertBindingsResponse();
                    ~ModifyLiveDomainCertBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DomainNames 入参中，与证书不匹配的域名列表，将会跳过处理。
                     * @return MismatchedDomainNames DomainNames 入参中，与证书不匹配的域名列表，将会跳过处理。
                     * 
                     */
                    std::vector<std::string> GetMismatchedDomainNames() const;

                    /**
                     * 判断参数 MismatchedDomainNames 是否已赋值
                     * @return MismatchedDomainNames 是否已赋值
                     * 
                     */
                    bool MismatchedDomainNamesHasBeenSet() const;

                    /**
                     * 获取操作失败的域名及错误码，错误信息，包括MismatchedDomainNames中的域名。
                     * @return Errors 操作失败的域名及错误码，错误信息，包括MismatchedDomainNames中的域名。
                     * 
                     */
                    std::vector<BatchDomainOperateErrors> GetErrors() const;

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                private:

                    /**
                     * DomainNames 入参中，与证书不匹配的域名列表，将会跳过处理。
                     */
                    std::vector<std::string> m_mismatchedDomainNames;
                    bool m_mismatchedDomainNamesHasBeenSet;

                    /**
                     * 操作失败的域名及错误码，错误信息，包括MismatchedDomainNames中的域名。
                     */
                    std::vector<BatchDomainOperateErrors> m_errors;
                    bool m_errorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSRESPONSE_H_
