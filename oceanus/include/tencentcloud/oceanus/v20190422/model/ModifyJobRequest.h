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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYJOBREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYJOBREQUEST_H_

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
                * ModifyJob请求参数结构体
                */
                class ModifyJobRequest : public AbstractModel
                {
                public:
                    ModifyJobRequest();
                    ~ModifyJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业Id
                     * @return JobId 作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param _jobId 作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业名称，支持长度小于50的中文/英文/数字/”-”/”_”/”.”，不能重名
                     * @return Name 作业名称，支持长度小于50的中文/英文/数字/”-”/”_”/”.”，不能重名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置作业名称，支持长度小于50的中文/英文/数字/”-”/”_”/”.”，不能重名
                     * @param _name 作业名称，支持长度小于50的中文/英文/数字/”-”/”_”/”.”，不能重名
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
                     * @return Remark 描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
                     * @param _remark 描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取拖拽文件需传入此参数
                     * @return TargetFolderId 拖拽文件需传入此参数
                     * 
                     */
                    std::string GetTargetFolderId() const;

                    /**
                     * 设置拖拽文件需传入此参数
                     * @param _targetFolderId 拖拽文件需传入此参数
                     * 
                     */
                    void SetTargetFolderId(const std::string& _targetFolderId);

                    /**
                     * 判断参数 TargetFolderId 是否已赋值
                     * @return TargetFolderId 是否已赋值
                     * 
                     */
                    bool TargetFolderIdHasBeenSet() const;

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
                     * 获取作业描述
                     * @return Description 作业描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置作业描述
                     * @param _description 作业描述
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
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名称，支持长度小于50的中文/英文/数字/”-”/”_”/”.”，不能重名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 拖拽文件需传入此参数
                     */
                    std::string m_targetFolderId;
                    bool m_targetFolderIdHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 作业描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYJOBREQUEST_H_
