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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYDETAILINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYDETAILINFO_H_

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
                * 独占的proxy详细信息
                */
                class ProxyDetailInfo : public AbstractModel
                {
                public:
                    ProxyDetailInfo();
                    ~ProxyDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取proxy的唯一id
                     * @return ProxyUid proxy的唯一id
                     * 
                     */
                    std::string GetProxyUid() const;

                    /**
                     * 设置proxy的唯一id
                     * @param _proxyUid proxy的唯一id
                     * 
                     */
                    void SetProxyUid(const std::string& _proxyUid);

                    /**
                     * 判断参数 ProxyUid 是否已赋值
                     * @return ProxyUid 是否已赋值
                     * 
                     */
                    bool ProxyUidHasBeenSet() const;

                    /**
                     * 获取机器类型
                     * @return MachineType 机器类型
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器类型
                     * @param _machineType 机器类型
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取请求包速度
                     * @return ProcessSpeed 请求包速度
                     * 
                     */
                    int64_t GetProcessSpeed() const;

                    /**
                     * 设置请求包速度
                     * @param _processSpeed 请求包速度
                     * 
                     */
                    void SetProcessSpeed(const int64_t& _processSpeed);

                    /**
                     * 判断参数 ProcessSpeed 是否已赋值
                     * @return ProcessSpeed 是否已赋值
                     * 
                     */
                    bool ProcessSpeedHasBeenSet() const;

                    /**
                     * 获取请求包时延
                     * @return AverageProcessDelay 请求包时延
                     * 
                     */
                    int64_t GetAverageProcessDelay() const;

                    /**
                     * 设置请求包时延
                     * @param _averageProcessDelay 请求包时延
                     * 
                     */
                    void SetAverageProcessDelay(const int64_t& _averageProcessDelay);

                    /**
                     * 判断参数 AverageProcessDelay 是否已赋值
                     * @return AverageProcessDelay 是否已赋值
                     * 
                     */
                    bool AverageProcessDelayHasBeenSet() const;

                    /**
                     * 获取慢处理包速度
                     * @return SlowProcessSpeed 慢处理包速度
                     * 
                     */
                    int64_t GetSlowProcessSpeed() const;

                    /**
                     * 设置慢处理包速度
                     * @param _slowProcessSpeed 慢处理包速度
                     * 
                     */
                    void SetSlowProcessSpeed(const int64_t& _slowProcessSpeed);

                    /**
                     * 判断参数 SlowProcessSpeed 是否已赋值
                     * @return SlowProcessSpeed 是否已赋值
                     * 
                     */
                    bool SlowProcessSpeedHasBeenSet() const;

                    /**
                     * 获取版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * proxy的唯一id
                     */
                    std::string m_proxyUid;
                    bool m_proxyUidHasBeenSet;

                    /**
                     * 机器类型
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 请求包速度
                     */
                    int64_t m_processSpeed;
                    bool m_processSpeedHasBeenSet;

                    /**
                     * 请求包时延
                     */
                    int64_t m_averageProcessDelay;
                    bool m_averageProcessDelayHasBeenSet;

                    /**
                     * 慢处理包速度
                     */
                    int64_t m_slowProcessSpeed;
                    bool m_slowProcessSpeedHasBeenSet;

                    /**
                     * 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYDETAILINFO_H_
