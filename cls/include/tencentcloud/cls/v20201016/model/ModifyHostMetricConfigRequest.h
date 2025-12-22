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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYHOSTMETRICCONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYHOSTMETRICCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyHostMetricConfig请求参数结构体
                */
                class ModifyHostMetricConfigRequest : public AbstractModel
                {
                public:
                    ModifyHostMetricConfigRequest();
                    ~ModifyHostMetricConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * @return TopicId 指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * @param _topicId 指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取采集配置id
                     * @return ConfigId 采集配置id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置采集配置id
                     * @param _configId 采集配置id
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
                     * 获取名称。

- 长度不超过 64字符。
                     * @return Name 名称。

- 长度不超过 64字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。

- 长度不超过 64字符。
                     * @param _name 名称。

- 长度不超过 64字符。
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
                     * 获取机器组id列表。最多支持100个机器组。
                     * @return MachineGroupIds 机器组id列表。最多支持100个机器组。
                     * 
                     */
                    std::vector<std::string> GetMachineGroupIds() const;

                    /**
                     * 设置机器组id列表。最多支持100个机器组。
                     * @param _machineGroupIds 机器组id列表。最多支持100个机器组。
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
                     * 获取采集频率。单位:ms。 最小支持5000ms
                     * @return Interval 采集频率。单位:ms。 最小支持5000ms
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置采集频率。单位:ms。 最小支持5000ms
                     * @param _interval 采集频率。单位:ms。 最小支持5000ms
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
                     * 获取采集项。支持"cpu"，"mem"，"net"，"disk"，"system"。**目前仅支持:所有采集项都需配置**。
- cpu：CPU
- mem：内存
- net：网络
- disk：磁盘
- system：系统

                     * @return HostMetricItems 采集项。支持"cpu"，"mem"，"net"，"disk"，"system"。**目前仅支持:所有采集项都需配置**。
- cpu：CPU
- mem：内存
- net：网络
- disk：磁盘
- system：系统

                     * 
                     */
                    std::vector<HostMetricItem> GetHostMetricItems() const;

                    /**
                     * 设置采集项。支持"cpu"，"mem"，"net"，"disk"，"system"。**目前仅支持:所有采集项都需配置**。
- cpu：CPU
- mem：内存
- net：网络
- disk：磁盘
- system：系统

                     * @param _hostMetricItems 采集项。支持"cpu"，"mem"，"net"，"disk"，"system"。**目前仅支持:所有采集项都需配置**。
- cpu：CPU
- mem：内存
- net：网络
- disk：磁盘
- system：系统

                     * 
                     */
                    void SetHostMetricItems(const std::vector<HostMetricItem>& _hostMetricItems);

                    /**
                     * 判断参数 HostMetricItems 是否已赋值
                     * @return HostMetricItems 是否已赋值
                     * 
                     */
                    bool HostMetricItemsHasBeenSet() const;

                private:

                    /**
                     * 指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 采集配置id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 名称。

- 长度不超过 64字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 机器组id列表。最多支持100个机器组。
                     */
                    std::vector<std::string> m_machineGroupIds;
                    bool m_machineGroupIdsHasBeenSet;

                    /**
                     * 采集频率。单位:ms。 最小支持5000ms
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 采集项。支持"cpu"，"mem"，"net"，"disk"，"system"。**目前仅支持:所有采集项都需配置**。
- cpu：CPU
- mem：内存
- net：网络
- disk：磁盘
- system：系统

                     */
                    std::vector<HostMetricItem> m_hostMetricItems;
                    bool m_hostMetricItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYHOSTMETRICCONFIGREQUEST_H_
