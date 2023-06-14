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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONFENCEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONFENCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/PositionFenceItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 围栏详细信息(包含创建时间及更新时间)
                */
                class PositionFenceInfo : public AbstractModel
                {
                public:
                    PositionFenceInfo();
                    ~PositionFenceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取围栏信息
                     * @return GeoFence 围栏信息
                     * 
                     */
                    PositionFenceItem GetGeoFence() const;

                    /**
                     * 设置围栏信息
                     * @param _geoFence 围栏信息
                     * 
                     */
                    void SetGeoFence(const PositionFenceItem& _geoFence);

                    /**
                     * 判断参数 GeoFence 是否已赋值
                     * @return GeoFence 是否已赋值
                     * 
                     */
                    bool GeoFenceHasBeenSet() const;

                    /**
                     * 获取围栏创建时间
                     * @return CreateTime 围栏创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置围栏创建时间
                     * @param _createTime 围栏创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取围栏更新时间
                     * @return UpdateTime 围栏更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置围栏更新时间
                     * @param _updateTime 围栏更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 围栏信息
                     */
                    PositionFenceItem m_geoFence;
                    bool m_geoFenceHasBeenSet;

                    /**
                     * 围栏创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 围栏更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONFENCEINFO_H_
