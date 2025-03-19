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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGPROFILERES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGPROFILERES_H_

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
                * 查询建筑信息响应体
                */
                class BuildingProfileRes : public AbstractModel
                {
                public:
                    BuildingProfileRes();
                    ~BuildingProfileRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建筑概要信息
                     * @return BuildingProfile 建筑概要信息
                     * 
                     */
                    BuildingProfile GetBuildingProfile() const;

                    /**
                     * 设置建筑概要信息
                     * @param _buildingProfile 建筑概要信息
                     * 
                     */
                    void SetBuildingProfile(const BuildingProfile& _buildingProfile);

                    /**
                     * 判断参数 BuildingProfile 是否已赋值
                     * @return BuildingProfile 是否已赋值
                     * 
                     */
                    bool BuildingProfileHasBeenSet() const;

                private:

                    /**
                     * 建筑概要信息
                     */
                    BuildingProfile m_buildingProfile;
                    bool m_buildingProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGPROFILERES_H_
