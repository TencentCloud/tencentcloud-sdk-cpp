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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPVAULTSDENIEDACTIONSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPVAULTSDENIEDACTIONSREQUEST_H_

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
                * DescribeBackupVaultsDeniedActions请求参数结构体
                */
                class DescribeBackupVaultsDeniedActionsRequest : public AbstractModel
                {
                public:
                    DescribeBackupVaultsDeniedActionsRequest();
                    ~DescribeBackupVaultsDeniedActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份库ID列表
                     * @return VaultIds 备份库ID列表
                     * 
                     */
                    std::vector<std::string> GetVaultIds() const;

                    /**
                     * 设置备份库ID列表
                     * @param _vaultIds 备份库ID列表
                     * 
                     */
                    void SetVaultIds(const std::vector<std::string>& _vaultIds);

                    /**
                     * 判断参数 VaultIds 是否已赋值
                     * @return VaultIds 是否已赋值
                     * 
                     */
                    bool VaultIdsHasBeenSet() const;

                private:

                    /**
                     * 备份库ID列表
                     */
                    std::vector<std::string> m_vaultIds;
                    bool m_vaultIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPVAULTSDENIEDACTIONSREQUEST_H_
