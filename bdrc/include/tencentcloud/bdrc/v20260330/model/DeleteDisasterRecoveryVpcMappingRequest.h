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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDISASTERRECOVERYVPCMAPPINGREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDISASTERRECOVERYVPCMAPPINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DeleteDisasterRecoveryVpcMapping请求参数结构体
                */
                class DeleteDisasterRecoveryVpcMappingRequest : public AbstractModel
                {
                public:
                    DeleteDisasterRecoveryVpcMappingRequest();
                    ~DeleteDisasterRecoveryVpcMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除容灾vpc映射主键id列表
                     * @return VpcMappingIds 删除容灾vpc映射主键id列表
                     * 
                     */
                    std::vector<uint64_t> GetVpcMappingIds() const;

                    /**
                     * 设置删除容灾vpc映射主键id列表
                     * @param _vpcMappingIds 删除容灾vpc映射主键id列表
                     * 
                     */
                    void SetVpcMappingIds(const std::vector<uint64_t>& _vpcMappingIds);

                    /**
                     * 判断参数 VpcMappingIds 是否已赋值
                     * @return VpcMappingIds 是否已赋值
                     * 
                     */
                    bool VpcMappingIdsHasBeenSet() const;

                private:

                    /**
                     * 删除容灾vpc映射主键id列表
                     */
                    std::vector<uint64_t> m_vpcMappingIds;
                    bool m_vpcMappingIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDISASTERRECOVERYVPCMAPPINGREQUEST_H_
