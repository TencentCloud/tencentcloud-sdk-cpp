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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 地域列表
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地域是否可用状态
AVAILABLE：可用

                     * @return RegionState 地域是否可用状态
AVAILABLE：可用

                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置地域是否可用状态
AVAILABLE：可用

                     * @param _regionState 地域是否可用状态
AVAILABLE：可用

                     * 
                     */
                    void SetRegionState(const std::string& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                    /**
                     * 获取学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。
                     * @return ScholarRocketSupportState 学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。
                     * 
                     */
                    std::string GetScholarRocketSupportState() const;

                    /**
                     * 设置学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。
                     * @param _scholarRocketSupportState 学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。
                     * 
                     */
                    void SetScholarRocketSupportState(const std::string& _scholarRocketSupportState);

                    /**
                     * 判断参数 ScholarRocketSupportState 是否已赋值
                     * @return ScholarRocketSupportState 是否已赋值
                     * 
                     */
                    bool ScholarRocketSupportStateHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域是否可用状态
AVAILABLE：可用

                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。
                     */
                    std::string m_scholarRocketSupportState;
                    bool m_scholarRocketSupportStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_REGIONINFO_H_
