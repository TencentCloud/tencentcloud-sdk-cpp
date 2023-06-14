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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCEFLOW_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCEFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例开通或者关闭互通组后的状态
                */
                class InterInstanceFlow : public AbstractModel
                {
                public:
                    InterInstanceFlow();
                    ~InterInstanceFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID，例如：mssql-sdf32n1d
                     * @return InstanceId 实例ID，例如：mssql-sdf32n1d
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，例如：mssql-sdf32n1d
                     * @param _instanceId 实例ID，例如：mssql-sdf32n1d
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
                     * 获取实例开通或者关闭互通组的流程ID，FlowId小于0-开通或者关闭失败，反之则成功。
                     * @return FlowId 实例开通或者关闭互通组的流程ID，FlowId小于0-开通或者关闭失败，反之则成功。
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置实例开通或者关闭互通组的流程ID，FlowId小于0-开通或者关闭失败，反之则成功。
                     * @param _flowId 实例开通或者关闭互通组的流程ID，FlowId小于0-开通或者关闭失败，反之则成功。
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID，例如：mssql-sdf32n1d
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例开通或者关闭互通组的流程ID，FlowId小于0-开通或者关闭失败，反之则成功。
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCEFLOW_H_
