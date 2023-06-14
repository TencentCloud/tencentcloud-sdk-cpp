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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_REGIONINSTANCECOUNT_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_REGIONINSTANCECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 地域资源实例数
                */
                class RegionInstanceCount : public AbstractModel
                {
                public:
                    RegionInstanceCount();
                    ~RegionInstanceCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域码
                     * @return Region 地域码
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域码
                     * @param _region 地域码
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取地域码（新规范）
                     * @return RegionV3 地域码（新规范）
                     * 
                     */
                    std::string GetRegionV3() const;

                    /**
                     * 设置地域码（新规范）
                     * @param _regionV3 地域码（新规范）
                     * 
                     */
                    void SetRegionV3(const std::string& _regionV3);

                    /**
                     * 判断参数 RegionV3 是否已赋值
                     * @return RegionV3 是否已赋值
                     * 
                     */
                    bool RegionV3HasBeenSet() const;

                    /**
                     * 获取资源实例数
                     * @return Count 资源实例数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置资源实例数
                     * @param _count 资源实例数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 地域码
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域码（新规范）
                     */
                    std::string m_regionV3;
                    bool m_regionV3HasBeenSet;

                    /**
                     * 资源实例数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_REGIONINSTANCECOUNT_H_
