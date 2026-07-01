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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTPERMANENTIGNOREREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTPERMANENTIGNOREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EdrAlertTargetForIgnore.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyEdrAlertPermanentIgnore请求参数结构体
                */
                class ModifyEdrAlertPermanentIgnoreRequest : public AbstractModel
                {
                public:
                    ModifyEdrAlertPermanentIgnoreRequest();
                    ~ModifyEdrAlertPermanentIgnoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警定位列表（支持跨账号），最多500条</p>
                     * @return Targets <p>告警定位列表（支持跨账号），最多500条</p>
                     * 
                     */
                    std::vector<EdrAlertTargetForIgnore> GetTargets() const;

                    /**
                     * 设置<p>告警定位列表（支持跨账号），最多500条</p>
                     * @param _targets <p>告警定位列表（支持跨账号），最多500条</p>
                     * 
                     */
                    void SetTargets(const std::vector<EdrAlertTargetForIgnore>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

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

                private:

                    /**
                     * <p>告警定位列表（支持跨账号），最多500条</p>
                     */
                    std::vector<EdrAlertTargetForIgnore> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTPERMANENTIGNOREREQUEST_H_
