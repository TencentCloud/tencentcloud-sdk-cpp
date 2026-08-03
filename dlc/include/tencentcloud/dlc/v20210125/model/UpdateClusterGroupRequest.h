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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATECLUSTERGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATECLUSTERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateClusterGroup请求参数结构体
                */
                class UpdateClusterGroupRequest : public AbstractModel
                {
                public:
                    UpdateClusterGroupRequest();
                    ~UpdateClusterGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群组 ID（定位要更新的集群组）</p>
                     * @return Id <p>集群组 ID（定位要更新的集群组）</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>集群组 ID（定位要更新的集群组）</p>
                     * @param _id <p>集群组 ID（定位要更新的集群组）</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>集群组名称（可选，为空则保持原名）</p>
                     * @return Name <p>集群组名称（可选，为空则保持原名）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>集群组名称（可选，为空则保持原名）</p>
                     * @param _name <p>集群组名称（可选，为空则保持原名）</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>集群组描述</p>
                     * @return Description <p>集群组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>集群组描述</p>
                     * @param _description <p>集群组描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>集群组配置</p>
                     * @return Config <p>集群组配置</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>集群组配置</p>
                     * @param _config <p>集群组配置</p>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>集群组 ID（定位要更新的集群组）</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集群组名称（可选，为空则保持原名）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集群组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>集群组配置</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATECLUSTERGROUPREQUEST_H_
