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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIGSTATUS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceTypeConfig.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例机型配置信息及状态信息
                */
                class InstanceTypeConfigStatus : public AbstractModel
                {
                public:
                    InstanceTypeConfigStatus();
                    ~InstanceTypeConfigStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态描述
                     * @return Status 状态描述
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态描述
                     * @param _status 状态描述
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
                     * 获取状态描述信息
                     * @return Message 状态描述信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态描述信息
                     * @param _message 状态描述信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取配置信息
                     * @return InstanceTypeConfig 配置信息
                     * 
                     */
                    InstanceTypeConfig GetInstanceTypeConfig() const;

                    /**
                     * 设置配置信息
                     * @param _instanceTypeConfig 配置信息
                     * 
                     */
                    void SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig);

                    /**
                     * 判断参数 InstanceTypeConfig 是否已赋值
                     * @return InstanceTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigHasBeenSet() const;

                private:

                    /**
                     * 状态描述
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 配置信息
                     */
                    InstanceTypeConfig m_instanceTypeConfig;
                    bool m_instanceTypeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCETYPECONFIGSTATUS_H_
