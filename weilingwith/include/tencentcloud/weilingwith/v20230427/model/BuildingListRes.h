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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGLISTRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGLISTRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/BuildingProfile.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 建筑列表响应体
                */
                class BuildingListRes : public AbstractModel
                {
                public:
                    BuildingListRes();
                    ~BuildingListRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建筑列表
                     * @return BuildingProfileList 建筑列表
                     * 
                     */
                    std::vector<BuildingProfile> GetBuildingProfileList() const;

                    /**
                     * 设置建筑列表
                     * @param _buildingProfileList 建筑列表
                     * 
                     */
                    void SetBuildingProfileList(const std::vector<BuildingProfile>& _buildingProfileList);

                    /**
                     * 判断参数 BuildingProfileList 是否已赋值
                     * @return BuildingProfileList 是否已赋值
                     * 
                     */
                    bool BuildingProfileListHasBeenSet() const;

                private:

                    /**
                     * 建筑列表
                     */
                    std::vector<BuildingProfile> m_buildingProfileList;
                    bool m_buildingProfileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGLISTRES_H_
