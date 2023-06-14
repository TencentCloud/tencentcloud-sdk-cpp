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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEUSERPORTRAITRESPONSE_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEUSERPORTRAITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbm/v20180129/model/AgePortraitInfo.h>
#include <tencentcloud/tbm/v20180129/model/GenderPortraitInfo.h>
#include <tencentcloud/tbm/v20180129/model/ProvincePortraitInfo.h>
#include <tencentcloud/tbm/v20180129/model/MoviePortraitInfo.h>
#include <tencentcloud/tbm/v20180129/model/StarPortraitInfo.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeUserPortrait返回参数结构体
                */
                class DescribeUserPortraitResponse : public AbstractModel
                {
                public:
                    DescribeUserPortraitResponse();
                    ~DescribeUserPortraitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取年龄画像
                     * @return Age 年龄画像
                     * 
                     */
                    AgePortraitInfo GetAge() const;

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取性别画像
                     * @return Gender 性别画像
                     * 
                     */
                    GenderPortraitInfo GetGender() const;

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取省份画像
                     * @return Province 省份画像
                     * 
                     */
                    ProvincePortraitInfo GetProvince() const;

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取电影喜好画像
                     * @return Movie 电影喜好画像
                     * 
                     */
                    MoviePortraitInfo GetMovie() const;

                    /**
                     * 判断参数 Movie 是否已赋值
                     * @return Movie 是否已赋值
                     * 
                     */
                    bool MovieHasBeenSet() const;

                    /**
                     * 获取明星喜好画像
                     * @return Star 明星喜好画像
                     * 
                     */
                    StarPortraitInfo GetStar() const;

                    /**
                     * 判断参数 Star 是否已赋值
                     * @return Star 是否已赋值
                     * 
                     */
                    bool StarHasBeenSet() const;

                private:

                    /**
                     * 年龄画像
                     */
                    AgePortraitInfo m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 性别画像
                     */
                    GenderPortraitInfo m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 省份画像
                     */
                    ProvincePortraitInfo m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 电影喜好画像
                     */
                    MoviePortraitInfo m_movie;
                    bool m_movieHasBeenSet;

                    /**
                     * 明星喜好画像
                     */
                    StarPortraitInfo m_star;
                    bool m_starHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEUSERPORTRAITRESPONSE_H_
