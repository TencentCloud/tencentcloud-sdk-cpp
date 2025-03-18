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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPEJSONPARSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPEJSONPARSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 标准pod对象类型下拉数据的解析
                */
                class ObjectTypeJsonParse : public AbstractModel
                {
                public:
                    ObjectTypeJsonParse();
                    ~ObjectTypeJsonParse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间
                     * @return NameSpace 命名空间
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置命名空间
                     * @param _nameSpace 命名空间
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取工作负载名称
                     * @return WorkloadName 工作负载名称
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置工作负载名称
                     * @param _workloadName 工作负载名称
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取节点IP
                     * @return LanIP 节点IP
                     * 
                     */
                    std::string GetLanIP() const;

                    /**
                     * 设置节点IP
                     * @param _lanIP 节点IP
                     * 
                     */
                    void SetLanIP(const std::string& _lanIP);

                    /**
                     * 判断参数 LanIP 是否已赋值
                     * @return LanIP 是否已赋值
                     * 
                     */
                    bool LanIPHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return InstanceId 节点ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置节点ID
                     * @param _instanceId 节点ID
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
                     * 命名空间
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 工作负载名称
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * 节点IP
                     */
                    std::string m_lanIP;
                    bool m_lanIPHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPEJSONPARSE_H_
