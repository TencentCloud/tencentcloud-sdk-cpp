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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_STATDEVICETYPE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_STATDEVICETYPE_H_

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
                * 设备类型统计
                */
                class StatDeviceType : public AbstractModel
                {
                public:
                    StatDeviceType();
                    ~StatDeviceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取汇总数。在线（正常+故障） + 离线
                     * @return Total 汇总数。在线（正常+故障） + 离线
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置汇总数。在线（正常+故障） + 离线
                     * @param _total 汇总数。在线（正常+故障） + 离线
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取正常数
                     * @return Normal 正常数
                     * 
                     */
                    int64_t GetNormal() const;

                    /**
                     * 设置正常数
                     * @param _normal 正常数
                     * 
                     */
                    void SetNormal(const int64_t& _normal);

                    /**
                     * 判断参数 Normal 是否已赋值
                     * @return Normal 是否已赋值
                     * 
                     */
                    bool NormalHasBeenSet() const;

                    /**
                     * 获取离线数
                     * @return Offline 离线数
                     * 
                     */
                    int64_t GetOffline() const;

                    /**
                     * 设置离线数
                     * @param _offline 离线数
                     * 
                     */
                    void SetOffline(const int64_t& _offline);

                    /**
                     * 判断参数 Offline 是否已赋值
                     * @return Offline 是否已赋值
                     * 
                     */
                    bool OfflineHasBeenSet() const;

                    /**
                     * 获取故障数
                     * @return Fault 故障数
                     * 
                     */
                    int64_t GetFault() const;

                    /**
                     * 设置故障数
                     * @param _fault 故障数
                     * 
                     */
                    void SetFault(const int64_t& _fault);

                    /**
                     * 判断参数 Fault 是否已赋值
                     * @return Fault 是否已赋值
                     * 
                     */
                    bool FaultHasBeenSet() const;

                    /**
                     * 获取设备名
                     * @return Name 设备名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备名
                     * @param _name 设备名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 汇总数。在线（正常+故障） + 离线
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 正常数
                     */
                    int64_t m_normal;
                    bool m_normalHasBeenSet;

                    /**
                     * 离线数
                     */
                    int64_t m_offline;
                    bool m_offlineHasBeenSet;

                    /**
                     * 故障数
                     */
                    int64_t m_fault;
                    bool m_faultHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_STATDEVICETYPE_H_
