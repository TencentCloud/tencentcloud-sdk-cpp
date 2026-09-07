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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARCLONEFIGURELISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARCLONEFIGURELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveAvatarCloneFigureInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveAvatarCloneFigureList返回参数结构体
                */
                class DescribeLiveAvatarCloneFigureListResponse : public AbstractModel
                {
                public:
                    DescribeLiveAvatarCloneFigureListResponse();
                    ~DescribeLiveAvatarCloneFigureListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>克隆形象列表</p>
                     * @return CloneFigureList <p>克隆形象列表</p>
                     * 
                     */
                    std::vector<LiveAvatarCloneFigureInfo> GetCloneFigureList() const;

                    /**
                     * 判断参数 CloneFigureList 是否已赋值
                     * @return CloneFigureList 是否已赋值
                     * 
                     */
                    bool CloneFigureListHasBeenSet() const;

                    /**
                     * 获取<p>克隆形象总个数</p><p>单位：个</p>
                     * @return TotalCount <p>克隆形象总个数</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>克隆形象列表</p>
                     */
                    std::vector<LiveAvatarCloneFigureInfo> m_cloneFigureList;
                    bool m_cloneFigureListHasBeenSet;

                    /**
                     * <p>克隆形象总个数</p><p>单位：个</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARCLONEFIGURELISTRESPONSE_H_
