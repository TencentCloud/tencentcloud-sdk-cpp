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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTECTTHRESHOLDCONFIGRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTECTTHRESHOLDCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ProtectThresholdRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListProtectThresholdConfig返回参数结构体
                */
                class DescribeListProtectThresholdConfigResponse : public AbstractModel
                {
                public:
                    DescribeListProtectThresholdConfigResponse();
                    ~DescribeListProtectThresholdConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总记录数
                     * @return Total 总记录数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取防护阈值配置列表
                     * @return ConfigList 防护阈值配置列表
                     * 
                     */
                    std::vector<ProtectThresholdRelation> GetConfigList() const;

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 防护阈值配置列表
                     */
                    std::vector<ProtectThresholdRelation> m_configList;
                    bool m_configListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTECTTHRESHOLDCONFIGRESPONSE_H_
