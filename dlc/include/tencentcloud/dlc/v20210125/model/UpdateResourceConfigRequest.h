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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATERESOURCECONFIGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATERESOURCECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/HeadSpecDTO.h>
#include <tencentcloud/dlc/v20210125/model/WorkerSpecDTO.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateResourceConfig请求参数结构体
                */
                class UpdateResourceConfigRequest : public AbstractModel
                {
                public:
                    UpdateResourceConfigRequest();
                    ~UpdateResourceConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源配置模板Id
                     * @return Id 资源配置模板Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源配置模板Id
                     * @param _id 资源配置模板Id
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
                     * 获取模板名称
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取Head节点配置
                     * @return Head Head节点配置
                     * 
                     */
                    HeadSpecDTO GetHead() const;

                    /**
                     * 设置Head节点配置
                     * @param _head Head节点配置
                     * 
                     */
                    void SetHead(const HeadSpecDTO& _head);

                    /**
                     * 判断参数 Head 是否已赋值
                     * @return Head 是否已赋值
                     * 
                     */
                    bool HeadHasBeenSet() const;

                    /**
                     * 获取Worker节点配置
                     * @return Worker Worker节点配置
                     * 
                     */
                    std::vector<WorkerSpecDTO> GetWorker() const;

                    /**
                     * 设置Worker节点配置
                     * @param _worker Worker节点配置
                     * 
                     */
                    void SetWorker(const std::vector<WorkerSpecDTO>& _worker);

                    /**
                     * 判断参数 Worker 是否已赋值
                     * @return Worker 是否已赋值
                     * 
                     */
                    bool WorkerHasBeenSet() const;

                    /**
                     * 获取模板类型(不传默认Ray)
                     * @return Type 模板类型(不传默认Ray)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型(不传默认Ray)
                     * @param _type 模板类型(不传默认Ray)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 资源配置模板Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Head节点配置
                     */
                    HeadSpecDTO m_head;
                    bool m_headHasBeenSet;

                    /**
                     * Worker节点配置
                     */
                    std::vector<WorkerSpecDTO> m_worker;
                    bool m_workerHasBeenSet;

                    /**
                     * 模板类型(不传默认Ray)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATERESOURCECONFIGREQUEST_H_
