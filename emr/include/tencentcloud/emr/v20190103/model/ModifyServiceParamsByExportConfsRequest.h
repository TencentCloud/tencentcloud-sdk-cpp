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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSERVICEPARAMSBYEXPORTCONFSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSERVICEPARAMSBYEXPORTCONFSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ExportConfMeta.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyServiceParamsByExportConfs请求参数结构体
                */
                class ModifyServiceParamsByExportConfsRequest : public AbstractModel
                {
                public:
                    ModifyServiceParamsByExportConfsRequest();
                    ~ModifyServiceParamsByExportConfsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return InstanceId <p>集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _instanceId <p>集群id</p>
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
                     * 获取<p>导入配置项</p>
                     * @return ExportConfParamList <p>导入配置项</p>
                     * 
                     */
                    std::vector<ExportConfMeta> GetExportConfParamList() const;

                    /**
                     * 设置<p>导入配置项</p>
                     * @param _exportConfParamList <p>导入配置项</p>
                     * 
                     */
                    void SetExportConfParamList(const std::vector<ExportConfMeta>& _exportConfParamList);

                    /**
                     * 判断参数 ExportConfParamList 是否已赋值
                     * @return ExportConfParamList 是否已赋值
                     * 
                     */
                    bool ExportConfParamListHasBeenSet() const;

                    /**
                     * 获取<p>ip</p>
                     * @return IpList <p>ip</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>ip</p>
                     * @param _ipList <p>ip</p>
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取<p>配置组</p>
                     * @return ConfGroupName <p>配置组</p>
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置<p>配置组</p>
                     * @param _confGroupName <p>配置组</p>
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
                     * <p>集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>导入配置项</p>
                     */
                    std::vector<ExportConfMeta> m_exportConfParamList;
                    bool m_exportConfParamListHasBeenSet;

                    /**
                     * <p>ip</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>配置组</p>
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSERVICEPARAMSBYEXPORTCONFSREQUEST_H_
