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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeImportMachineInfo请求参数结构体
                */
                class DescribeImportMachineInfoRequest : public AbstractModel
                {
                public:
                    DescribeImportMachineInfoRequest();
                    ~DescribeImportMachineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器内网IP（默认）/ 服务器名称 / 服务器ID 数组 (最大 1000条)
                     * @return MachineList 服务器内网IP（默认）/ 服务器名称 / 服务器ID 数组 (最大 1000条)
                     * 
                     */
                    std::vector<std::string> GetMachineList() const;

                    /**
                     * 设置服务器内网IP（默认）/ 服务器名称 / 服务器ID 数组 (最大 1000条)
                     * @param _machineList 服务器内网IP（默认）/ 服务器名称 / 服务器ID 数组 (最大 1000条)
                     * 
                     */
                    void SetMachineList(const std::vector<std::string>& _machineList);

                    /**
                     * 判断参数 MachineList 是否已赋值
                     * @return MachineList 是否已赋值
                     * 
                     */
                    bool MachineListHasBeenSet() const;

                    /**
                     * 获取批量导入的数据类型：Ip、Name、Id 三选一
                     * @return ImportType 批量导入的数据类型：Ip、Name、Id 三选一
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置批量导入的数据类型：Ip、Name、Id 三选一
                     * @param _importType 批量导入的数据类型：Ip、Name、Id 三选一
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取该参数已作废.
                     * @return IsQueryProMachine 该参数已作废.
                     * 
                     */
                    bool GetIsQueryProMachine() const;

                    /**
                     * 设置该参数已作废.
                     * @param _isQueryProMachine 该参数已作废.
                     * 
                     */
                    void SetIsQueryProMachine(const bool& _isQueryProMachine);

                    /**
                     * 判断参数 IsQueryProMachine 是否已赋值
                     * @return IsQueryProMachine 是否已赋值
                     * 
                     */
                    bool IsQueryProMachineHasBeenSet() const;

                    /**
                     * 获取过滤条件：<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship：旗舰版 | ProtectedMachines：专业版+旗舰版） | BASIC_PROPOST_GENERAL_DISCOUNT：轻量版+专业版按量计费+基础版主机 | UnFlagship：专业版预付费+专业版后付费+基础版+轻量版</li>
                     * @return Filters 过滤条件：<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship：旗舰版 | ProtectedMachines：专业版+旗舰版） | BASIC_PROPOST_GENERAL_DISCOUNT：轻量版+专业版按量计费+基础版主机 | UnFlagship：专业版预付费+专业版后付费+基础版+轻量版</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件：<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship：旗舰版 | ProtectedMachines：专业版+旗舰版） | BASIC_PROPOST_GENERAL_DISCOUNT：轻量版+专业版按量计费+基础版主机 | UnFlagship：专业版预付费+专业版后付费+基础版+轻量版</li>
                     * @param _filters 过滤条件：<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship：旗舰版 | ProtectedMachines：专业版+旗舰版） | BASIC_PROPOST_GENERAL_DISCOUNT：轻量版+专业版按量计费+基础版主机 | UnFlagship：专业版预付费+专业版后付费+基础版+轻量版</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 服务器内网IP（默认）/ 服务器名称 / 服务器ID 数组 (最大 1000条)
                     */
                    std::vector<std::string> m_machineList;
                    bool m_machineListHasBeenSet;

                    /**
                     * 批量导入的数据类型：Ip、Name、Id 三选一
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * 该参数已作废.
                     */
                    bool m_isQueryProMachine;
                    bool m_isQueryProMachineHasBeenSet;

                    /**
                     * 过滤条件：<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship：旗舰版 | ProtectedMachines：专业版+旗舰版） | BASIC_PROPOST_GENERAL_DISCOUNT：轻量版+专业版按量计费+基础版主机 | UnFlagship：专业版预付费+专业版后付费+基础版+轻量版</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFOREQUEST_H_
