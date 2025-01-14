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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNBACKEND_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 冷热分层backend节点信息
                */
                class CoolDownBackend : public AbstractModel
                {
                public:
                    CoolDownBackend();
                    ~CoolDownBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段：Host
                     * @return Host 字段：Host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置字段：Host
                     * @param _host 字段：Host
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取字段：DataUsedCapacity
                     * @return DataUsedCapacity 字段：DataUsedCapacity
                     * 
                     */
                    std::string GetDataUsedCapacity() const;

                    /**
                     * 设置字段：DataUsedCapacity
                     * @param _dataUsedCapacity 字段：DataUsedCapacity
                     * 
                     */
                    void SetDataUsedCapacity(const std::string& _dataUsedCapacity);

                    /**
                     * 判断参数 DataUsedCapacity 是否已赋值
                     * @return DataUsedCapacity 是否已赋值
                     * 
                     */
                    bool DataUsedCapacityHasBeenSet() const;

                    /**
                     * 获取字段：TotalCapacity
                     * @return TotalCapacity 字段：TotalCapacity
                     * 
                     */
                    std::string GetTotalCapacity() const;

                    /**
                     * 设置字段：TotalCapacity
                     * @param _totalCapacity 字段：TotalCapacity
                     * 
                     */
                    void SetTotalCapacity(const std::string& _totalCapacity);

                    /**
                     * 判断参数 TotalCapacity 是否已赋值
                     * @return TotalCapacity 是否已赋值
                     * 
                     */
                    bool TotalCapacityHasBeenSet() const;

                    /**
                     * 获取字段：RemoteUsedCapacity
                     * @return RemoteUsedCapacity 字段：RemoteUsedCapacity
                     * 
                     */
                    std::string GetRemoteUsedCapacity() const;

                    /**
                     * 设置字段：RemoteUsedCapacity
                     * @param _remoteUsedCapacity 字段：RemoteUsedCapacity
                     * 
                     */
                    void SetRemoteUsedCapacity(const std::string& _remoteUsedCapacity);

                    /**
                     * 判断参数 RemoteUsedCapacity 是否已赋值
                     * @return RemoteUsedCapacity 是否已赋值
                     * 
                     */
                    bool RemoteUsedCapacityHasBeenSet() const;

                private:

                    /**
                     * 字段：Host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 字段：DataUsedCapacity
                     */
                    std::string m_dataUsedCapacity;
                    bool m_dataUsedCapacityHasBeenSet;

                    /**
                     * 字段：TotalCapacity
                     */
                    std::string m_totalCapacity;
                    bool m_totalCapacityHasBeenSet;

                    /**
                     * 字段：RemoteUsedCapacity
                     */
                    std::string m_remoteUsedCapacity;
                    bool m_remoteUsedCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNBACKEND_H_
