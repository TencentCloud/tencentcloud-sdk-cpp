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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCQUOTAREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeVpcQuota请求参数结构体
                */
                class DescribeVpcQuotaRequest : public AbstractModel
                {
                public:
                    DescribeVpcQuotaRequest();
                    ~DescribeVpcQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类型
                     * @return TypeIds 类型
                     * 
                     */
                    std::vector<uint64_t> GetTypeIds() const;

                    /**
                     * 设置类型
                     * @param _typeIds 类型
                     * 
                     */
                    void SetTypeIds(const std::vector<uint64_t>& _typeIds);

                    /**
                     * 判断参数 TypeIds 是否已赋值
                     * @return TypeIds 是否已赋值
                     * 
                     */
                    bool TypeIdsHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::vector<uint64_t> m_typeIds;
                    bool m_typeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCQUOTAREQUEST_H_
