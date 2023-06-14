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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVSingerInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVSingers返回参数结构体
                */
                class DescribeKTVSingersResponse : public AbstractModel
                {
                public:
                    DescribeKTVSingersResponse();
                    ~DescribeKTVSingersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总歌手数
                     * @return TotalCount 总歌手数
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
                     * 获取KTV歌手列表
                     * @return KTVSingerInfoSet KTV歌手列表
                     * 
                     */
                    std::vector<KTVSingerInfo> GetKTVSingerInfoSet() const;

                    /**
                     * 判断参数 KTVSingerInfoSet 是否已赋值
                     * @return KTVSingerInfoSet 是否已赋值
                     * 
                     */
                    bool KTVSingerInfoSetHasBeenSet() const;

                private:

                    /**
                     * 总歌手数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * KTV歌手列表
                     */
                    std::vector<KTVSingerInfo> m_kTVSingerInfoSet;
                    bool m_kTVSingerInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERSRESPONSE_H_
