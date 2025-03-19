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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATALISTSTATSRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATALISTSTATSRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/SpaceDataStats.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 查询项目空间楼栋数量与建筑面积响应体
                */
                class SpaceDataListStatsRes : public AbstractModel
                {
                public:
                    SpaceDataListStatsRes();
                    ~SpaceDataListStatsRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取楼栋数量与建筑面积列表
                     * @return List 楼栋数量与建筑面积列表
                     * 
                     */
                    std::vector<SpaceDataStats> GetList() const;

                    /**
                     * 设置楼栋数量与建筑面积列表
                     * @param _list 楼栋数量与建筑面积列表
                     * 
                     */
                    void SetList(const std::vector<SpaceDataStats>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 楼栋数量与建筑面积列表
                     */
                    std::vector<SpaceDataStats> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDATALISTSTATSRES_H_
