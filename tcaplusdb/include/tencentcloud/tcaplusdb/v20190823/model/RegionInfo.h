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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * TcaplusDB服务地域信息详情
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域Ap-Code
                     * @return RegionName 地域Ap-Code
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域Ap-Code
                     * @param _regionName 地域Ap-Code
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
                     * 获取地域缩写
                     * @return RegionAbbr 地域缩写
                     * 
                     */
                    std::string GetRegionAbbr() const;

                    /**
                     * 设置地域缩写
                     * @param _regionAbbr 地域缩写
                     * 
                     */
                    void SetRegionAbbr(const std::string& _regionAbbr);

                    /**
                     * 判断参数 RegionAbbr 是否已赋值
                     * @return RegionAbbr 是否已赋值
                     * 
                     */
                    bool RegionAbbrHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取是否支持ipv6，0:不支持，1:支持
                     * @return Ipv6Enable 是否支持ipv6，0:不支持，1:支持
                     * 
                     */
                    uint64_t GetIpv6Enable() const;

                    /**
                     * 设置是否支持ipv6，0:不支持，1:支持
                     * @param _ipv6Enable 是否支持ipv6，0:不支持，1:支持
                     * 
                     */
                    void SetIpv6Enable(const uint64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                private:

                    /**
                     * 地域Ap-Code
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域缩写
                     */
                    std::string m_regionAbbr;
                    bool m_regionAbbrHasBeenSet;

                    /**
                     * 地域ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 是否支持ipv6，0:不支持，1:支持
                     */
                    uint64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_REGIONINFO_H_
