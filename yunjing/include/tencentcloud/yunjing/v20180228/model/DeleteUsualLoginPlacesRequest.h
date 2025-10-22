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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETEUSUALLOGINPLACESREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETEUSUALLOGINPLACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteUsualLoginPlaces请求参数结构体
                */
                class DeleteUsualLoginPlacesRequest : public AbstractModel
                {
                public:
                    DeleteUsualLoginPlacesRequest();
                    ~DeleteUsualLoginPlacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云镜客户端Uuid
                     * @return Uuid 云镜客户端Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端Uuid
                     * @param _uuid 云镜客户端Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取已添加常用登录地城市ID数组
                     * @return CityIds 已添加常用登录地城市ID数组
                     * 
                     */
                    std::vector<uint64_t> GetCityIds() const;

                    /**
                     * 设置已添加常用登录地城市ID数组
                     * @param _cityIds 已添加常用登录地城市ID数组
                     * 
                     */
                    void SetCityIds(const std::vector<uint64_t>& _cityIds);

                    /**
                     * 判断参数 CityIds 是否已赋值
                     * @return CityIds 是否已赋值
                     * 
                     */
                    bool CityIdsHasBeenSet() const;

                private:

                    /**
                     * 云镜客户端Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 已添加常用登录地城市ID数组
                     */
                    std::vector<uint64_t> m_cityIds;
                    bool m_cityIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETEUSUALLOGINPLACESREQUEST_H_
