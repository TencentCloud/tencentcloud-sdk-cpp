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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAGENCYTDIDRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAGENCYTDIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Identity.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAgencyTDid返回参数结构体
                */
                class GetAgencyTDidResponse : public AbstractModel
                {
                public:
                    GetAgencyTDidResponse();
                    ~GetAgencyTDidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取固定前缀
                     * @return Prefix 固定前缀
                     */
                    std::string GetPrefix() const;

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取did详情
                     * @return Identity did详情
                     */
                    std::vector<Identity> GetIdentity() const;

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     */
                    bool IdentityHasBeenSet() const;

                private:

                    /**
                     * 固定前缀
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * did详情
                     */
                    std::vector<Identity> m_identity;
                    bool m_identityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAGENCYTDIDRESPONSE_H_
