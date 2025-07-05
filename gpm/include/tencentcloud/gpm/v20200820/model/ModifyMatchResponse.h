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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYMATCHRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYMATCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchInfo.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * ModifyMatch返回参数结构体
                */
                class ModifyMatchResponse : public AbstractModel
                {
                public:
                    ModifyMatchResponse();
                    ~ModifyMatchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配信息
                     * @return MatchInfo 匹配信息
                     * 
                     */
                    MatchInfo GetMatchInfo() const;

                    /**
                     * 判断参数 MatchInfo 是否已赋值
                     * @return MatchInfo 是否已赋值
                     * 
                     */
                    bool MatchInfoHasBeenSet() const;

                private:

                    /**
                     * 匹配信息
                     */
                    MatchInfo m_matchInfo;
                    bool m_matchInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYMATCHRESPONSE_H_
