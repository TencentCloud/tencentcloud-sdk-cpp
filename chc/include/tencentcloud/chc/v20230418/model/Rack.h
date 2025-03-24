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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_RACK_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_RACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机架的信息
                */
                class Rack : public AbstractModel
                {
                public:
                    Rack();
                    ~Rack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机架名称
                     * @return RackName 机架名称
                     * 
                     */
                    std::string GetRackName() const;

                    /**
                     * 设置机架名称
                     * @param _rackName 机架名称
                     * 
                     */
                    void SetRackName(const std::string& _rackName);

                    /**
                     * 判断参数 RackName 是否已赋值
                     * @return RackName 是否已赋值
                     * 
                     */
                    bool RackNameHasBeenSet() const;

                    /**
                     * 获取机架所属的机房管理单元ID
                     * @return IdcUnitId 机架所属的机房管理单元ID
                     * 
                     */
                    uint64_t GetIdcUnitId() const;

                    /**
                     * 设置机架所属的机房管理单元ID
                     * @param _idcUnitId 机架所属的机房管理单元ID
                     * 
                     */
                    void SetIdcUnitId(const uint64_t& _idcUnitId);

                    /**
                     * 判断参数 IdcUnitId 是否已赋值
                     * @return IdcUnitId 是否已赋值
                     * 
                     */
                    bool IdcUnitIdHasBeenSet() const;

                    /**
                     * 获取机架所属的机房管理单元名称
                     * @return IdcUnitName 机架所属的机房管理单元名称
                     * 
                     */
                    std::string GetIdcUnitName() const;

                    /**
                     * 设置机架所属的机房管理单元名称
                     * @param _idcUnitName 机架所属的机房管理单元名称
                     * 
                     */
                    void SetIdcUnitName(const std::string& _idcUnitName);

                    /**
                     * 判断参数 IdcUnitName 是否已赋值
                     * @return IdcUnitName 是否已赋值
                     * 
                     */
                    bool IdcUnitNameHasBeenSet() const;

                    /**
                     * 获取机架所属的机房名称
                     * @return IdcName 机架所属的机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机架所属的机房名称
                     * @param _idcName 机架所属的机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取机架所属的机房ID
                     * @return IdcId 机架所属的机房ID
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机架所属的机房ID
                     * @param _idcId 机架所属的机房ID
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取机架ID
                     * @return RackId 机架ID
                     * 
                     */
                    uint64_t GetRackId() const;

                    /**
                     * 设置机架ID
                     * @param _rackId 机架ID
                     * 
                     */
                    void SetRackId(const uint64_t& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取是否开电
                     * @return IsPowerOn 是否开电
                     * 
                     */
                    bool GetIsPowerOn() const;

                    /**
                     * 设置是否开电
                     * @param _isPowerOn 是否开电
                     * 
                     */
                    void SetIsPowerOn(const bool& _isPowerOn);

                    /**
                     * 判断参数 IsPowerOn 是否已赋值
                     * @return IsPowerOn 是否已赋值
                     * 
                     */
                    bool IsPowerOnHasBeenSet() const;

                    /**
                     * 获取机架最近一次开电时间，YYYY-MM-DD 格式
                     * @return RackOpenTime 机架最近一次开电时间，YYYY-MM-DD 格式
                     * 
                     */
                    std::string GetRackOpenTime() const;

                    /**
                     * 设置机架最近一次开电时间，YYYY-MM-DD 格式
                     * @param _rackOpenTime 机架最近一次开电时间，YYYY-MM-DD 格式
                     * 
                     */
                    void SetRackOpenTime(const std::string& _rackOpenTime);

                    /**
                     * 判断参数 RackOpenTime 是否已赋值
                     * @return RackOpenTime 是否已赋值
                     * 
                     */
                    bool RackOpenTimeHasBeenSet() const;

                    /**
                     * 获取托管类型
                     * @return HostingType 托管类型
                     * 
                     */
                    std::string GetHostingType() const;

                    /**
                     * 设置托管类型
                     * @param _hostingType 托管类型
                     * 
                     */
                    void SetHostingType(const std::string& _hostingType);

                    /**
                     * 判断参数 HostingType 是否已赋值
                     * @return HostingType 是否已赋值
                     * 
                     */
                    bool HostingTypeHasBeenSet() const;

                private:

                    /**
                     * 机架名称
                     */
                    std::string m_rackName;
                    bool m_rackNameHasBeenSet;

                    /**
                     * 机架所属的机房管理单元ID
                     */
                    uint64_t m_idcUnitId;
                    bool m_idcUnitIdHasBeenSet;

                    /**
                     * 机架所属的机房管理单元名称
                     */
                    std::string m_idcUnitName;
                    bool m_idcUnitNameHasBeenSet;

                    /**
                     * 机架所属的机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 机架所属的机房ID
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 机架ID
                     */
                    uint64_t m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * 是否开电
                     */
                    bool m_isPowerOn;
                    bool m_isPowerOnHasBeenSet;

                    /**
                     * 机架最近一次开电时间，YYYY-MM-DD 格式
                     */
                    std::string m_rackOpenTime;
                    bool m_rackOpenTimeHasBeenSet;

                    /**
                     * 托管类型
                     */
                    std::string m_hostingType;
                    bool m_hostingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_RACK_H_
