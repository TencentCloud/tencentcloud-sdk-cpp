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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYMACHINEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYMACHINEINFO_H_

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
                * proxy机器信息
                */
                class ProxyMachineInfo : public AbstractModel
                {
                public:
                    ProxyMachineInfo();
                    ~ProxyMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一id
                     * @return ProxyUid 唯一id
                     * 
                     */
                    std::string GetProxyUid() const;

                    /**
                     * 设置唯一id
                     * @param _proxyUid 唯一id
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
                     * 获取可分配proxy资源数
                     * @return AvailableCount 可分配proxy资源数
                     * 
                     */
                    int64_t GetAvailableCount() const;

                    /**
                     * 设置可分配proxy资源数
                     * @param _availableCount 可分配proxy资源数
                     * 
                     */
                    void SetAvailableCount(const int64_t& _availableCount);

                    /**
                     * 判断参数 AvailableCount 是否已赋值
                     * @return AvailableCount 是否已赋值
                     * 
                     */
                    bool AvailableCountHasBeenSet() const;

                private:

                    /**
                     * 唯一id
                     */
                    std::string m_proxyUid;
                    bool m_proxyUidHasBeenSet;

                    /**
                     * 机器类型
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 可分配proxy资源数
                     */
                    int64_t m_availableCount;
                    bool m_availableCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYMACHINEINFO_H_
