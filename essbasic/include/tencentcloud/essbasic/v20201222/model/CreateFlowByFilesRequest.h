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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEFLOWBYFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEFLOWBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>
#include <tencentcloud/essbasic/v20201222/model/FlowInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreateFlowByFiles请求参数结构体
                */
                class CreateFlowByFilesRequest : public AbstractModel
                {
                public:
                    CreateFlowByFilesRequest();
                    ~CreateFlowByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取流程创建信息
                     * @return FlowInfo 流程创建信息
                     * 
                     */
                    FlowInfo GetFlowInfo() const;

                    /**
                     * 设置流程创建信息
                     * @param _flowInfo 流程创建信息
                     * 
                     */
                    void SetFlowInfo(const FlowInfo& _flowInfo);

                    /**
                     * 判断参数 FlowInfo 是否已赋值
                     * @return FlowInfo 是否已赋值
                     * 
                     */
                    bool FlowInfoHasBeenSet() const;

                    /**
                     * 获取文件资源列表 (支持多文件)
                     * @return FileIds 文件资源列表 (支持多文件)
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置文件资源列表 (支持多文件)
                     * @param _fileIds 文件资源列表 (支持多文件)
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取自定义流程id
                     * @return CustomId 自定义流程id
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置自定义流程id
                     * @param _customId 自定义流程id
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 流程创建信息
                     */
                    FlowInfo m_flowInfo;
                    bool m_flowInfoHasBeenSet;

                    /**
                     * 文件资源列表 (支持多文件)
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 自定义流程id
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEFLOWBYFILESREQUEST_H_
