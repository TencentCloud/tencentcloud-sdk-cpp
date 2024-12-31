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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTBASICRESTARTINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTBASICRESTARTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 操作的进程范围
                */
                class ComponentBasicRestartInfo : public AbstractModel
                {
                public:
                    ComponentBasicRestartInfo();
                    ~ComponentBasicRestartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程名，必填，如NameNode
                     * @return ComponentName 进程名，必填，如NameNode
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置进程名，必填，如NameNode
                     * @param _componentName 进程名，必填，如NameNode
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取操作的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpList 操作的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置操作的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipList 操作的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * 进程名，必填，如NameNode
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 操作的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTBASICRESTARTINFO_H_
