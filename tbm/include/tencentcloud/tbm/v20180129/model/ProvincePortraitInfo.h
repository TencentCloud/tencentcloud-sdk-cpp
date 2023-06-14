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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_PROVINCEPORTRAITINFO_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_PROVINCEPORTRAITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbm/v20180129/model/ProvincePortrait.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * 用户省份画像元素数组
                */
                class ProvincePortraitInfo : public AbstractModel
                {
                public:
                    ProvincePortraitInfo();
                    ~ProvincePortraitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户省份画像数组
                     * @return PortraitSet 用户省份画像数组
                     * 
                     */
                    std::vector<ProvincePortrait> GetPortraitSet() const;

                    /**
                     * 设置用户省份画像数组
                     * @param _portraitSet 用户省份画像数组
                     * 
                     */
                    void SetPortraitSet(const std::vector<ProvincePortrait>& _portraitSet);

                    /**
                     * 判断参数 PortraitSet 是否已赋值
                     * @return PortraitSet 是否已赋值
                     * 
                     */
                    bool PortraitSetHasBeenSet() const;

                private:

                    /**
                     * 用户省份画像数组
                     */
                    std::vector<ProvincePortrait> m_portraitSet;
                    bool m_portraitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_PROVINCEPORTRAITINFO_H_
