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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEXPORTCONFSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEXPORTCONFSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ExportConfContext.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeExportConfs请求参数结构体
                */
                class DescribeExportConfsRequest : public AbstractModel
                {
                public:
                    DescribeExportConfsRequest();
                    ~DescribeExportConfsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>指定需要导出的配置</p>
                     * @return ExportConfContexts <p>指定需要导出的配置</p>
                     * 
                     */
                    std::vector<ExportConfContext> GetExportConfContexts() const;

                    /**
                     * 设置<p>指定需要导出的配置</p>
                     * @param _exportConfContexts <p>指定需要导出的配置</p>
                     * 
                     */
                    void SetExportConfContexts(const std::vector<ExportConfContext>& _exportConfContexts);

                    /**
                     * 判断参数 ExportConfContexts 是否已赋值
                     * @return ExportConfContexts 是否已赋值
                     * 
                     */
                    bool ExportConfContextsHasBeenSet() const;

                    /**
                     * 获取<p>导出类型</p><p>枚举值：</p><ul><li>0： 全部配置</li><li>1： 只导出自定义和修改过的配置</li></ul>
                     * @return ExportType <p>导出类型</p><p>枚举值：</p><ul><li>0： 全部配置</li><li>1： 只导出自定义和修改过的配置</li></ul>
                     * 
                     */
                    int64_t GetExportType() const;

                    /**
                     * 设置<p>导出类型</p><p>枚举值：</p><ul><li>0： 全部配置</li><li>1： 只导出自定义和修改过的配置</li></ul>
                     * @param _exportType <p>导出类型</p><p>枚举值：</p><ul><li>0： 全部配置</li><li>1： 只导出自定义和修改过的配置</li></ul>
                     * 
                     */
                    void SetExportType(const int64_t& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点ip</p>
                     * @return Ip <p>节点ip</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>节点ip</p>
                     * @param _ip <p>节点ip</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>配置组名称</p>
                     * @return ConfGroupName <p>配置组名称</p>
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置<p>配置组名称</p>
                     * @param _confGroupName <p>配置组名称</p>
                     * 
                     */
                    void SetConfGroupName(const std::string& _confGroupName);

                    /**
                     * 判断参数 ConfGroupName 是否已赋值
                     * @return ConfGroupName 是否已赋值
                     * 
                     */
                    bool ConfGroupNameHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定需要导出的配置</p>
                     */
                    std::vector<ExportConfContext> m_exportConfContexts;
                    bool m_exportConfContextsHasBeenSet;

                    /**
                     * <p>导出类型</p><p>枚举值：</p><ul><li>0： 全部配置</li><li>1： 只导出自定义和修改过的配置</li></ul>
                     */
                    int64_t m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * <p>节点ip</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>配置组名称</p>
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEXPORTCONFSREQUEST_H_
