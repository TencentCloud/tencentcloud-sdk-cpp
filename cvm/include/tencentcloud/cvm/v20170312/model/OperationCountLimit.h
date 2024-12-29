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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_OPERATIONCOUNTLIMIT_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_OPERATIONCOUNTLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了单台实例操作次数限制
                */
                class OperationCountLimit : public AbstractModel
                {
                public:
                    OperationCountLimit();
                    ~OperationCountLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例操作。取值范围：<br><li>`INSTANCE_DEGRADE`：降配操作</li><li>`INTERNET_CHARGE_TYPE_CHANGE`：修改网络带宽计费模式</li>
                     * @return Operation 实例操作。取值范围：<br><li>`INSTANCE_DEGRADE`：降配操作</li><li>`INTERNET_CHARGE_TYPE_CHANGE`：修改网络带宽计费模式</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置实例操作。取值范围：<br><li>`INSTANCE_DEGRADE`：降配操作</li><li>`INTERNET_CHARGE_TYPE_CHANGE`：修改网络带宽计费模式</li>
                     * @param _operation 实例操作。取值范围：<br><li>`INSTANCE_DEGRADE`：降配操作</li><li>`INTERNET_CHARGE_TYPE_CHANGE`：修改网络带宽计费模式</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

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
                     * 获取当前已使用次数，如果返回值为-1表示该操作无次数限制。
                     * @return CurrentCount 当前已使用次数，如果返回值为-1表示该操作无次数限制。
                     * 
                     */
                    int64_t GetCurrentCount() const;

                    /**
                     * 设置当前已使用次数，如果返回值为-1表示该操作无次数限制。
                     * @param _currentCount 当前已使用次数，如果返回值为-1表示该操作无次数限制。
                     * 
                     */
                    void SetCurrentCount(const int64_t& _currentCount);

                    /**
                     * 判断参数 CurrentCount 是否已赋值
                     * @return CurrentCount 是否已赋值
                     * 
                     */
                    bool CurrentCountHasBeenSet() const;

                    /**
                     * 获取操作次数最高额度，如果返回值为-1表示该操作无次数限制，如果返回值为0表示不支持调整配置。
                     * @return LimitCount 操作次数最高额度，如果返回值为-1表示该操作无次数限制，如果返回值为0表示不支持调整配置。
                     * 
                     */
                    int64_t GetLimitCount() const;

                    /**
                     * 设置操作次数最高额度，如果返回值为-1表示该操作无次数限制，如果返回值为0表示不支持调整配置。
                     * @param _limitCount 操作次数最高额度，如果返回值为-1表示该操作无次数限制，如果返回值为0表示不支持调整配置。
                     * 
                     */
                    void SetLimitCount(const int64_t& _limitCount);

                    /**
                     * 判断参数 LimitCount 是否已赋值
                     * @return LimitCount 是否已赋值
                     * 
                     */
                    bool LimitCountHasBeenSet() const;

                private:

                    /**
                     * 实例操作。取值范围：<br><li>`INSTANCE_DEGRADE`：降配操作</li><li>`INTERNET_CHARGE_TYPE_CHANGE`：修改网络带宽计费模式</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 当前已使用次数，如果返回值为-1表示该操作无次数限制。
                     */
                    int64_t m_currentCount;
                    bool m_currentCountHasBeenSet;

                    /**
                     * 操作次数最高额度，如果返回值为-1表示该操作无次数限制，如果返回值为0表示不支持调整配置。
                     */
                    int64_t m_limitCount;
                    bool m_limitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_OPERATIONCOUNTLIMIT_H_
