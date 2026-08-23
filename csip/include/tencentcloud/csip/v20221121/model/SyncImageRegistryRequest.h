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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SYNCIMAGEREGISTRYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SYNCIMAGEREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SyncImageRegistry请求参数结构体
                */
                class SyncImageRegistryRequest : public AbstractModel
                {
                public:
                    SyncImageRegistryRequest();
                    ~SyncImageRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>是否同步全部仓库</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return All <p>是否同步全部仓库</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>是否同步全部仓库</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _all <p>是否同步全部仓库</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取<p>待同步的镜像仓库Id列表</p>
                     * @return RegistryIds <p>待同步的镜像仓库Id列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetRegistryIds() const;

                    /**
                     * 设置<p>待同步的镜像仓库Id列表</p>
                     * @param _registryIds <p>待同步的镜像仓库Id列表</p>
                     * 
                     */
                    void SetRegistryIds(const std::vector<uint64_t>& _registryIds);

                    /**
                     * 判断参数 RegistryIds 是否已赋值
                     * @return RegistryIds 是否已赋值
                     * 
                     */
                    bool RegistryIdsHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>是否同步全部仓库</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>待同步的镜像仓库Id列表</p>
                     */
                    std::vector<uint64_t> m_registryIds;
                    bool m_registryIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SYNCIMAGEREGISTRYREQUEST_H_
