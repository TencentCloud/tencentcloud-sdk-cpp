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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_PROVINCEPORTRAIT_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_PROVINCEPORTRAIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * 省份画像元素
                */
                class ProvincePortrait : public AbstractModel
                {
                public:
                    ProvincePortrait();
                    ~ProvincePortrait() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取省份名称
                     * @return Province 省份名称
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份名称
                     * @param _province 省份名称
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取百分比
                     * @return Percent 百分比
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置百分比
                     * @param _percent 百分比
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * 省份名称
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 百分比
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_PROVINCEPORTRAIT_H_
