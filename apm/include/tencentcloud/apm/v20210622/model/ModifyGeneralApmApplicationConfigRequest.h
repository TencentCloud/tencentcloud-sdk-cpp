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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYGENERALAPMAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYGENERALAPMAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyGeneralApmApplicationConfig请求参数结构体
                */
                class ModifyGeneralApmApplicationConfigRequest : public AbstractModel
                {
                public:
                    ModifyGeneralApmApplicationConfigRequest();
                    ~ModifyGeneralApmApplicationConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统Id
                     * @return InstanceId 业务系统Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统Id
                     * @param _instanceId 业务系统Id
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
                     * 获取需要修改的字段key value分别指定字段名、字段值
[具体字段请见](https://cloud.tencent.com/document/product/248/111241)
                     * @return Tags 需要修改的字段key value分别指定字段名、字段值
[具体字段请见](https://cloud.tencent.com/document/product/248/111241)
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置需要修改的字段key value分别指定字段名、字段值
[具体字段请见](https://cloud.tencent.com/document/product/248/111241)
                     * @param _tags 需要修改的字段key value分别指定字段名、字段值
[具体字段请见](https://cloud.tencent.com/document/product/248/111241)
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取需要修改配置的应用列表名称	
                     * @return ServiceNames 需要修改配置的应用列表名称	
                     * 
                     */
                    std::vector<std::string> GetServiceNames() const;

                    /**
                     * 设置需要修改配置的应用列表名称	
                     * @param _serviceNames 需要修改配置的应用列表名称	
                     * 
                     */
                    void SetServiceNames(const std::vector<std::string>& _serviceNames);

                    /**
                     * 判断参数 ServiceNames 是否已赋值
                     * @return ServiceNames 是否已赋值
                     * 
                     */
                    bool ServiceNamesHasBeenSet() const;

                private:

                    /**
                     * 业务系统Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要修改的字段key value分别指定字段名、字段值
[具体字段请见](https://cloud.tencent.com/document/product/248/111241)
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 需要修改配置的应用列表名称	
                     */
                    std::vector<std::string> m_serviceNames;
                    bool m_serviceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYGENERALAPMAPPLICATIONCONFIGREQUEST_H_
