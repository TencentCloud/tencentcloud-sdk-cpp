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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEVAULTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEVAULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DeleteVaults请求参数结构体
                */
                class DeleteVaultsRequest : public AbstractModel
                {
                public:
                    DeleteVaultsRequest();
                    ~DeleteVaultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的备份保险箱ID列表，不能为空，保险箱内必须已清空所有文件
                     * @return VaultIds 待删除的备份保险箱ID列表，不能为空，保险箱内必须已清空所有文件
                     * 
                     */
                    std::vector<std::string> GetVaultIds() const;

                    /**
                     * 设置待删除的备份保险箱ID列表，不能为空，保险箱内必须已清空所有文件
                     * @param _vaultIds 待删除的备份保险箱ID列表，不能为空，保险箱内必须已清空所有文件
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
                     * 待删除的备份保险箱ID列表，不能为空，保险箱内必须已清空所有文件
                     */
                    std::vector<std::string> m_vaultIds;
                    bool m_vaultIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEVAULTSREQUEST_H_
