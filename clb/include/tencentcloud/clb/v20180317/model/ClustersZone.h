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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERSZONE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERSZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 集群所在的可用区。
                */
                class ClustersZone : public AbstractModel
                {
                public:
                    ClustersZone();
                    ~ClustersZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群所在的主可用区。
                     * @return MasterZone 集群所在的主可用区。
                     * 
                     */
                    std::vector<std::string> GetMasterZone() const;

                    /**
                     * 设置集群所在的主可用区。
                     * @param _masterZone 集群所在的主可用区。
                     * 
                     */
                    void SetMasterZone(const std::vector<std::string>& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取集群所在的备可用区。
                     * @return SlaveZone 集群所在的备可用区。
                     * 
                     */
                    std::vector<std::string> GetSlaveZone() const;

                    /**
                     * 设置集群所在的备可用区。
                     * @param _slaveZone 集群所在的备可用区。
                     * 
                     */
                    void SetSlaveZone(const std::vector<std::string>& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                private:

                    /**
                     * 集群所在的主可用区。
                     */
                    std::vector<std::string> m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 集群所在的备可用区。
                     */
                    std::vector<std::string> m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERSZONE_H_
