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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSASSETSYNCTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSASSETSYNCTASKREQUEST_H_

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
                * CreateCosAssetSyncTask请求参数结构体
                */
                class CreateCosAssetSyncTaskRequest : public AbstractModel
                {
                public:
                    CreateCosAssetSyncTaskRequest();
                    ~CreateCosAssetSyncTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
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
                     * 获取1 同步所有 2 仅同步资产数
                     * @return SyncType 1 同步所有 2 仅同步资产数
                     * 
                     */
                    int64_t GetSyncType() const;

                    /**
                     * 设置1 同步所有 2 仅同步资产数
                     * @param _syncType 1 同步所有 2 仅同步资产数
                     * 
                     */
                    void SetSyncType(const int64_t& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 1 同步所有 2 仅同步资产数
                     */
                    int64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSASSETSYNCTASKREQUEST_H_
