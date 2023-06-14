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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REGIONMAPRELATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REGIONMAPRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 区域映射id和子区域id的关联信息。
                */
                class RegionMapRelation : public AbstractModel
                {
                public:
                    RegionMapRelation();
                    ~RegionMapRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域ID。
                     * @return RegionId 区域ID。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置区域ID。
                     * @param _regionId 区域ID。
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
                     * 获取子区域ID列表
                     * @return SubRegionIdList 子区域ID列表
                     * 
                     */
                    std::vector<int64_t> GetSubRegionIdList() const;

                    /**
                     * 设置子区域ID列表
                     * @param _subRegionIdList 子区域ID列表
                     * 
                     */
                    void SetSubRegionIdList(const std::vector<int64_t>& _subRegionIdList);

                    /**
                     * 判断参数 SubRegionIdList 是否已赋值
                     * @return SubRegionIdList 是否已赋值
                     * 
                     */
                    bool SubRegionIdListHasBeenSet() const;

                private:

                    /**
                     * 区域ID。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 子区域ID列表
                     */
                    std::vector<int64_t> m_subRegionIdList;
                    bool m_subRegionIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REGIONMAPRELATION_H_
