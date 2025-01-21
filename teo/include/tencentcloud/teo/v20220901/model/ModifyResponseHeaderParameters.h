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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRESPONSEHEADERPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRESPONSEHEADERPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HeaderAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 修改 HTTP 节点响应头配置参数。
                */
                class ModifyResponseHeaderParameters : public AbstractModel
                {
                public:
                    ModifyResponseHeaderParameters();
                    ~ModifyResponseHeaderParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP 回源头部规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderActions HTTP 回源头部规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HeaderAction> GetHeaderActions() const;

                    /**
                     * 设置HTTP 回源头部规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerActions HTTP 回源头部规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderActions(const std::vector<HeaderAction>& _headerActions);

                    /**
                     * 判断参数 HeaderActions 是否已赋值
                     * @return HeaderActions 是否已赋值
                     * 
                     */
                    bool HeaderActionsHasBeenSet() const;

                private:

                    /**
                     * HTTP 回源头部规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HeaderAction> m_headerActions;
                    bool m_headerActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRESPONSEHEADERPARAMETERS_H_
