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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DiagnoseInstance请求参数结构体
                */
                class DiagnoseInstanceRequest : public AbstractModel
                {
                public:
                    DiagnoseInstanceRequest();
                    ~DiagnoseInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES实例ID
                     * @return InstanceId ES实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES实例ID
                     * @param _instanceId ES实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取需要触发的诊断项
                     * @return DiagnoseJobs 需要触发的诊断项
                     * 
                     */
                    std::vector<std::string> GetDiagnoseJobs() const;

                    /**
                     * 设置需要触发的诊断项
                     * @param _diagnoseJobs 需要触发的诊断项
                     * 
                     */
                    void SetDiagnoseJobs(const std::vector<std::string>& _diagnoseJobs);

                    /**
                     * 判断参数 DiagnoseJobs 是否已赋值
                     * @return DiagnoseJobs 是否已赋值
                     * 
                     */
                    bool DiagnoseJobsHasBeenSet() const;

                    /**
                     * 获取需要诊断的索引，支持通配符
                     * @return DiagnoseIndices 需要诊断的索引，支持通配符
                     * 
                     */
                    std::string GetDiagnoseIndices() const;

                    /**
                     * 设置需要诊断的索引，支持通配符
                     * @param _diagnoseIndices 需要诊断的索引，支持通配符
                     * 
                     */
                    void SetDiagnoseIndices(const std::string& _diagnoseIndices);

                    /**
                     * 判断参数 DiagnoseIndices 是否已赋值
                     * @return DiagnoseIndices 是否已赋值
                     * 
                     */
                    bool DiagnoseIndicesHasBeenSet() const;

                private:

                    /**
                     * ES实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要触发的诊断项
                     */
                    std::vector<std::string> m_diagnoseJobs;
                    bool m_diagnoseJobsHasBeenSet;

                    /**
                     * 需要诊断的索引，支持通配符
                     */
                    std::string m_diagnoseIndices;
                    bool m_diagnoseIndicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEINSTANCEREQUEST_H_
