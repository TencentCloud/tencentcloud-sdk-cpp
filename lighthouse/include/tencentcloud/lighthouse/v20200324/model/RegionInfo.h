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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述地域信息。
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域名称，例如，ap-guangzhou。
                     * @return Region 地域名称，例如，ap-guangzhou。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域名称，例如，ap-guangzhou。
                     * @param _region 地域名称，例如，ap-guangzhou。
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
                     * 获取地域描述，例如，华南地区(广州)。
                     * @return RegionName 地域描述，例如，华南地区(广州)。
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域描述，例如，华南地区(广州)。
                     * @param _regionName 地域描述，例如，华南地区(广州)。
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
                     * 获取地域是否可用状态，取值仅为AVAILABLE（表示可用状态）。
                     * @return RegionState 地域是否可用状态，取值仅为AVAILABLE（表示可用状态）。
                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置地域是否可用状态，取值仅为AVAILABLE（表示可用状态）。
                     * @param _regionState 地域是否可用状态，取值仅为AVAILABLE（表示可用状态）。
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
                     * 获取是否中国大陆地域
                     * @return IsChinaMainland 是否中国大陆地域
                     * 
                     */
                    bool GetIsChinaMainland() const;

                    /**
                     * 设置是否中国大陆地域
                     * @param _isChinaMainland 是否中国大陆地域
                     * 
                     */
                    void SetIsChinaMainland(const bool& _isChinaMainland);

                    /**
                     * 判断参数 IsChinaMainland 是否已赋值
                     * @return IsChinaMainland 是否已赋值
                     * 
                     */
                    bool IsChinaMainlandHasBeenSet() const;

                private:

                    /**
                     * 地域名称，例如，ap-guangzhou。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域描述，例如，华南地区(广州)。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域是否可用状态，取值仅为AVAILABLE（表示可用状态）。
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 是否中国大陆地域
                     */
                    bool m_isChinaMainland;
                    bool m_isChinaMainlandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_REGIONINFO_H_
