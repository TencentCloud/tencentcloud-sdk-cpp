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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERCSPMREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERCSPMREQUEST_H_

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
                * ModifyShareUserCSPM请求参数结构体
                */
                class ModifyShareUserCSPMRequest : public AbstractModel
                {
                public:
                    ModifyShareUserCSPMRequest();
                    ~ModifyShareUserCSPMRequest() = default;
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
                     * 获取增加共享账号
                     * @return SharedAppIDList 增加共享账号
                     * 
                     */
                    std::vector<int64_t> GetSharedAppIDList() const;

                    /**
                     * 设置增加共享账号
                     * @param _sharedAppIDList 增加共享账号
                     * 
                     */
                    void SetSharedAppIDList(const std::vector<int64_t>& _sharedAppIDList);

                    /**
                     * 判断参数 SharedAppIDList 是否已赋值
                     * @return SharedAppIDList 是否已赋值
                     * 
                     */
                    bool SharedAppIDListHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 增加共享账号
                     */
                    std::vector<int64_t> m_sharedAppIDList;
                    bool m_sharedAppIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERCSPMREQUEST_H_
