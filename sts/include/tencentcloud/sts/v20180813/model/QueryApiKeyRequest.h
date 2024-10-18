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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_QUERYAPIKEYREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_QUERYAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * QueryApiKey请求参数结构体
                */
                class QueryApiKeyRequest : public AbstractModel
                {
                public:
                    QueryApiKeyRequest();
                    ~QueryApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询的账号uin(不填默认查当前账号uin)
                     * @return TargetUin 待查询的账号uin(不填默认查当前账号uin)
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置待查询的账号uin(不填默认查当前账号uin)
                     * @param _targetUin 待查询的账号uin(不填默认查当前账号uin)
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * 待查询的账号uin(不填默认查当前账号uin)
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_QUERYAPIKEYREQUEST_H_
