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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/GlobalSceneInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBotSceneOverview返回参数结构体
                */
                class DescribeBotSceneOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBotSceneOverviewResponse();
                    ~DescribeBotSceneOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取BOT总开关
                     * @return Status BOT总开关
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取场景总数
                     * @return SceneCount 场景总数
                     * 
                     */
                    int64_t GetSceneCount() const;

                    /**
                     * 判断参数 SceneCount 是否已赋值
                     * @return SceneCount 是否已赋值
                     * 
                     */
                    bool SceneCountHasBeenSet() const;

                    /**
                     * 获取生效场景数
                     * @return ValidSceneCount 生效场景数
                     * 
                     */
                    int64_t GetValidSceneCount() const;

                    /**
                     * 判断参数 ValidSceneCount 是否已赋值
                     * @return ValidSceneCount 是否已赋值
                     * 
                     */
                    bool ValidSceneCountHasBeenSet() const;

                    /**
                     * 获取当前开启的、匹配范围为全局、优先级最高的场景
                     * @return CurrentGlobalScene 当前开启的、匹配范围为全局、优先级最高的场景
                     * 
                     */
                    GlobalSceneInfo GetCurrentGlobalScene() const;

                    /**
                     * 判断参数 CurrentGlobalScene 是否已赋值
                     * @return CurrentGlobalScene 是否已赋值
                     * 
                     */
                    bool CurrentGlobalSceneHasBeenSet() const;

                    /**
                     * 获取自定义规则总数，不包括BOT白名单
                     * @return CustomRuleNums 自定义规则总数，不包括BOT白名单
                     * 
                     */
                    int64_t GetCustomRuleNums() const;

                    /**
                     * 判断参数 CustomRuleNums 是否已赋值
                     * @return CustomRuleNums 是否已赋值
                     * 
                     */
                    bool CustomRuleNumsHasBeenSet() const;

                private:

                    /**
                     * BOT总开关
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 场景总数
                     */
                    int64_t m_sceneCount;
                    bool m_sceneCountHasBeenSet;

                    /**
                     * 生效场景数
                     */
                    int64_t m_validSceneCount;
                    bool m_validSceneCountHasBeenSet;

                    /**
                     * 当前开启的、匹配范围为全局、优先级最高的场景
                     */
                    GlobalSceneInfo m_currentGlobalScene;
                    bool m_currentGlobalSceneHasBeenSet;

                    /**
                     * 自定义规则总数，不包括BOT白名单
                     */
                    int64_t m_customRuleNums;
                    bool m_customRuleNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENEOVERVIEWRESPONSE_H_
