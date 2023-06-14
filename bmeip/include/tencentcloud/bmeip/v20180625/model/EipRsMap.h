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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPRSMAP_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPRSMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * EipId与InstanceId绑定关系
                */
                class EipRsMap : public AbstractModel
                {
                public:
                    EipRsMap();
                    ~EipRsMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EIP实例 ID
                     * @return EipId EIP实例 ID
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置EIP实例 ID
                     * @param _eipId EIP实例 ID
                     * 
                     */
                    void SetEipId(const std::string& _eipId);

                    /**
                     * 判断参数 EipId 是否已赋值
                     * @return EipId 是否已赋值
                     * 
                     */
                    bool EipIdHasBeenSet() const;

                    /**
                     * 获取黑石物理机实例ID
                     * @return InstanceId 黑石物理机实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置黑石物理机实例ID
                     * @param _instanceId 黑石物理机实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * EIP实例 ID
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * 黑石物理机实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPRSMAP_H_
