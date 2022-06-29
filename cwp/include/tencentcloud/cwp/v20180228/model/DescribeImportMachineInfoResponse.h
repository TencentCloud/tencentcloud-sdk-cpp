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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/EffectiveMachineInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeImportMachineInfo返回参数结构体
                */
                class DescribeImportMachineInfoResponse : public AbstractModel
                {
                public:
                    DescribeImportMachineInfoResponse();
                    ~DescribeImportMachineInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有效的机器信息列表：机器名称、机器公网/内网ip、机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectiveMachineInfoList 有效的机器信息列表：机器名称、机器公网/内网ip、机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EffectiveMachineInfo> GetEffectiveMachineInfoList() const;

                    /**
                     * 判断参数 EffectiveMachineInfoList 是否已赋值
                     * @return EffectiveMachineInfoList 是否已赋值
                     */
                    bool EffectiveMachineInfoListHasBeenSet() const;

                    /**
                     * 获取用户批量导入失败的机器列表（例如机器不存在等...）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidMachineList 用户批量导入失败的机器列表（例如机器不存在等...）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetInvalidMachineList() const;

                    /**
                     * 判断参数 InvalidMachineList 是否已赋值
                     * @return InvalidMachineList 是否已赋值
                     */
                    bool InvalidMachineListHasBeenSet() const;

                private:

                    /**
                     * 有效的机器信息列表：机器名称、机器公网/内网ip、机器标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EffectiveMachineInfo> m_effectiveMachineInfoList;
                    bool m_effectiveMachineInfoListHasBeenSet;

                    /**
                     * 用户批量导入失败的机器列表（例如机器不存在等...）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_invalidMachineList;
                    bool m_invalidMachineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFORESPONSE_H_
