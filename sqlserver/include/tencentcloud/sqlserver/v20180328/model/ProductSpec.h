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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PRODUCTSPEC_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PRODUCTSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/SpecInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 包括地域的产品规格配置
                */
                class ProductSpec : public AbstractModel
                {
                public:
                    ProductSpec();
                    ~ProductSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
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
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取配置信息
                     * @return Info 配置信息
                     * 
                     */
                    std::vector<SpecInfo> GetInfo() const;

                    /**
                     * 设置配置信息
                     * @param _info 配置信息
                     * 
                     */
                    void SetInfo(const std::vector<SpecInfo>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 配置信息
                     */
                    std::vector<SpecInfo> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PRODUCTSPEC_H_
