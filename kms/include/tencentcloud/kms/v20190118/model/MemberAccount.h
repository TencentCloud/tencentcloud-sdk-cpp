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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_MEMBERACCOUNT_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_MEMBERACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * 共享成员账号信息
                */
                class MemberAccount : public AbstractModel
                {
                public:
                    MemberAccount();
                    ~MemberAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员账号appid

                     * @return MemberAppId 成员账号appid

                     * 
                     */
                    uint64_t GetMemberAppId() const;

                    /**
                     * 设置成员账号appid

                     * @param _memberAppId 成员账号appid

                     * 
                     */
                    void SetMemberAppId(const uint64_t& _memberAppId);

                    /**
                     * 判断参数 MemberAppId 是否已赋值
                     * @return MemberAppId 是否已赋值
                     * 
                     */
                    bool MemberAppIdHasBeenSet() const;

                    /**
                     * 获取成员账号uin
                     * @return MemberUin 成员账号uin
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置成员账号uin
                     * @param _memberUin 成员账号uin
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * 成员账号appid

                     */
                    uint64_t m_memberAppId;
                    bool m_memberAppIdHasBeenSet;

                    /**
                     * 成员账号uin
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_MEMBERACCOUNT_H_
