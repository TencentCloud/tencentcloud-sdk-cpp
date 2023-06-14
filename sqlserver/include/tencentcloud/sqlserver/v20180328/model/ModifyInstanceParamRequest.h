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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/Parameter.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
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
                     * 获取实例短 ID 列表
                     * @return InstanceIds 实例短 ID 列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例短 ID 列表
                     * @param _instanceIds 实例短 ID 列表
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
                     * 获取要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改的值。<b>注意</b>：如果修改的参数需要<b>重启</b>实例，那么您的实例将会在执行修改时<b>重启</b>。您可以通过DescribeInstanceParams接口查询修改参数时是否会重启实例，以免导致您的实例不符合预期重启。
                     * @return ParamList 要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改的值。<b>注意</b>：如果修改的参数需要<b>重启</b>实例，那么您的实例将会在执行修改时<b>重启</b>。您可以通过DescribeInstanceParams接口查询修改参数时是否会重启实例，以免导致您的实例不符合预期重启。
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改的值。<b>注意</b>：如果修改的参数需要<b>重启</b>实例，那么您的实例将会在执行修改时<b>重启</b>。您可以通过DescribeInstanceParams接口查询修改参数时是否会重启实例，以免导致您的实例不符合预期重启。
                     * @param _paramList 要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改的值。<b>注意</b>：如果修改的参数需要<b>重启</b>实例，那么您的实例将会在执行修改时<b>重启</b>。您可以通过DescribeInstanceParams接口查询修改参数时是否会重启实例，以免导致您的实例不符合预期重启。
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
                     * 获取执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行。
                     * @return WaitSwitch 执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行。
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行。
                     * @param _waitSwitch 执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行。
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                private:

                    /**
                     * 实例短 ID 列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 要修改的参数列表。每一个元素是 Name 和 CurrentValue 的组合。Name 是参数名，CurrentValue 是要修改的值。<b>注意</b>：如果修改的参数需要<b>重启</b>实例，那么您的实例将会在执行修改时<b>重启</b>。您可以通过DescribeInstanceParams接口查询修改参数时是否会重启实例，以免导致您的实例不符合预期重启。
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * 执行参数调整任务的方式，默认为 0。支持值包括：0 - 立刻执行，1 - 时间窗执行。
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
