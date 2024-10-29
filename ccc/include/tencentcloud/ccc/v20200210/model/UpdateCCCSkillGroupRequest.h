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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPDATECCCSKILLGROUPREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPDATECCCSKILLGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * UpdateCCCSkillGroup请求参数结构体
                */
                class UpdateCCCSkillGroupRequest : public AbstractModel
                {
                public:
                    UpdateCCCSkillGroupRequest();
                    ~UpdateCCCSkillGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取技能组ID
                     * @return SkillGroupID 技能组ID
                     * 
                     */
                    int64_t GetSkillGroupID() const;

                    /**
                     * 设置技能组ID
                     * @param _skillGroupID 技能组ID
                     * 
                     */
                    void SetSkillGroupID(const int64_t& _skillGroupID);

                    /**
                     * 判断参数 SkillGroupID 是否已赋值
                     * @return SkillGroupID 是否已赋值
                     * 
                     */
                    bool SkillGroupIDHasBeenSet() const;

                    /**
                     * 获取修改后的技能组名字
                     * @return SkillGroupName 修改后的技能组名字
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置修改后的技能组名字
                     * @param _skillGroupName 修改后的技能组名字
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取修改后的最大并发数,同振最大为2
                     * @return MaxConcurrency 修改后的最大并发数,同振最大为2
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置修改后的最大并发数,同振最大为2
                     * @param _maxConcurrency 修改后的最大并发数,同振最大为2
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取true同振，false顺振
                     * @return RingAll true同振，false顺振
                     * 
                     */
                    bool GetRingAll() const;

                    /**
                     * 设置true同振，false顺振
                     * @param _ringAll true同振，false顺振
                     * 
                     */
                    void SetRingAll(const bool& _ringAll);

                    /**
                     * 判断参数 RingAll 是否已赋值
                     * @return RingAll 是否已赋值
                     * 
                     */
                    bool RingAllHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 技能组ID
                     */
                    int64_t m_skillGroupID;
                    bool m_skillGroupIDHasBeenSet;

                    /**
                     * 修改后的技能组名字
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * 修改后的最大并发数,同振最大为2
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * true同振，false顺振
                     */
                    bool m_ringAll;
                    bool m_ringAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPDATECCCSKILLGROUPREQUEST_H_
