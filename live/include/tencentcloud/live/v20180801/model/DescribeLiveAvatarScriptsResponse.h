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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARSCRIPTSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARSCRIPTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AvatarScriptInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveAvatarScripts返回参数结构体
                */
                class DescribeLiveAvatarScriptsResponse : public AbstractModel
                {
                public:
                    DescribeLiveAvatarScriptsResponse();
                    ~DescribeLiveAvatarScriptsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数字人直播间话术信息列表。</p>
                     * @return InfoList <p>数字人直播间话术信息列表。</p>
                     * 
                     */
                    std::vector<AvatarScriptInfo> GetInfoList() const;

                    /**
                     * 判断参数 InfoList 是否已赋值
                     * @return InfoList 是否已赋值
                     * 
                     */
                    bool InfoListHasBeenSet() const;

                    /**
                     * 获取<p>限制可创建的数字人直播间话术总条数。</p>
                     * @return LimitCreateNum <p>限制可创建的数字人直播间话术总条数。</p>
                     * 
                     */
                    int64_t GetLimitCreateNum() const;

                    /**
                     * 判断参数 LimitCreateNum 是否已赋值
                     * @return LimitCreateNum 是否已赋值
                     * 
                     */
                    bool LimitCreateNumHasBeenSet() const;

                    /**
                     * 获取<p>当前数字人直播间话术总条数。</p>
                     * @return TotalNum <p>当前数字人直播间话术总条数。</p>
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * <p>数字人直播间话术信息列表。</p>
                     */
                    std::vector<AvatarScriptInfo> m_infoList;
                    bool m_infoListHasBeenSet;

                    /**
                     * <p>限制可创建的数字人直播间话术总条数。</p>
                     */
                    int64_t m_limitCreateNum;
                    bool m_limitCreateNumHasBeenSet;

                    /**
                     * <p>当前数字人直播间话术总条数。</p>
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARSCRIPTSRESPONSE_H_
