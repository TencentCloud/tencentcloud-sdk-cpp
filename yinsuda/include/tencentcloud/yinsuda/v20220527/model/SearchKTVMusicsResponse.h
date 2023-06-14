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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_SEARCHKTVMUSICSRESPONSE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_SEARCHKTVMUSICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVMusicBaseInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * SearchKTVMusics返回参数结构体
                */
                class SearchKTVMusicsResponse : public AbstractModel
                {
                public:
                    SearchKTVMusicsResponse();
                    ~SearchKTVMusicsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲信息列表。
                     * @return KTVMusicInfoSet 歌曲信息列表。
                     * 
                     */
                    std::vector<KTVMusicBaseInfo> GetKTVMusicInfoSet() const;

                    /**
                     * 判断参数 KTVMusicInfoSet 是否已赋值
                     * @return KTVMusicInfoSet 是否已赋值
                     * 
                     */
                    bool KTVMusicInfoSetHasBeenSet() const;

                    /**
                     * 获取滚动标记，用于设置下次请求的 ScrollToken 参数。
                     * @return ScrollToken 滚动标记，用于设置下次请求的 ScrollToken 参数。
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                private:

                    /**
                     * 歌曲信息列表。
                     */
                    std::vector<KTVMusicBaseInfo> m_kTVMusicInfoSet;
                    bool m_kTVMusicInfoSetHasBeenSet;

                    /**
                     * 滚动标记，用于设置下次请求的 ScrollToken 参数。
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_SEARCHKTVMUSICSRESPONSE_H_
