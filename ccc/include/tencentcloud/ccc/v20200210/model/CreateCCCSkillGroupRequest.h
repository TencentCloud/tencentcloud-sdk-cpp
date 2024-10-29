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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATECCCSKILLGROUPREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATECCCSKILLGROUPREQUEST_H_

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
                * CreateCCCSkillGroup请求参数结构体
                */
                class CreateCCCSkillGroupRequest : public AbstractModel
                {
                public:
                    CreateCCCSkillGroupRequest();
                    ~CreateCCCSkillGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroupName 技能组名称
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置技能组名称
                     * @param _skillGroupName 技能组名称
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
                     * 获取技能组类型0-电话，1-在线，3-音频，4-视频
                     * @return SkillGroupType 技能组类型0-电话，1-在线，3-音频，4-视频
                     * 
                     */
                    int64_t GetSkillGroupType() const;

                    /**
                     * 设置技能组类型0-电话，1-在线，3-音频，4-视频
                     * @param _skillGroupType 技能组类型0-电话，1-在线，3-音频，4-视频
                     * 
                     */
                    void SetSkillGroupType(const int64_t& _skillGroupType);

                    /**
                     * 判断参数 SkillGroupType 是否已赋值
                     * @return SkillGroupType 是否已赋值
                     * 
                     */
                    bool SkillGroupTypeHasBeenSet() const;

                    /**
                     * 获取技能组接待人数上限（该技能组中1个座席可接待的人数上限）默认为1。1、若技能组类型为在线，则接待上限可设置为1及以上
2、若技能组类型为电话、音频、视频，则接待上线必须只能为1
                     * @return MaxConcurrency 技能组接待人数上限（该技能组中1个座席可接待的人数上限）默认为1。1、若技能组类型为在线，则接待上限可设置为1及以上
2、若技能组类型为电话、音频、视频，则接待上线必须只能为1
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 设置技能组接待人数上限（该技能组中1个座席可接待的人数上限）默认为1。1、若技能组类型为在线，则接待上限可设置为1及以上
2、若技能组类型为电话、音频、视频，则接待上线必须只能为1
                     * @param _maxConcurrency 技能组接待人数上限（该技能组中1个座席可接待的人数上限）默认为1。1、若技能组类型为在线，则接待上限可设置为1及以上
2、若技能组类型为电话、音频、视频，则接待上线必须只能为1
                     * 
                     */
                    void SetMaxConcurrency(const uint64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 技能组名称
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * 技能组类型0-电话，1-在线，3-音频，4-视频
                     */
                    int64_t m_skillGroupType;
                    bool m_skillGroupTypeHasBeenSet;

                    /**
                     * 技能组接待人数上限（该技能组中1个座席可接待的人数上限）默认为1。1、若技能组类型为在线，则接待上限可设置为1及以上
2、若技能组类型为电话、音频、视频，则接待上线必须只能为1
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATECCCSKILLGROUPREQUEST_H_
