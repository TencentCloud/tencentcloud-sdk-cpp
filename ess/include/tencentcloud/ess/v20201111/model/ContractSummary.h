/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTSUMMARY_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ContractSummaryInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同摘要
                */
                class ContractSummary : public AbstractModel
                {
                public:
                    ContractSummary();
                    ~ContractSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提取内容分类：
Base 合同信息
Identity 主体信息
Performance 履约条款
                     * @return Name 提取内容分类：
Base 合同信息
Identity 主体信息
Performance 履约条款
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置提取内容分类：
Base 合同信息
Identity 主体信息
Performance 履约条款
                     * @param _name 提取内容分类：
Base 合同信息
Identity 主体信息
Performance 履约条款
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取详细信息
                     * @return Infos 详细信息
                     * 
                     */
                    std::vector<ContractSummaryInfo> GetInfos() const;

                    /**
                     * 设置详细信息
                     * @param _infos 详细信息
                     * 
                     */
                    void SetInfos(const std::vector<ContractSummaryInfo>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 提取内容分类：
Base 合同信息
Identity 主体信息
Performance 履约条款
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 详细信息
                     */
                    std::vector<ContractSummaryInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTSUMMARY_H_
