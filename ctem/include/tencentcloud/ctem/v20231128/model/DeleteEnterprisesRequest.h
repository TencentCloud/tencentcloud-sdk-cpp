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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DELETEENTERPRISESREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DELETEENTERPRISESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DeleteEnterprises请求参数结构体
                */
                class DeleteEnterprisesRequest : public AbstractModel
                {
                public:
                    DeleteEnterprisesRequest();
                    ~DeleteEnterprisesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID列表
                     * @return Ids ID列表
                     * 
                     */
                    std::vector<int64_t> GetIds() const;

                    /**
                     * 设置ID列表
                     * @param _ids ID列表
                     * 
                     */
                    void SetIds(const std::vector<int64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * ID列表
                     */
                    std::vector<int64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DELETEENTERPRISESREQUEST_H_
