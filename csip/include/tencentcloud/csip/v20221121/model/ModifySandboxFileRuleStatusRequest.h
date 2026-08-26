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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXFILERULESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXFILERULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifySandboxFileRuleStatus请求参数结构体
                */
                class ModifySandboxFileRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifySandboxFileRuleStatusRequest();
                    ~ModifySandboxFileRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则 ID 列表<br>入参限制：非空，长度 1-100</p>
                     * @return IDList <p>规则 ID 列表<br>入参限制：非空，长度 1-100</p>
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置<p>规则 ID 列表<br>入参限制：非空，长度 1-100</p>
                     * @param _iDList <p>规则 ID 列表<br>入参限制：非空，长度 1-100</p>
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                    /**
                     * 获取<p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * @return Status <p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * @param _status <p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>规则 ID 列表<br>入参限制：非空，长度 1-100</p>
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                    /**
                     * <p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXFILERULESTATUSREQUEST_H_
