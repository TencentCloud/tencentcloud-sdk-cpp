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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTSTANDARD_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTSTANDARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 光照标准，结构的相关示例为：
{
    "Name":"dark"，
    "Range":[0,30]
}
当光照的区间落入在0到30的范围时，就会命中dark的光照标准
                */
                class LightStandard : public AbstractModel
                {
                public:
                    LightStandard();
                    ~LightStandard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取光照名称
                     * @return Name 光照名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置光照名称
                     * @param _name 光照名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取范围
                     * @return Range 范围
                     * 
                     */
                    std::vector<double> GetRange() const;

                    /**
                     * 设置范围
                     * @param _range 范围
                     * 
                     */
                    void SetRange(const std::vector<double>& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * 光照名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 范围
                     */
                    std::vector<double> m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTSTANDARD_H_
