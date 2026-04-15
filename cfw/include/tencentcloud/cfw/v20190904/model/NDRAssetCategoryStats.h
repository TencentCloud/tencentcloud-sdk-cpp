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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NDRASSETCATEGORYSTATS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NDRASSETCATEGORYSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NDRAssetServiceStats.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NDR资产识别服务类型统计结果
                */
                class NDRAssetCategoryStats : public AbstractModel
                {
                public:
                    NDRAssetCategoryStats();
                    ~NDRAssetCategoryStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务类型
                     * @return Name 服务类型
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务类型
                     * @param _name 服务类型
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
                     * 获取服务统计结果
                     * @return Services 服务统计结果
                     * 
                     */
                    std::vector<NDRAssetServiceStats> GetServices() const;

                    /**
                     * 设置服务统计结果
                     * @param _services 服务统计结果
                     * 
                     */
                    void SetServices(const std::vector<NDRAssetServiceStats>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * 服务类型
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务统计结果
                     */
                    std::vector<NDRAssetServiceStats> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NDRASSETCATEGORYSTATS_H_
