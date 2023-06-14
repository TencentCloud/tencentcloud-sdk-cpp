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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERCATEGORIESRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERCATEGORIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVSingerCategoryInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVSingerCategories返回参数结构体
                */
                class DescribeKTVSingerCategoriesResponse : public AbstractModel
                {
                public:
                    DescribeKTVSingerCategoriesResponse();
                    ~DescribeKTVSingerCategoriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌手性别分类列表
                     * @return GenderSet 歌手性别分类列表
                     * 
                     */
                    std::vector<KTVSingerCategoryInfo> GetGenderSet() const;

                    /**
                     * 判断参数 GenderSet 是否已赋值
                     * @return GenderSet 是否已赋值
                     * 
                     */
                    bool GenderSetHasBeenSet() const;

                    /**
                     * 获取歌手区域分类列表
                     * @return AreaSet 歌手区域分类列表
                     * 
                     */
                    std::vector<KTVSingerCategoryInfo> GetAreaSet() const;

                    /**
                     * 判断参数 AreaSet 是否已赋值
                     * @return AreaSet 是否已赋值
                     * 
                     */
                    bool AreaSetHasBeenSet() const;

                private:

                    /**
                     * 歌手性别分类列表
                     */
                    std::vector<KTVSingerCategoryInfo> m_genderSet;
                    bool m_genderSetHasBeenSet;

                    /**
                     * 歌手区域分类列表
                     */
                    std::vector<KTVSingerCategoryInfo> m_areaSet;
                    bool m_areaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVSINGERCATEGORIESRESPONSE_H_
