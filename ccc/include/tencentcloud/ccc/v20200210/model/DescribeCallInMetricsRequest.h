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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSREQUEST_H_

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
                * DescribeCallInMetrics请求参数结构体
                */
                class DescribeCallInMetricsRequest : public AbstractModel
                {
                public:
                    DescribeCallInMetricsRequest();
                    ~DescribeCallInMetricsRequest() = default;
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
                     * 获取是否返回技能组维度信息，默认“是”
                     * @return EnabledSkillGroup 是否返回技能组维度信息，默认“是”
                     * 
                     */
                    bool GetEnabledSkillGroup() const;

                    /**
                     * 设置是否返回技能组维度信息，默认“是”
                     * @param _enabledSkillGroup 是否返回技能组维度信息，默认“是”
                     * 
                     */
                    void SetEnabledSkillGroup(const bool& _enabledSkillGroup);

                    /**
                     * 判断参数 EnabledSkillGroup 是否已赋值
                     * @return EnabledSkillGroup 是否已赋值
                     * 
                     */
                    bool EnabledSkillGroupHasBeenSet() const;

                    /**
                     * 获取是否返回线路维度信息，默认“否”
                     * @return EnabledNumber 是否返回线路维度信息，默认“否”
                     * 
                     */
                    bool GetEnabledNumber() const;

                    /**
                     * 设置是否返回线路维度信息，默认“否”
                     * @param _enabledNumber 是否返回线路维度信息，默认“否”
                     * 
                     */
                    void SetEnabledNumber(const bool& _enabledNumber);

                    /**
                     * 判断参数 EnabledNumber 是否已赋值
                     * @return EnabledNumber 是否已赋值
                     * 
                     */
                    bool EnabledNumberHasBeenSet() const;

                    /**
                     * 获取筛选技能组列表
                     * @return GroupIdList 筛选技能组列表
                     * 
                     */
                    std::vector<int64_t> GetGroupIdList() const;

                    /**
                     * 设置筛选技能组列表
                     * @param _groupIdList 筛选技能组列表
                     * 
                     */
                    void SetGroupIdList(const std::vector<int64_t>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 是否返回技能组维度信息，默认“是”
                     */
                    bool m_enabledSkillGroup;
                    bool m_enabledSkillGroupHasBeenSet;

                    /**
                     * 是否返回线路维度信息，默认“否”
                     */
                    bool m_enabledNumber;
                    bool m_enabledNumberHasBeenSet;

                    /**
                     * 筛选技能组列表
                     */
                    std::vector<int64_t> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSREQUEST_H_
