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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBATCHIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBATCHIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteBatchIpAccessControl请求参数结构体
                */
                class DeleteBatchIpAccessControlRequest : public AbstractModel
                {
                public:
                    DeleteBatchIpAccessControlRequest();
                    ~DeleteBatchIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID列表，支持批量删除
                     * @return Ids 规则ID列表，支持批量删除
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置规则ID列表，支持批量删除
                     * @param _ids 规则ID列表，支持批量删除
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 规则ID列表，支持批量删除
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBATCHIPACCESSCONTROLREQUEST_H_
