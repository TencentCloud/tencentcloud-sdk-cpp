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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Parameter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyInstanceParam请求参数结构体
                */
                class ModifyInstanceParamRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamRequest();
                    ~ModifyInstanceParamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例短 ID 列表。
                     * @return InstanceIds 实例短 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例短 ID 列表。
                     * @param _instanceIds 实例短 ID 列表。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改成的值。
                     * @return ParamList 要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改成的值。
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改成的值。
                     * @param _paramList 要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改成的值。
                     * 
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取模板id，ParamList和TemplateId必须至少传其中之一
                     * @return TemplateId 模板id，ParamList和TemplateId必须至少传其中之一
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板id，ParamList和TemplateId必须至少传其中之一
                     * @param _templateId 模板id，ParamList和TemplateId必须至少传其中之一
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行；当该值为 1 时，每次只能传一个实例（InstanceIds数量为1）
                     * @return WaitSwitch 执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行；当该值为 1 时，每次只能传一个实例（InstanceIds数量为1）
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行；当该值为 1 时，每次只能传一个实例（InstanceIds数量为1）
                     * @param _waitSwitch 执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行；当该值为 1 时，每次只能传一个实例（InstanceIds数量为1）
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取参数是否同步到主实例下的只读实例。true 为不同步，false 为同步。默认为 false。
                     * @return NotSyncRo 参数是否同步到主实例下的只读实例。true 为不同步，false 为同步。默认为 false。
                     * 
                     */
                    bool GetNotSyncRo() const;

                    /**
                     * 设置参数是否同步到主实例下的只读实例。true 为不同步，false 为同步。默认为 false。
                     * @param _notSyncRo 参数是否同步到主实例下的只读实例。true 为不同步，false 为同步。默认为 false。
                     * 
                     */
                    void SetNotSyncRo(const bool& _notSyncRo);

                    /**
                     * 判断参数 NotSyncRo 是否已赋值
                     * @return NotSyncRo 是否已赋值
                     * 
                     */
                    bool NotSyncRoHasBeenSet() const;

                    /**
                     * 获取参数是否同步到主实例下的灾备实例。true 为不同步，false 为同步。默认为 false。
                     * @return NotSyncDr 参数是否同步到主实例下的灾备实例。true 为不同步，false 为同步。默认为 false。
                     * 
                     */
                    bool GetNotSyncDr() const;

                    /**
                     * 设置参数是否同步到主实例下的灾备实例。true 为不同步，false 为同步。默认为 false。
                     * @param _notSyncDr 参数是否同步到主实例下的灾备实例。true 为不同步，false 为同步。默认为 false。
                     * 
                     */
                    void SetNotSyncDr(const bool& _notSyncDr);

                    /**
                     * 判断参数 NotSyncDr 是否已赋值
                     * @return NotSyncDr 是否已赋值
                     * 
                     */
                    bool NotSyncDrHasBeenSet() const;

                private:

                    /**
                     * 实例短 ID 列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改成的值。
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * 模板id，ParamList和TemplateId必须至少传其中之一
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行；当该值为 1 时，每次只能传一个实例（InstanceIds数量为1）
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * 参数是否同步到主实例下的只读实例。true 为不同步，false 为同步。默认为 false。
                     */
                    bool m_notSyncRo;
                    bool m_notSyncRoHasBeenSet;

                    /**
                     * 参数是否同步到主实例下的灾备实例。true 为不同步，false 为同步。默认为 false。
                     */
                    bool m_notSyncDr;
                    bool m_notSyncDrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
