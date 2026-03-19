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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARTIMBRELISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARTIMBRELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveAvatarTimbreList请求参数结构体
                */
                class DescribeLiveAvatarTimbreListRequest : public AbstractModel
                {
                public:
                    DescribeLiveAvatarTimbreListRequest();
                    ~DescribeLiveAvatarTimbreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤音色性别。默认不过滤。
male - 男性，
female -女性。
                     * @return TimbreGender 过滤音色性别。默认不过滤。
male - 男性，
female -女性。
                     * 
                     */
                    std::string GetTimbreGender() const;

                    /**
                     * 设置过滤音色性别。默认不过滤。
male - 男性，
female -女性。
                     * @param _timbreGender 过滤音色性别。默认不过滤。
male - 男性，
female -女性。
                     * 
                     */
                    void SetTimbreGender(const std::string& _timbreGender);

                    /**
                     * 判断参数 TimbreGender 是否已赋值
                     * @return TimbreGender 是否已赋值
                     * 
                     */
                    bool TimbreGenderHasBeenSet() const;

                private:

                    /**
                     * 过滤音色性别。默认不过滤。
male - 男性，
female -女性。
                     */
                    std::string m_timbreGender;
                    bool m_timbreGenderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARTIMBRELISTREQUEST_H_
