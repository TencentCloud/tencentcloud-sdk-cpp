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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYWORKSPACEREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * ModifyWorkSpace请求参数结构体
                */
                class ModifyWorkSpaceRequest : public AbstractModel
                {
                public:
                    ModifyWorkSpaceRequest();
                    ~ModifyWorkSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取待修改的工作空间名称
                     * @return WorkSpaceName 待修改的工作空间名称
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置待修改的工作空间名称
                     * @param _workSpaceName 待修改的工作空间名称
                     * 
                     */
                    void SetWorkSpaceName(const std::string& _workSpaceName);

                    /**
                     * 判断参数 WorkSpaceName 是否已赋值
                     * @return WorkSpaceName 是否已赋值
                     * 
                     */
                    bool WorkSpaceNameHasBeenSet() const;

                    /**
                     * 获取待修改的工作空间备注
                     * @return Description 待修改的工作空间备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置待修改的工作空间备注
                     * @param _description 待修改的工作空间备注
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
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 待修改的工作空间名称
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                    /**
                     * 待修改的工作空间备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYWORKSPACEREQUEST_H_
