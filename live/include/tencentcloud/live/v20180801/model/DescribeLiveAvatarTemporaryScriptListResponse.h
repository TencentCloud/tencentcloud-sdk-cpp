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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARTEMPORARYSCRIPTLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARTEMPORARYSCRIPTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AvatarTemporaryScriptInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveAvatarTemporaryScriptList返回参数结构体
                */
                class DescribeLiveAvatarTemporaryScriptListResponse : public AbstractModel
                {
                public:
                    DescribeLiveAvatarTemporaryScriptListResponse();
                    ~DescribeLiveAvatarTemporaryScriptListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取临时话术列表。
                     * @return InfoList 临时话术列表。
                     * 
                     */
                    std::vector<AvatarTemporaryScriptInfo> GetInfoList() const;

                    /**
                     * 判断参数 InfoList 是否已赋值
                     * @return InfoList 是否已赋值
                     * 
                     */
                    bool InfoListHasBeenSet() const;

                private:

                    /**
                     * 临时话术列表。
                     */
                    std::vector<AvatarTemporaryScriptInfo> m_infoList;
                    bool m_infoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARTEMPORARYSCRIPTLISTRESPONSE_H_
