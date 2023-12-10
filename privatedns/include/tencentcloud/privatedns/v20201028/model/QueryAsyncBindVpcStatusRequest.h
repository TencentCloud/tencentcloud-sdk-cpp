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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_QUERYASYNCBINDVPCSTATUSREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_QUERYASYNCBINDVPCSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * QueryAsyncBindVpcStatus请求参数结构体
                */
                class QueryAsyncBindVpcStatusRequest : public AbstractModel
                {
                public:
                    QueryAsyncBindVpcStatusRequest();
                    ~QueryAsyncBindVpcStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一ID
                     * @return UniqId 唯一ID
                     * 
                     */
                    std::string GetUniqId() const;

                    /**
                     * 设置唯一ID
                     * @param _uniqId 唯一ID
                     * 
                     */
                    void SetUniqId(const std::string& _uniqId);

                    /**
                     * 判断参数 UniqId 是否已赋值
                     * @return UniqId 是否已赋值
                     * 
                     */
                    bool UniqIdHasBeenSet() const;

                private:

                    /**
                     * 唯一ID
                     */
                    std::string m_uniqId;
                    bool m_uniqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_QUERYASYNCBINDVPCSTATUSREQUEST_H_
