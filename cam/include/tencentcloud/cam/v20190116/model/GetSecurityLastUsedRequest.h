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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETSECURITYLASTUSEDREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETSECURITYLASTUSEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetSecurityLastUsed请求参数结构体
                */
                class GetSecurityLastUsedRequest : public AbstractModel
                {
                public:
                    GetSecurityLastUsedRequest();
                    ~GetSecurityLastUsedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询密钥ID列表。最多支持10个。
                     * @return SecretIdList 查询密钥ID列表。最多支持10个。
                     */
                    std::vector<std::string> GetSecretIdList() const;

                    /**
                     * 设置查询密钥ID列表。最多支持10个。
                     * @param SecretIdList 查询密钥ID列表。最多支持10个。
                     */
                    void SetSecretIdList(const std::vector<std::string>& _secretIdList);

                    /**
                     * 判断参数 SecretIdList 是否已赋值
                     * @return SecretIdList 是否已赋值
                     */
                    bool SecretIdListHasBeenSet() const;

                private:

                    /**
                     * 查询密钥ID列表。最多支持10个。
                     */
                    std::vector<std::string> m_secretIdList;
                    bool m_secretIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETSECURITYLASTUSEDREQUEST_H_
