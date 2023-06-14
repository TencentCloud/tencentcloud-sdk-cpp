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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEPKGOFFLINEMUSICRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEPKGOFFLINEMUSICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/OfflineMusicDetail.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribePkgOfflineMusic返回参数结构体
                */
                class DescribePkgOfflineMusicResponse : public AbstractModel
                {
                public:
                    DescribePkgOfflineMusicResponse();
                    ~DescribePkgOfflineMusicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取曲库包中不可用歌曲信息
                     * @return OfflineMusicSet 曲库包中不可用歌曲信息
                     * 
                     */
                    std::vector<OfflineMusicDetail> GetOfflineMusicSet() const;

                    /**
                     * 判断参数 OfflineMusicSet 是否已赋值
                     * @return OfflineMusicSet 是否已赋值
                     * 
                     */
                    bool OfflineMusicSetHasBeenSet() const;

                    /**
                     * 获取返回总量
                     * @return TotalCount 返回总量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 曲库包中不可用歌曲信息
                     */
                    std::vector<OfflineMusicDetail> m_offlineMusicSet;
                    bool m_offlineMusicSetHasBeenSet;

                    /**
                     * 返回总量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEPKGOFFLINEMUSICRESPONSE_H_
