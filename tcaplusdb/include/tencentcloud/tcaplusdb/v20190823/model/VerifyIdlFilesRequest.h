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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * VerifyIdlFiles请求参数结构体
                */
                class VerifyIdlFilesRequest : public AbstractModel
                {
                public:
                    VerifyIdlFilesRequest();
                    ~VerifyIdlFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待加表的应用实例ID
                     * @return ApplicationId 待加表的应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置待加表的应用实例ID
                     * @param ApplicationId 待加表的应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取待加表的大区ID
                     * @return LogicZoneId 待加表的大区ID
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置待加表的大区ID
                     * @param LogicZoneId 待加表的大区ID
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                    /**
                     * 获取曾经上传过的IDL文件信息列表，与NewIdlFiles至少有一者
                     * @return ExistingIdlFiles 曾经上传过的IDL文件信息列表，与NewIdlFiles至少有一者
                     */
                    std::vector<IdlFileInfo> GetExistingIdlFiles() const;

                    /**
                     * 设置曾经上传过的IDL文件信息列表，与NewIdlFiles至少有一者
                     * @param ExistingIdlFiles 曾经上传过的IDL文件信息列表，与NewIdlFiles至少有一者
                     */
                    void SetExistingIdlFiles(const std::vector<IdlFileInfo>& _existingIdlFiles);

                    /**
                     * 判断参数 ExistingIdlFiles 是否已赋值
                     * @return ExistingIdlFiles 是否已赋值
                     */
                    bool ExistingIdlFilesHasBeenSet() const;

                    /**
                     * 获取待上传的IDL文件信息列表，与ExistingIdlFiles至少有一者
                     * @return NewIdlFiles 待上传的IDL文件信息列表，与ExistingIdlFiles至少有一者
                     */
                    std::vector<IdlFileInfo> GetNewIdlFiles() const;

                    /**
                     * 设置待上传的IDL文件信息列表，与ExistingIdlFiles至少有一者
                     * @param NewIdlFiles 待上传的IDL文件信息列表，与ExistingIdlFiles至少有一者
                     */
                    void SetNewIdlFiles(const std::vector<IdlFileInfo>& _newIdlFiles);

                    /**
                     * 判断参数 NewIdlFiles 是否已赋值
                     * @return NewIdlFiles 是否已赋值
                     */
                    bool NewIdlFilesHasBeenSet() const;

                private:

                    /**
                     * 待加表的应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 待加表的大区ID
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                    /**
                     * 曾经上传过的IDL文件信息列表，与NewIdlFiles至少有一者
                     */
                    std::vector<IdlFileInfo> m_existingIdlFiles;
                    bool m_existingIdlFilesHasBeenSet;

                    /**
                     * 待上传的IDL文件信息列表，与ExistingIdlFiles至少有一者
                     */
                    std::vector<IdlFileInfo> m_newIdlFiles;
                    bool m_newIdlFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESREQUEST_H_
