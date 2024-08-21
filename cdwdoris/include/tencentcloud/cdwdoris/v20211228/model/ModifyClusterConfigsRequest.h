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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYCLUSTERCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYCLUSTERCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ConfigSubmitContext.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyClusterConfigs请求参数结构体
                */
                class ModifyClusterConfigsRequest : public AbstractModel
                {
                public:
                    ModifyClusterConfigsRequest();
                    ~ModifyClusterConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，例如cdwch-xxxx
                     * @return InstanceId 集群ID，例如cdwch-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID，例如cdwch-xxxx
                     * @param _instanceId 集群ID，例如cdwch-xxxx
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
                     * 获取配置文件修改信息
                     * @return ModifyConfContext 配置文件修改信息
                     * 
                     */
                    std::vector<ConfigSubmitContext> GetModifyConfContext() const;

                    /**
                     * 设置配置文件修改信息
                     * @param _modifyConfContext 配置文件修改信息
                     * 
                     */
                    void SetModifyConfContext(const std::vector<ConfigSubmitContext>& _modifyConfContext);

                    /**
                     * 判断参数 ModifyConfContext 是否已赋值
                     * @return ModifyConfContext 是否已赋值
                     * 
                     */
                    bool ModifyConfContextHasBeenSet() const;

                    /**
                     * 获取修改原因
                     * @return Remark 修改原因
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置修改原因
                     * @param _remark 修改原因
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 集群ID，例如cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置文件修改信息
                     */
                    std::vector<ConfigSubmitContext> m_modifyConfContext;
                    bool m_modifyConfContextHasBeenSet;

                    /**
                     * 修改原因
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYCLUSTERCONFIGSREQUEST_H_
