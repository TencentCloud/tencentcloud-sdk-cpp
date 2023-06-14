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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_IPSTATUS_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_IPSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 节点 IP 信息
                */
                class IpStatus : public AbstractModel
                {
                public:
                    IpStatus();
                    ~IpStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点 IP
                     * @return Ip 节点 IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置节点 IP
                     * @param _ip 节点 IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取节点所属区域
                     * @return District 节点所属区域
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置节点所属区域
                     * @param _district 节点所属区域
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取节点所属运营商
                     * @return Isp 节点所属运营商
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置节点所属运营商
                     * @param _isp 节点所属运营商
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取节点所在城市
                     * @return City 节点所在城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置节点所在城市
                     * @param _city 节点所在城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取节点状态
online：上线状态，正常调度服务中
offline：下线状态
                     * @return Status 节点状态
online：上线状态，正常调度服务中
offline：下线状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态
online：上线状态，正常调度服务中
offline：下线状态
                     * @param _status 节点状态
online：上线状态，正常调度服务中
offline：下线状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取节点 IP 添加时间
                     * @return CreateTime 节点 IP 添加时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置节点 IP 添加时间
                     * @param _createTime 节点 IP 添加时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 节点 IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点所属区域
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 节点所属运营商
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 节点所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 节点状态
online：上线状态，正常调度服务中
offline：下线状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点 IP 添加时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_IPSTATUS_H_
