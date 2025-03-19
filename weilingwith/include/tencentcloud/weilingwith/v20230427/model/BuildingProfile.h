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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGPROFILE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 建筑概要信息
                */
                class BuildingProfile : public AbstractModel
                {
                public:
                    BuildingProfile();
                    ~BuildingProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建筑id
                     * @return BuildingId 建筑id
                     * 
                     */
                    std::string GetBuildingId() const;

                    /**
                     * 设置建筑id
                     * @param _buildingId 建筑id
                     * 
                     */
                    void SetBuildingId(const std::string& _buildingId);

                    /**
                     * 判断参数 BuildingId 是否已赋值
                     * @return BuildingId 是否已赋值
                     * 
                     */
                    bool BuildingIdHasBeenSet() const;

                    /**
                     * 获取建筑名称
                     * @return BuildingName 建筑名称
                     * 
                     */
                    std::string GetBuildingName() const;

                    /**
                     * 设置建筑名称
                     * @param _buildingName 建筑名称
                     * 
                     */
                    void SetBuildingName(const std::string& _buildingName);

                    /**
                     * 判断参数 BuildingName 是否已赋值
                     * @return BuildingName 是否已赋值
                     * 
                     */
                    bool BuildingNameHasBeenSet() const;

                    /**
                     * 获取空间编码
                     * @return SpaceCode 空间编码
                     * 
                     */
                    std::string GetSpaceCode() const;

                    /**
                     * 设置空间编码
                     * @param _spaceCode 空间编码
                     * 
                     */
                    void SetSpaceCode(const std::string& _spaceCode);

                    /**
                     * 判断参数 SpaceCode 是否已赋值
                     * @return SpaceCode 是否已赋值
                     * 
                     */
                    bool SpaceCodeHasBeenSet() const;

                    /**
                     * 获取经度
                     * @return Longitude 经度
                     * 
                     */
                    double GetLongitude() const;

                    /**
                     * 设置经度
                     * @param _longitude 经度
                     * 
                     */
                    void SetLongitude(const double& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取纬度
                     * @return Latitude 纬度
                     * 
                     */
                    double GetLatitude() const;

                    /**
                     * 设置纬度
                     * @param _latitude 纬度
                     * 
                     */
                    void SetLatitude(const double& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址
                     * @param _address 地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 建筑id
                     */
                    std::string m_buildingId;
                    bool m_buildingIdHasBeenSet;

                    /**
                     * 建筑名称
                     */
                    std::string m_buildingName;
                    bool m_buildingNameHasBeenSet;

                    /**
                     * 空间编码
                     */
                    std::string m_spaceCode;
                    bool m_spaceCodeHasBeenSet;

                    /**
                     * 经度
                     */
                    double m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 纬度
                     */
                    double m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BUILDINGPROFILE_H_
