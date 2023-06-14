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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINEGROUPCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINEGROUPCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConfigInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMachineGroupConfigs返回参数结构体
                */
                class DescribeMachineGroupConfigsResponse : public AbstractModel
                {
                public:
                    DescribeMachineGroupConfigsResponse();
                    ~DescribeMachineGroupConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取采集规则配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configs 采集规则配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConfigInfo> GetConfigs() const;

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * 采集规则配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConfigInfo> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINEGROUPCONFIGSRESPONSE_H_
