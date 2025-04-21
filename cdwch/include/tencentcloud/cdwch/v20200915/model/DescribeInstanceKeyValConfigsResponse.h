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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEKEYVALCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEKEYVALCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceConfigInfo.h>
#include <tencentcloud/cdwch/v20200915/model/MapConfigItem.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeInstanceKeyValConfigs返回参数结构体
                */
                class DescribeInstanceKeyValConfigsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceKeyValConfigsResponse();
                    ~DescribeInstanceKeyValConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参数列表
                     * @return ConfigItems 参数列表
                     * 
                     */
                    std::vector<InstanceConfigInfo> GetConfigItems() const;

                    /**
                     * 判断参数 ConfigItems 是否已赋值
                     * @return ConfigItems 是否已赋值
                     * 
                     */
                    bool ConfigItemsHasBeenSet() const;

                    /**
                     * 获取未配置的参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnConfigItems 未配置的参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceConfigInfo> GetUnConfigItems() const;

                    /**
                     * 判断参数 UnConfigItems 是否已赋值
                     * @return UnConfigItems 是否已赋值
                     * 
                     */
                    bool UnConfigItemsHasBeenSet() const;

                    /**
                     * 获取配置的多层级参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MapConfigItems 配置的多层级参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MapConfigItem> GetMapConfigItems() const;

                    /**
                     * 判断参数 MapConfigItems 是否已赋值
                     * @return MapConfigItems 是否已赋值
                     * 
                     */
                    bool MapConfigItemsHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 参数列表
                     */
                    std::vector<InstanceConfigInfo> m_configItems;
                    bool m_configItemsHasBeenSet;

                    /**
                     * 未配置的参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceConfigInfo> m_unConfigItems;
                    bool m_unConfigItemsHasBeenSet;

                    /**
                     * 配置的多层级参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MapConfigItem> m_mapConfigItems;
                    bool m_mapConfigItemsHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEKEYVALCONFIGSRESPONSE_H_
