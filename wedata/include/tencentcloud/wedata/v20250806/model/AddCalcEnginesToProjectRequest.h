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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ADDCALCENGINESTOPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ADDCALCENGINESTOPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DLCClusterInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * AddCalcEnginesToProject请求参数结构体
                */
                class AddCalcEnginesToProjectRequest : public AbstractModel
                {
                public:
                    AddCalcEnginesToProjectRequest();
                    ~AddCalcEnginesToProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改的项目ID
                     * @return ProjectId 修改的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置修改的项目ID
                     * @param _projectId 修改的项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取DLC集群信息
                     * @return DLCInfo DLC集群信息
                     * 
                     */
                    std::vector<DLCClusterInfo> GetDLCInfo() const;

                    /**
                     * 设置DLC集群信息
                     * @param _dLCInfo DLC集群信息
                     * 
                     */
                    void SetDLCInfo(const std::vector<DLCClusterInfo>& _dLCInfo);

                    /**
                     * 判断参数 DLCInfo 是否已赋值
                     * @return DLCInfo 是否已赋值
                     * 
                     */
                    bool DLCInfoHasBeenSet() const;

                private:

                    /**
                     * 修改的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * DLC集群信息
                     */
                    std::vector<DLCClusterInfo> m_dLCInfo;
                    bool m_dLCInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ADDCALCENGINESTOPROJECTREQUEST_H_
