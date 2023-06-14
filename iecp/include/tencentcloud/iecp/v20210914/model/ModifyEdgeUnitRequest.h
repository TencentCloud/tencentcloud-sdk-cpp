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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEUNITREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ModifyEdgeUnit请求参数结构体
                */
                class ModifyEdgeUnitRequest : public AbstractModel
                {
                public:
                    ModifyEdgeUnitRequest();
                    ~ModifyEdgeUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘集群ID
                     * @return EdgeUnitId 边缘集群ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置边缘集群ID
                     * @param _edgeUnitId 边缘集群ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取边缘集群名称，64字符以内
                     * @return Name 边缘集群名称，64字符以内
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置边缘集群名称，64字符以内
                     * @param _name 边缘集群名称，64字符以内
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
                     * 获取集群描述，200字符以内
                     * @return Description 集群描述，200字符以内
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集群描述，200字符以内
                     * @param _description 集群描述，200字符以内
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 边缘集群ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 边缘集群名称，64字符以内
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集群描述，200字符以内
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEUNITREQUEST_H_
