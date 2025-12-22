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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_HOSTMETRICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_HOSTMETRICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HostMetricItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 主机指标采集配置
                */
                class HostMetricConfig : public AbstractModel
                {
                public:
                    HostMetricConfig();
                    ~HostMetricConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采集配置 id
                     * @return ConfigId 采集配置 id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置采集配置 id
                     * @param _configId 采集配置 id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取采集配置名称
                     * @return Name 采集配置名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置采集配置名称
                     * @param _name 采集配置名称
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
                     * 获取采集频率,单位ms
                     * @return Interval 采集频率,单位ms
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置采集频率,单位ms
                     * @param _interval 采集频率,单位ms
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取采集项.
                     * @return HostMetricItems 采集项.
                     * 
                     */
                    std::vector<HostMetricItem> GetHostMetricItems() const;

                    /**
                     * 设置采集项.
                     * @param _hostMetricItems 采集项.
                     * 
                     */
                    void SetHostMetricItems(const std::vector<HostMetricItem>& _hostMetricItems);

                    /**
                     * 判断参数 HostMetricItems 是否已赋值
                     * @return HostMetricItems 是否已赋值
                     * 
                     */
                    bool HostMetricItemsHasBeenSet() const;

                    /**
                     * 获取机器组 id 列表
                     * @return MachineGroupIds 机器组 id 列表
                     * 
                     */
                    std::vector<std::string> GetMachineGroupIds() const;

                    /**
                     * 设置机器组 id 列表
                     * @param _machineGroupIds 机器组 id 列表
                     * 
                     */
                    void SetMachineGroupIds(const std::vector<std::string>& _machineGroupIds);

                    /**
                     * 判断参数 MachineGroupIds 是否已赋值
                     * @return MachineGroupIds 是否已赋值
                     * 
                     */
                    bool MachineGroupIdsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 采集配置 id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 采集配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 采集频率,单位ms
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 采集项.
                     */
                    std::vector<HostMetricItem> m_hostMetricItems;
                    bool m_hostMetricItemsHasBeenSet;

                    /**
                     * 机器组 id 列表
                     */
                    std::vector<std::string> m_machineGroupIds;
                    bool m_machineGroupIdsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_HOSTMETRICCONFIG_H_
