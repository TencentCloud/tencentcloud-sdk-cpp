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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UploadFile.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * UploadFiles请求参数结构体
                */
                class UploadFilesRequest : public AbstractModel
                {
                public:
                    UploadFilesRequest();
                    ~UploadFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
                     * @return BusinessType 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
                     * @param BusinessType 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取应用相关信息，若是渠道版调用 appid 和proxyappid 必填
                     * @return Agent 应用相关信息，若是渠道版调用 appid 和proxyappid 必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息，若是渠道版调用 appid 和proxyappid 必填
                     * @param Agent 应用相关信息，若是渠道版调用 appid 和proxyappid 必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取上传文件内容数组，最多支持20个文件
                     * @return FileInfos 上传文件内容数组，最多支持20个文件
                     */
                    std::vector<UploadFile> GetFileInfos() const;

                    /**
                     * 设置上传文件内容数组，最多支持20个文件
                     * @param FileInfos 上传文件内容数组，最多支持20个文件
                     */
                    void SetFileInfos(const std::vector<UploadFile>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 应用相关信息，若是渠道版调用 appid 和proxyappid 必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 上传文件内容数组，最多支持20个文件
                     */
                    std::vector<UploadFile> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESREQUEST_H_
