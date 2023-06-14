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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERDETAIL_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 租户RocketMQ集群详细信息
                */
                class RocketMQClusterDetail : public AbstractModel
                {
                public:
                    RocketMQClusterDetail();
                    ~RocketMQClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群基本信息
                     * @return Info 集群基本信息
                     * 
                     */
                    RocketMQClusterInfo GetInfo() const;

                    /**
                     * 设置集群基本信息
                     * @param _info 集群基本信息
                     * 
                     */
                    void SetInfo(const RocketMQClusterInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取集群配置信息
                     * @return Config 集群配置信息
                     * 
                     */
                    RocketMQClusterConfig GetConfig() const;

                    /**
                     * 设置集群配置信息
                     * @param _config 集群配置信息
                     * 
                     */
                    void SetConfig(const RocketMQClusterConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 集群基本信息
                     */
                    RocketMQClusterInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 集群配置信息
                     */
                    RocketMQClusterConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERDETAIL_H_
