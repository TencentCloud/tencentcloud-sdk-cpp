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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICASTATUS_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICASTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DCN的状态信息
                */
                class DCNReplicaStatus : public AbstractModel
                {
                public:
                    DCNReplicaStatus();
                    ~DCNReplicaStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DCN 的运行状态，START为正常运行，STOP为暂停，
                     * @return Status DCN 的运行状态，START为正常运行，STOP为暂停，
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DCN 的运行状态，START为正常运行，STOP为暂停，
                     * @param _status DCN 的运行状态，START为正常运行，STOP为暂停，
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
                     * 获取当前延迟情况，取备实例的 master 节点的 delay 值
                     * @return Delay 当前延迟情况，取备实例的 master 节点的 delay 值
                     * 
                     */
                    int64_t GetDelay() const;

                    /**
                     * 设置当前延迟情况，取备实例的 master 节点的 delay 值
                     * @param _delay 当前延迟情况，取备实例的 master 节点的 delay 值
                     * 
                     */
                    void SetDelay(const int64_t& _delay);

                    /**
                     * 判断参数 Delay 是否已赋值
                     * @return Delay 是否已赋值
                     * 
                     */
                    bool DelayHasBeenSet() const;

                private:

                    /**
                     * DCN 的运行状态，START为正常运行，STOP为暂停，
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前延迟情况，取备实例的 master 节点的 delay 值
                     */
                    int64_t m_delay;
                    bool m_delayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICASTATUS_H_
