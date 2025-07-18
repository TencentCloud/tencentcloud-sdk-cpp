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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INSTANCEJUMBO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INSTANCEJUMBO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云服务器巨帧状态
                */
                class InstanceJumbo : public AbstractModel
                {
                public:
                    InstanceJumbo();
                    ~InstanceJumbo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例是否支持巨帧。
                     * @return JumboState 实例是否支持巨帧。
                     * 
                     */
                    bool GetJumboState() const;

                    /**
                     * 设置实例是否支持巨帧。
                     * @param _jumboState 实例是否支持巨帧。
                     * 
                     */
                    void SetJumboState(const bool& _jumboState);

                    /**
                     * 判断参数 JumboState 是否已赋值
                     * @return JumboState 是否已赋值
                     * 
                     */
                    bool JumboStateHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例是否支持巨帧。
                     */
                    bool m_jumboState;
                    bool m_jumboStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INSTANCEJUMBO_H_
