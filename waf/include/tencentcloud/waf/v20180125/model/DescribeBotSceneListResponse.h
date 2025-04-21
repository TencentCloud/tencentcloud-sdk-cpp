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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENELISTRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BotSceneInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBotSceneList返回参数结构体
                */
                class DescribeBotSceneListResponse : public AbstractModel
                {
                public:
                    DescribeBotSceneListResponse();
                    ~DescribeBotSceneListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合筛选条件的场景数目
                     * @return TotalCount 符合筛选条件的场景数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取当TotalCount为0时，返回空
                     * @return BotSceneList 当TotalCount为0时，返回空
                     * 
                     */
                    std::vector<BotSceneInfo> GetBotSceneList() const;

                    /**
                     * 判断参数 BotSceneList 是否已赋值
                     * @return BotSceneList 是否已赋值
                     * 
                     */
                    bool BotSceneListHasBeenSet() const;

                    /**
                     * 获取true-简易模式
                     * @return SimpleFlag true-简易模式
                     * 
                     */
                    bool GetSimpleFlag() const;

                    /**
                     * 判断参数 SimpleFlag 是否已赋值
                     * @return SimpleFlag 是否已赋值
                     * 
                     */
                    bool SimpleFlagHasBeenSet() const;

                private:

                    /**
                     * 符合筛选条件的场景数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当TotalCount为0时，返回空
                     */
                    std::vector<BotSceneInfo> m_botSceneList;
                    bool m_botSceneListHasBeenSet;

                    /**
                     * true-简易模式
                     */
                    bool m_simpleFlag;
                    bool m_simpleFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENELISTRESPONSE_H_
