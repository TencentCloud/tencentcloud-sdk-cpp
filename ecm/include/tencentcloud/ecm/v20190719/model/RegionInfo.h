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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Region和RegionName
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取Region名称
                     * @return RegionName Region名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region名称
                     * @param _regionName Region名称
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
                     * 获取RegionID
                     * @return RegionId RegionID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置RegionID
                     * @param _regionId RegionID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * RegionID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_REGIONINFO_H_
