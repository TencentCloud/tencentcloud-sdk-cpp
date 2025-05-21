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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 地域信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域英文ID，类似ap-guangzhou
                     * @return Region 地域英文ID，类似ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文ID，类似ap-guangzhou
                     * @param _region 地域英文ID，类似ap-guangzhou
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
                     * 获取地域中文名称
                     * @return RegionName 地域中文名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域中文名称
                     * @param _regionName 地域中文名称
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
                     * 获取地域数字ID
                     * @return RegionId 地域数字ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域数字ID
                     * @param _regionId 地域数字ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取该地域目前是否可以售卖，UNAVAILABLE-不可售卖；AVAILABLE-可售卖
                     * @return RegionState 该地域目前是否可以售卖，UNAVAILABLE-不可售卖；AVAILABLE-可售卖
                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置该地域目前是否可以售卖，UNAVAILABLE-不可售卖；AVAILABLE-可售卖
                     * @param _regionState 该地域目前是否可以售卖，UNAVAILABLE-不可售卖；AVAILABLE-可售卖
                     * 
                     */
                    void SetRegionState(const std::string& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                private:

                    /**
                     * 地域英文ID，类似ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域中文名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域数字ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 该地域目前是否可以售卖，UNAVAILABLE-不可售卖；AVAILABLE-可售卖
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_REGIONINFO_H_
