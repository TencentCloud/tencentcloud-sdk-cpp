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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTDIFFTASKWEBURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTDIFFTASKWEBURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FormatConfigs.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeContractDiffTaskWebUrl请求参数结构体
                */
                class DescribeContractDiffTaskWebUrlRequest : public AbstractModel
                {
                public:
                    DescribeContractDiffTaskWebUrlRequest();
                    ~DescribeContractDiffTaskWebUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>合同对比任务ID，该参数通过调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/CreateContractDiffTaskWebUrl" target="_blank">创建合同对比web页面</a>获取。</p>
                     * @return TaskId <p>合同对比任务ID，该参数通过调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/CreateContractDiffTaskWebUrl" target="_blank">创建合同对比web页面</a>获取。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>合同对比任务ID，该参数通过调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/CreateContractDiffTaskWebUrl" target="_blank">创建合同对比web页面</a>获取。</p>
                     * @param _taskId <p>合同对比任务ID，该参数通过调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/CreateContractDiffTaskWebUrl" target="_blank">创建合同对比web页面</a>获取。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤项列表，获取合同对比结果根据此过滤项列表进行过滤展示。<br>注：</p><ul><li>参数不传，默认根据该用户的过滤项配置进行展示。</li><li>参数传空数组，不过滤合同对比结果。</li><li>参数传过滤项列表，根据过滤项列表对合同对比结果进行过滤展示。</li></ul>
                     * @return FormatConfigs <p>过滤项列表，获取合同对比结果根据此过滤项列表进行过滤展示。<br>注：</p><ul><li>参数不传，默认根据该用户的过滤项配置进行展示。</li><li>参数传空数组，不过滤合同对比结果。</li><li>参数传过滤项列表，根据过滤项列表对合同对比结果进行过滤展示。</li></ul>
                     * 
                     */
                    FormatConfigs GetFormatConfigs() const;

                    /**
                     * 设置<p>过滤项列表，获取合同对比结果根据此过滤项列表进行过滤展示。<br>注：</p><ul><li>参数不传，默认根据该用户的过滤项配置进行展示。</li><li>参数传空数组，不过滤合同对比结果。</li><li>参数传过滤项列表，根据过滤项列表对合同对比结果进行过滤展示。</li></ul>
                     * @param _formatConfigs <p>过滤项列表，获取合同对比结果根据此过滤项列表进行过滤展示。<br>注：</p><ul><li>参数不传，默认根据该用户的过滤项配置进行展示。</li><li>参数传空数组，不过滤合同对比结果。</li><li>参数传过滤项列表，根据过滤项列表对合同对比结果进行过滤展示。</li></ul>
                     * 
                     */
                    void SetFormatConfigs(const FormatConfigs& _formatConfigs);

                    /**
                     * 判断参数 FormatConfigs 是否已赋值
                     * @return FormatConfigs 是否已赋值
                     * 
                     */
                    bool FormatConfigsHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。</p><p>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同对比任务ID，该参数通过调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/CreateContractDiffTaskWebUrl" target="_blank">创建合同对比web页面</a>获取。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>过滤项列表，获取合同对比结果根据此过滤项列表进行过滤展示。<br>注：</p><ul><li>参数不传，默认根据该用户的过滤项配置进行展示。</li><li>参数传空数组，不过滤合同对比结果。</li><li>参数传过滤项列表，根据过滤项列表对合同对比结果进行过滤展示。</li></ul>
                     */
                    FormatConfigs m_formatConfigs;
                    bool m_formatConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTDIFFTASKWEBURLREQUEST_H_
