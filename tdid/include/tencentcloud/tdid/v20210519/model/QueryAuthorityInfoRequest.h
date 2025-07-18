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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_QUERYAUTHORITYINFOREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_QUERYAUTHORITYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * QueryAuthorityInfo请求参数结构体
                */
                class QueryAuthorityInfoRequest : public AbstractModel
                {
                public:
                    QueryAuthorityInfoRequest();
                    ~QueryAuthorityInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID标识
                     * @return Did DID标识
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置DID标识
                     * @param _did DID标识
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取DID应用id
                     * @return DAPId DID应用id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用id
                     * @param _dAPId DID应用id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取权威机构名称
                     * @return Name 权威机构名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置权威机构名称
                     * @param _name 权威机构名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * DID标识
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 权威机构名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_QUERYAUTHORITYINFOREQUEST_H_
