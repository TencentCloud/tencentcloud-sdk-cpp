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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DIMENSIONSDETAIL_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DIMENSIONSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测点维度信息
                */
                class DimensionsDetail : public AbstractModel
                {
                public:
                    DimensionsDetail();
                    ~DimensionsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商列表
                     * @return Isp 运营商列表
                     */
                    std::vector<std::string> GetIsp() const;

                    /**
                     * 设置运营商列表
                     * @param Isp 运营商列表
                     */
                    void SetIsp(const std::vector<std::string>& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取省份列表
                     * @return Province 省份列表
                     */
                    std::vector<std::string> GetProvince() const;

                    /**
                     * 设置省份列表
                     * @param Province 省份列表
                     */
                    void SetProvince(const std::vector<std::string>& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                private:

                    /**
                     * 运营商列表
                     */
                    std::vector<std::string> m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 省份列表
                     */
                    std::vector<std::string> m_province;
                    bool m_provinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DIMENSIONSDETAIL_H_
