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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CONNECTLIMITRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CONNECTLIMITRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ConnectLimitConfig.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 连接抑制列表
                */
                class ConnectLimitRelation : public AbstractModel
                {
                public:
                    ConnectLimitRelation();
                    ~ConnectLimitRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接抑制配置
                     * @return ConnectLimitConfig 连接抑制配置
                     * 
                     */
                    ConnectLimitConfig GetConnectLimitConfig() const;

                    /**
                     * 设置连接抑制配置
                     * @param _connectLimitConfig 连接抑制配置
                     * 
                     */
                    void SetConnectLimitConfig(const ConnectLimitConfig& _connectLimitConfig);

                    /**
                     * 判断参数 ConnectLimitConfig 是否已赋值
                     * @return ConnectLimitConfig 是否已赋值
                     * 
                     */
                    bool ConnectLimitConfigHasBeenSet() const;

                    /**
                     * 获取连接抑制关联的实例信息
                     * @return InstanceDetailList 连接抑制关联的实例信息
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置连接抑制关联的实例信息
                     * @param _instanceDetailList 连接抑制关联的实例信息
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * 连接抑制配置
                     */
                    ConnectLimitConfig m_connectLimitConfig;
                    bool m_connectLimitConfigHasBeenSet;

                    /**
                     * 连接抑制关联的实例信息
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CONNECTLIMITRELATION_H_
