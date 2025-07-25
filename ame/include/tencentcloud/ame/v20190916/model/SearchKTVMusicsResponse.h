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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVMusicBaseInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
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
                     * 获取总记录数
                     * @return TotalCount 总记录数
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
                     * 获取KTV 曲目列表
                     * @return KTVMusicInfoSet KTV 曲目列表
                     * 
                     */
                    std::vector<KTVMusicBaseInfo> GetKTVMusicInfoSet() const;

                    /**
                     * 判断参数 KTVMusicInfoSet 是否已赋值
                     * @return KTVMusicInfoSet 是否已赋值
                     * 
                     */
                    bool KTVMusicInfoSetHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * KTV 曲目列表
                     */
                    std::vector<KTVMusicBaseInfo> m_kTVMusicInfoSet;
                    bool m_kTVMusicInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSRESPONSE_H_
