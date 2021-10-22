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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWRESOURCEURLINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWRESOURCEURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/ResourceUrlInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 流程对应资源链接信息
                */
                class FlowResourceUrlInfo : public AbstractModel
                {
                public:
                    FlowResourceUrlInfo();
                    ~FlowResourceUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流程对应Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId 流程对应Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程对应Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowId 流程对应Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取流程对应资源链接信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceUrlInfos 流程对应资源链接信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceUrlInfo> GetResourceUrlInfos() const;

                    /**
                     * 设置流程对应资源链接信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceUrlInfos 流程对应资源链接信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceUrlInfos(const std::vector<ResourceUrlInfo>& _resourceUrlInfos);

                    /**
                     * 判断参数 ResourceUrlInfos 是否已赋值
                     * @return ResourceUrlInfos 是否已赋值
                     */
                    bool ResourceUrlInfosHasBeenSet() const;

                private:

                    /**
                     * 流程对应Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流程对应资源链接信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceUrlInfo> m_resourceUrlInfos;
                    bool m_resourceUrlInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWRESOURCEURLINFO_H_
