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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ZONESTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ZONESTATUS_H_

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
                * 某个地域可用区下的规格售卖状态。
                */
                class ZoneStatus : public AbstractModel
                {
                public:
                    ZoneStatus();
                    ~ZoneStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格地域
                     * @return Zone 规格地域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置规格地域
                     * @param _zone 规格地域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取规格可用区
                     * @return Region 规格可用区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置规格可用区
                     * @param _region 规格可用区
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
                     * 获取规格在该可用区的售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * @return Status 规格在该可用区的售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规格在该可用区的售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * @param _status 规格在该可用区的售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规格地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 规格可用区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 规格在该可用区的售卖状态 1-正常 2-关闭售卖但是可以升级 3-完全关闭售卖
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ZONESTATUS_H_
