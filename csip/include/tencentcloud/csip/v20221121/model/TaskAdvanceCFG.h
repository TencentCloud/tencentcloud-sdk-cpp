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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKADVANCECFG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKADVANCECFG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/PortRiskAdvanceCFGParamItem.h>
#include <tencentcloud/csip/v20221121/model/TaskCenterVulRiskInputParam.h>
#include <tencentcloud/csip/v20221121/model/TaskCenterWeakPwdRiskInputParam.h>
#include <tencentcloud/csip/v20221121/model/TaskCenterCFGRiskInputParam.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 任务高级配置
                */
                class TaskAdvanceCFG : public AbstractModel
                {
                public:
                    TaskAdvanceCFG();
                    ~TaskAdvanceCFG() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口风险高级配置
                     * @return PortRisk 端口风险高级配置
                     * 
                     */
                    std::vector<PortRiskAdvanceCFGParamItem> GetPortRisk() const;

                    /**
                     * 设置端口风险高级配置
                     * @param _portRisk 端口风险高级配置
                     * 
                     */
                    void SetPortRisk(const std::vector<PortRiskAdvanceCFGParamItem>& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取漏洞风险高级配置
                     * @return VulRisk 漏洞风险高级配置
                     * 
                     */
                    std::vector<TaskCenterVulRiskInputParam> GetVulRisk() const;

                    /**
                     * 设置漏洞风险高级配置
                     * @param _vulRisk 漏洞风险高级配置
                     * 
                     */
                    void SetVulRisk(const std::vector<TaskCenterVulRiskInputParam>& _vulRisk);

                    /**
                     * 判断参数 VulRisk 是否已赋值
                     * @return VulRisk 是否已赋值
                     * 
                     */
                    bool VulRiskHasBeenSet() const;

                    /**
                     * 获取弱口令风险高级配置
                     * @return WeakPwdRisk 弱口令风险高级配置
                     * 
                     */
                    std::vector<TaskCenterWeakPwdRiskInputParam> GetWeakPwdRisk() const;

                    /**
                     * 设置弱口令风险高级配置
                     * @param _weakPwdRisk 弱口令风险高级配置
                     * 
                     */
                    void SetWeakPwdRisk(const std::vector<TaskCenterWeakPwdRiskInputParam>& _weakPwdRisk);

                    /**
                     * 判断参数 WeakPwdRisk 是否已赋值
                     * @return WeakPwdRisk 是否已赋值
                     * 
                     */
                    bool WeakPwdRiskHasBeenSet() const;

                    /**
                     * 获取配置风险高级配置
                     * @return CFGRisk 配置风险高级配置
                     * 
                     */
                    std::vector<TaskCenterCFGRiskInputParam> GetCFGRisk() const;

                    /**
                     * 设置配置风险高级配置
                     * @param _cFGRisk 配置风险高级配置
                     * 
                     */
                    void SetCFGRisk(const std::vector<TaskCenterCFGRiskInputParam>& _cFGRisk);

                    /**
                     * 判断参数 CFGRisk 是否已赋值
                     * @return CFGRisk 是否已赋值
                     * 
                     */
                    bool CFGRiskHasBeenSet() const;

                private:

                    /**
                     * 端口风险高级配置
                     */
                    std::vector<PortRiskAdvanceCFGParamItem> m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * 漏洞风险高级配置
                     */
                    std::vector<TaskCenterVulRiskInputParam> m_vulRisk;
                    bool m_vulRiskHasBeenSet;

                    /**
                     * 弱口令风险高级配置
                     */
                    std::vector<TaskCenterWeakPwdRiskInputParam> m_weakPwdRisk;
                    bool m_weakPwdRiskHasBeenSet;

                    /**
                     * 配置风险高级配置
                     */
                    std::vector<TaskCenterCFGRiskInputParam> m_cFGRisk;
                    bool m_cFGRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKADVANCECFG_H_
